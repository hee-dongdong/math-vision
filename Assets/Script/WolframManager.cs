using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using ThreeDISevenZeroR.UnityGifDecoder;

public class WolframAlphaManager : MonoBehaviour
{
    private string appID = "";

    public IEnumerator GetWolframAlphaResult(string query, System.Action<List<Texture2D>> callback)
    {
        string encodedQuery = WWW.EscapeURL(query);
        string url = $"http://api.wolframalpha.com/v1/simple?appid={appID}&i={encodedQuery}";

        using (UnityWebRequest request = UnityWebRequest.Get(url))
        {
            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Wolfram Alpha request error: " + request.error);
                callback(null);
            }
            else
            {
                byte[] gifData = request.downloadHandler.data;
                using (var gifStream = new MemoryStream(gifData))
                {
                    var (frames, frameDelays) = DecodeGif(gifStream);
                    callback(frames);
                }
            }
        }
    }

    private (List<Texture2D>, List<float>) DecodeGif(Stream gifStream)
    {
        var frames = new List<Texture2D>();
        var frameDelays = new List<float>();

        using (var gifDecoder = new GifStream(gifStream))
        {
            while (gifDecoder.HasMoreData)
            {
                switch (gifDecoder.CurrentToken)
                {
                    case GifStream.Token.Image:
                        var image = gifDecoder.ReadImage();
                        var texture = new Texture2D(
                            gifDecoder.Header.width, 
                            gifDecoder.Header.height, 
                            TextureFormat.ARGB32, false);

                        texture.SetPixels32(image.colors);
                        texture.Apply();

                        frames.Add(texture);
                        frameDelays.Add(image.delay / 100f);
                        break;
                    
                    default:
                        gifDecoder.SkipToken();
                        break;
                }
            }
        }

        return (frames, frameDelays);
    }
}
