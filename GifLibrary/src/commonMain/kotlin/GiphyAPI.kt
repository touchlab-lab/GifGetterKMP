package org.gifLibrary

import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.get
import io.ktor.http.takeFrom
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.serialization.json.Json

class GiphyAPI {

    val apiKey: String = "FoRxqxRzpB3JStCEGITPPKicE8MTa67q"

    private val client: HttpClient = HttpClient {
        install(JsonFeature) {
            serializer = KotlinxSerializer(Json.nonstrict).apply {
                setMapper(GifResult::class, GifResult.serializer())
            }
        }
    }

    private fun HttpRequestBuilder.apiUrl(path: String) {
        url {
            takeFrom("https://api.giphy.com/")
            encodedPath = path
        }
    }

    suspend fun callGiphyAPI(): GifResult = client.get {
            apiUrl(path = "v1/gifs/search?api_key=$apiKey&q=whoa&limit=25&offset=0&rating=G&lang=en")
    }

    fun getGifUrls(callback: (List<String>) -> Unit) {
        GlobalScope.apply {
            launch(dispatcher) {
                val result: GifResult = callGiphyAPI()
                val urls = result.data.map {
                    it.images.original.url
                }
                callback(urls)
            }
        }
    }
}
