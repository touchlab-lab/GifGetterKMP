import org.gradle.api.artifacts.ExternalModuleDependency
import org.gradle.kotlin.dsl.exclude

object Versions {
    val min_sdk = 				21
    val target_sdk = 			29
    val compile_sdk = 			29

    val kotlin = 				"1.3.61"
    val android_x = 			"1.1.0"
    val android_gradle_plugin = "3.4.1"
    val buildToolsVersion = 	"29.0.0"
    val junit = 				"4.12"
    val ktor = 					"1.2.6"
    val coroutines = 			"1.3.3-native-mt"
    val xcodesync = 			"0.2"
	val koin = 					"3.0.0-alpha-8"
	val glide = 				"4.11.0"

}

object Deps {
    val app_compat_x = 			"androidx.appcompat:appcompat:${Versions.android_x}"
    val material_x = 			"com.google.android.material:material:${Versions.android_x}"
    val core_ktx = 				"androidx.core:core-ktx:${Versions.android_x}"
    val constraintlayout = 		"androidx.constraintlayout:constraintlayout:${Versions.android_x}"
    val android_gradle_plugin = "com.android.tools.build:gradle:${Versions.android_gradle_plugin}"
    val junit = 				"junit:junit:${Versions.junit}"
    val xcodesync = 			"co.touchlab:kotlinxcodesync:${Versions.xcodesync}"
	val koinCore = 				"org.koin:koin-core:${Versions.koin}"
	val glide =					"com.github.bumptech.glide:glide:${Versions.glide}"

    object Coroutines {
        val common =	"org.jetbrains.kotlinx:kotlinx-coroutines-core-common:${Versions.coroutines}"
        val jdk = 		"org.jetbrains.kotlinx:kotlinx-coroutines-core:${Versions.coroutines}"
        val native = 	"org.jetbrains.kotlinx:kotlinx-coroutines-core-native:${Versions.coroutines}"
        val android = 	"org.jetbrains.kotlinx:kotlinx-coroutines-android:${Versions.coroutines}"
    }

    object ktor {
        val commonCore = 			"io.ktor:ktor-client-core:${Versions.ktor}"
        val commonJson = 			"io.ktor:ktor-client-json:${Versions.ktor}"
        val jvmCore =     			"io.ktor:ktor-client-core-jvm:${Versions.ktor}"
        val androidCore = 			"io.ktor:ktor-client-okhttp:${Versions.ktor}"
        val jvmJson =     			"io.ktor:ktor-client-json-jvm:${Versions.ktor}"
        val ios =         			"io.ktor:ktor-client-ios:${Versions.ktor}"
        val iosCore =     			"io.ktor:ktor-client-core-native:${Versions.ktor}"
        val iosJson =     			"io.ktor:ktor-client-json-native:${Versions.ktor}"
        val commonSerialization =	"io.ktor:ktor-client-serialization:${Versions.ktor}"
        val androidSerialization = 	"io.ktor:ktor-client-serialization-jvm:${Versions.ktor}"
        val iosSerialization =		"io.ktor:ktor-client-serialization-native:${Versions.ktor}"
    }

    val coroutinesExcludeNative: ExternalModuleDependency.() -> Unit = {
        exclude(group = "org.jetbrains.kotlinx", module = "kotlinx-coroutines-core-native")
    }
}
