import org.jetbrains.kotlin.config.KotlinCompilerVersion

plugins {
	id("com.android.application")
	kotlin("android")
	kotlin("android.extensions")
}

android {
	compileSdkVersion(Versions.compile_sdk)
	buildToolsVersion = Versions.buildToolsVersion // TODO: necessary?

	defaultConfig {
        applicationId = "org.touchlab.gifgetter"
		minSdkVersion(Versions.min_sdk)
		targetSdkVersion(Versions.target_sdk)
		versionCode = 1
		versionName = "1.0"
		testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }

	// TODO: necessary?
	packagingOptions {
		exclude("META-INF/*.kotlin_module")
	}

	buildTypes {
		getByName("release")  {
			isMinifyEnabled = false
			proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
		}
	}

	compileOptions {
		sourceCompatibility = JavaVersion.VERSION_1_8
		targetCompatibility = JavaVersion.VERSION_1_8
	}
}

dependencies {
	implementation(kotlin("stdlib-jdk7", KotlinCompilerVersion.VERSION))
	implementation(project(":GifLibrary"))
	implementation("androidx.recyclerview:recyclerview:1.1.0")
	implementation(Deps.material_x)
	implementation(Deps.app_compat_x)
	implementation(Deps.core_ktx)
	implementation(Deps.ktor.androidCore)
	implementation(Deps.constraintlayout)
	implementation(Deps.Coroutines.jdk)
	implementation(Deps.Coroutines.android)
	implementation(Deps.glide)
    annotationProcessor(Deps.glide)
    testImplementation(Deps.junit)
}
