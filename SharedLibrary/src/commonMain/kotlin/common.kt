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
import kotlinx.serialization.Serializable

expect class Platform() {
    val name: String
}

class SharedSpeaker {
    fun sharedGreeting(): String = "Hello, Android and iOS worlds!"
    fun platformGreeting(): String = "Hello, ${Platform().name} world!"
}
