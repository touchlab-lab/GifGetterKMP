package org.gifLibrary

import kotlinx.serialization.Serializable

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