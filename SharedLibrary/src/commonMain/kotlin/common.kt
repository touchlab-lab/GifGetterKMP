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
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.serialization.Serializable

internal expect val ApplicationDispatcher: CoroutineDispatcher
internal expect val UIDispatcher: CoroutineDispatcher
internal expect fun test(): Unit

//expect class GifsViewModel {
//    fun getGifs(callback: (List<String>) -> Unit)
//}