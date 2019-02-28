package org.sharedLibrary

import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.get
import io.ktor.http.ContentType
import io.ktor.http.contentType
import io.ktor.http.takeFrom
import kotlinx.coroutines.CoroutineScope
import kotlinx.serialization.json.Json

class GifsViewModel {
    private val api = GiphyAPI()

    suspend fun getGifURLS(): List<String> {
        return api.getGifs().data.map {
            it.images.original.url
        }
    }
}

class GiphyAPI {

    private val apiKey = "u1Ev7LgrhF98DHGTUTDA6xWjRhn0PJPI"

    private val client = HttpClient {
        install(JsonFeature) {
            serializer = KotlinxSerializer(Json.nonstrict).apply {
                setMapper(GifResult::class, GifResult.serializer())
            }
        }
    }

    suspend fun getGifs(): GifResult = client.get {
        apiUrl(path = "v1/gifs/trending?api_key=$apiKey&limit=25&rating=G")
//        json()
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