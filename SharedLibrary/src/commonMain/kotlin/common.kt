package org.sharedLibrary

import io.ktor.client.*
import io.ktor.client.request.*
import io.ktor.http.*
import kotlinx.io.core.*
import kotlinx.io.core.use
import io.ktor.client.features.json.*
import io.ktor.client.features.json.serializer.*
import io.ktor.client.request.*
import io.ktor.client.response.*

expect class Platform() {
    val name: String
}

class SharedSpeaker {
    fun sharedGreeting(): String = "Hello, Android and iOS worlds!"
    fun platformGreeting(): String = "Hello, ${Platform().name} world!"
}

class GiphyAPI {

    private val client = HttpClient {
        install(JsonFeature) {
            serializer = KotlinxSerializer().apply {
//                setMapper(AllData::class, AllData.serializer())
//                setMapper(Favorite::class, Favorite.serializer())
//                setMapper(Vote::class, Vote.serializer())
            }
        }
    }

    suspend fun getTrending(): String {
        return client.use {
            it.get("https://api.giphy.com/v1/gifs/trending?api_key=u1Ev7LgrhF98DHGTUTDA6xWjRhn0PJPI&limit=25&rating=G")
        }
    }
}


data class GifResult(
        val `data`: List<Data>
)

data class Data(
        val images: Images
)

data class Images(
        val original: Original
)

data class Original(
        val url: String
)

