import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
	kotlin("multiplatform")
	kotlin("native.cocoapods")
	id("kotlinx-serialization")
	id("com.android.library")
	id("co.touchlab.kotlinxcodesync")
}

android {
	compileSdkVersion(28)
	defaultConfig {
		minSdkVersion(Versions.min_sdk)
		targetSdkVersion(Versions.target_sdk)
		versionCode = 1
		versionName = "1.0"
		testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
	}
}

kotlin {
	android()
	//Revert to just ios() when gradle plugin can properly resolve it
	val onPhone = System.getenv("SDK_NAME")?.startsWith("iphoneos")?:false
	if (onPhone) {
		iosArm64("ios")
	} else {
		iosX64("ios")
	}
	targets.getByName<KotlinNativeTarget>("ios").compilations["main"].kotlinOptions.freeCompilerArgs += "-Xobjc-generics"

	version = "1.0"

	sourceSets["commonMain"].dependencies {
		implementation(kotlin("stdlib-common", Versions.kotlin))
		implementation(Deps.ktor.commonCore)
		implementation(Deps.ktor.commonJson)
		implementation(Deps.Coroutines.common)
		implementation(Deps.ktor.commonSerialization)
	}

	sourceSets["androidMain"].dependencies {
		implementation(kotlin("stdlib", Versions.kotlin))
		implementation(Deps.ktor.jvmCore)
		implementation(Deps.ktor.jvmJson)
		implementation(Deps.Coroutines.jdk)
		implementation(Deps.Coroutines.android)
		implementation(Deps.ktor.androidSerialization)
	}

	sourceSets["iosMain"].dependencies {
		implementation(Deps.ktor.ios, Deps.coroutinesExcludeNative)
		implementation(Deps.ktor.iosCore, Deps.coroutinesExcludeNative)
		implementation(Deps.ktor.iosJson, Deps.coroutinesExcludeNative)
		implementation(Deps.Coroutines.native)
		implementation(Deps.ktor.iosSerialization)
	}

	cocoapods {
		summary = "Common library for the GifGetter KMP article project"
		homepage = "https://github.com/touchlab/GifGetterKMP"
	}

	xcodeSync {
		projectPath = "../ios/GifGetter.xcodeproj"
		target = "GifGetter"
	}
}
