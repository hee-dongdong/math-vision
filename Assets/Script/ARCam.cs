using Unity.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using System.Collections;
using UnityEngine.XR.ARSubsystems;
using System;
using UnityEngine.Networking;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;




public class ARCameraCapture : MonoBehaviour
{
    private ARCameraManager arCameraManager;
    public float captureIntervalSeconds = 10.0f;
    public GPTmanager gptManager;
    public Renderer textureDisplayRenderer;
    public WolframAlphaManager wolframAlphaManager;

    void Start()
    {
        arCameraManager = GetComponent<ARCameraManager>();
        StartCoroutine(CaptureRoutine());
    }

    private IEnumerator CaptureRoutine()
    {
        while (true)
        {
            yield return new WaitForSeconds(captureIntervalSeconds);
            CaptureAndSendImage();
        }
    }

    private void CaptureAndSendImage()
    {
        XRCpuImage image;
        if (arCameraManager.TryAcquireLatestCpuImage(out image))
        {
            // XRCpuImage를 Texture2D로 변환
            Texture2D texture = ConvertToTexture2D(image);
            image.Dispose(); // 이미지 사용 후 해제

            // GPT-4 API에 바이트 배열 전송 (비동기 처리)
            gptManager.StartCoroutine(gptManager.SendImageToGPT4(texture, (gptResponse) =>
            {
                if (!string.IsNullOrEmpty(gptResponse))
                {
                    Debug.Log("GPT-4 Response: " + gptResponse);

                    // JObject를 사용하여 GPT-4 응답을 파싱
                    var responseJson = JObject.Parse(gptResponse);

                    // "choices" 배열에서 첫 번째 항목의 "message" 객체의 "content" 필드를 추출
                    string formula = responseJson["choices"][0]["message"]["content"].ToString();

                    Debug.Log("Formula: " + formula);

                    // Wolfram Alpha API에 수식 전송
                    StartCoroutine(wolframAlphaManager.GetWolframAlphaResult(formula, (resultTexture) =>
                    {
                        if (resultTexture != null)
                        {
                            // AR 환경에서 결과 이미지 표시
                            textureDisplayRenderer.material.mainTexture = resultTexture[0];
                        }
                    }));
                }
                else
                {
                    Debug.Log("Failed to receive GPT-4 response.");
                }
            }));

        }
    }

    // Texture2D를 90도 회전시키는 함수
    public Texture2D RotateTexture90(Texture2D originalTexture)
    {
        Texture2D rotatedTexture = new Texture2D(originalTexture.height, originalTexture.width);

        for (int i = 0; i < originalTexture.width; i++)
        {
            for (int j = 0; j < originalTexture.height; j++)
            {
                rotatedTexture.SetPixel(j, originalTexture.width - 1 - i, originalTexture.GetPixel(i, j));
            }
        }

        rotatedTexture.Apply();
        return rotatedTexture;
    }

    // Texture2D를 시계 방향으로 90도 회전시키는 함수
    public Texture2D RotateTextureClockwise90(Texture2D originalTexture)
    {
        Texture2D rotatedTexture = new Texture2D(originalTexture.height, originalTexture.width);

        int originalWidth = originalTexture.width;
        int originalHeight = originalTexture.height;

        for (int i = 0; i < originalWidth; i++)
        {
            for (int j = 0; j < originalHeight; j++)
            {
                rotatedTexture.SetPixel(originalHeight - 1 - j, i, originalTexture.GetPixel(i, j));
            }
        }

        rotatedTexture.Apply();
        return rotatedTexture;
    }


    // Texture2D를 180도 회전시키는 함수
    public Texture2D RotateTexture180(Texture2D originalTexture)
    {
        Texture2D rotatedTexture = new Texture2D(originalTexture.width, originalTexture.height);

        int width = originalTexture.width;
        int height = originalTexture.height;

        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                rotatedTexture.SetPixel(width - 1 - i, height - 1 - j, originalTexture.GetPixel(i, j));
            }
        }

        rotatedTexture.Apply();
        return rotatedTexture;
    }

    // Texture2D를 270도 회전시키는 함수
    public Texture2D RotateTexture270(Texture2D originalTexture)
    {
        Texture2D rotatedTexture = new Texture2D(originalTexture.height, originalTexture.width);

        for (int i = 0; i < originalTexture.width; i++)
        {
            for (int j = 0; j < originalTexture.height; j++)
            {
                rotatedTexture.SetPixel(originalTexture.height - 1 - j, i, originalTexture.GetPixel(i, j));
            }
        }

        rotatedTexture.Apply();
        return rotatedTexture;
    }



    private Texture2D ConvertToTexture2D(XRCpuImage image)
    {
        // XRCpuImage에서 Texture2D로 변환
        var format = TextureFormat.RGBA32;
        var texture = new Texture2D(image.width, image.height, format, false);

        XRCpuImage.ConversionParams conversionParams = new XRCpuImage.ConversionParams
        {
            // 이미지 변환 설정
            inputRect = new RectInt(0, 0, image.width, image.height),
            outputDimensions = new Vector2Int(image.width, image.height),
            outputFormat = format,
            transformation = XRCpuImage.Transformation.MirrorX
        };

        // 변환된 이미지 데이터를 저장할 배열
        int size = image.GetConvertedDataSize(conversionParams);
        var buffer = new NativeArray<byte>(size, Allocator.Temp);
        
        // 이미지 데이터 변환
        image.Convert(conversionParams, buffer);
        texture.LoadRawTextureData(buffer);
        texture.Apply();
        Debug.Log("Texture width: " + texture.width + ", height: " + texture.height);

        // NativeArray 해제
        buffer.Dispose();

        Texture2D rotatedTexture;
        switch (Screen.orientation)
        {
            case ScreenOrientation.LandscapeLeft:
                // 필요한 경우 RotateTexture90, RotateTexture180, RotateTexture270 함수 중 하나를 호출
                rotatedTexture = RotateTexture90(texture);
                break;
            case ScreenOrientation.LandscapeRight:
                rotatedTexture = RotateTexture270(texture);
                break;
            case ScreenOrientation.PortraitUpsideDown:
                rotatedTexture = RotateTexture180(texture);
                break;
            default:
                rotatedTexture = texture; // 추가 회전 없음
                break;
        }

        return RotateTexture90(rotatedTexture);
    }

    





    



}