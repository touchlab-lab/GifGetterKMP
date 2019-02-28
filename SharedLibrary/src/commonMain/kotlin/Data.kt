package org.sharedLibrary

import io.ktor.client.HttpClient
import io.ktor.client.features.HttpClientFeature
import io.ktor.client.response.HttpResponse
import io.ktor.client.response.HttpResponsePipeline
import io.ktor.http.isSuccess
import io.ktor.util.AttributeKey
import kotlinx.serialization.Serializable
import kotlin.native.concurrent.ThreadLocal

@Serializable
data class GifResult(
        val `data`: List<Data>
)

@Serializable
data class Data(
        val images: Images
)

@Serializable
data class Images(
        val original: Original
)

@Serializable
data class Original(
        val url: String
)

class ApiError: Throwable()