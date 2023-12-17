using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using System.Collections;
using System;
using UnityEngine.Networking;
using UnityEngine.XR.ARSubsystems;
using System.Text;
using Newtonsoft.Json;



public class GPTmanager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
        
    }

    private string EncodeTextureToBase64(Texture2D texture)
    {
        byte[] imageBytes = texture.EncodeToJPG(); // 또는 EncodeToJPG()
        string bas64 = Convert.ToBase64String(imageBytes);
        return bas64;
    }

    public IEnumerator SendImageToGPT4(Texture2D texture, Action<string> callback)
    {
        string base64Image = EncodeTextureToBase64(texture);
        string apiEndpoint = "https://api.openai.com/v1/chat/completions";
        string apiKey = "";
        

        var headers = new Dictionary<string, string>
        {
            { "Content-Type", "application/json" },
            { "Authorization", $"Bearer {apiKey}" }
        };

        var payload = new
        {
            model = "gpt-4-vision-preview",
            messages = new[]
            {
                new 
                {
                    role = "user",
                    content = new object[]
                    {
                        new { type = "text", text = "If the image has a math formula written on it, return the formula in TeX format only. If the image does not contain a formula, just answer None. Never answer with a phrase other than the requested one." },
                        new { type = "image_url", image_url = new { url = $"data:image/jpeg;base64,{base64Image}" } }
                    }
                }
            },
            max_tokens = 300
        };



        string jsonPayload = JsonConvert.SerializeObject(payload);
        Debug.Log(jsonPayload);
        byte[] payloadBytes = Encoding.UTF8.GetBytes(jsonPayload);

        using (UnityWebRequest request = new UnityWebRequest(apiEndpoint, "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(payloadBytes);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Authorization", $"Bearer {apiKey}");

            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error: " + request.error);
                callback?.Invoke(null);
            }
            else
            {
                string responseText = request.downloadHandler.text;
                callback?.Invoke(responseText); // 콜백으로 결과 전달
                // GPT-4 응답 처리
            }
        }
    }
}
