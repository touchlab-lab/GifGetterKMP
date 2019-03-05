package org.sharedLibrary

import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.get
import io.ktor.client.request.header
import io.ktor.http.ContentType
import io.ktor.http.contentType
import io.ktor.http.takeFrom
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.Runnable
import kotlinx.coroutines.launch
import kotlinx.serialization.json.JSON
import kotlinx.serialization.json.Json

class GiphyAPI {

    private val apiKey = "u1Ev7LgrhF98DHGTUTDA6xWjRhn0PJPI"

    private val client = HttpClient {
        install(JsonFeature) {
            serializer = KotlinxSerializer(Json.nonstrict).apply {
                setMapper(GifResult::class, GifResult.serializer())
            }
        }
    }

    suspend fun getGifUrls(callback: (List<String>) -> Unit) {
        getGifs {
            val urls = it.data.map {
                it.images.original.url
            }
            callback(urls)
        }
    }

    suspend fun getGifs(callback: (GifResult) -> Unit) {

        GlobalScope.apply {
            launch(ApplicationDispatcher) {
                println("inside async")
//                val result: String = client.get {
//                    url(addr.toString())
//                    header("api-key", "dc6zaTOxFJmzC")
//                }
                val result: GifResult = callGiphyAPI()
                println("result: $result")
                UIDispatcher.dispatch(coroutineContext,
                        object : Runnable {
                            override fun run() {
                                callback(result)
                            }
                        }
                )
            }
        }
//        var urls = getGifs().data.map {
//            it.images.original.url
//        }
    }

    suspend fun callGiphyAPI(): GifResult = client.get {
        apiUrl(path = "v1/gifs/trending?api_key=$apiKey&limit=25&rating=G")
    }

    private fun HttpRequestBuilder.json() {
        contentType(ContentType.Application.Json)
    }

    private fun HttpRequestBuilder.apiUrl(path: String) {
        url {
            takeFrom("https://api.giphy.com/")
            encodedPath = path
        }
    }
}