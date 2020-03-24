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
	implementation("com.github.bumptech.glide:glide:4.9.0") // TODO: check for update
    annotationProcessor("com.github.bumptech.glide:compiler:4.9.0")
    testImplementation(Deps.junit)



//    implementation fileTree(dir: "libs", include: ["*.jar"])
//    implementation "org.jetbrains.kotlin:kotlin-stdlib"
//    implementation(project(":GifLibrary"))
//
//    implementation "com.android.support:appcompat-v7:28.0.0"
//
//    testImplementation "org.jetbrains.kotlin:kotlin-test"
//    testImplementation "junit:junit:4.12"
//
//    androidTestImplementation "junit:junit:4.12"
//    androidTestImplementation "com.android.support.test:runner:1.0.2"
//    androidTestImplementation "com.android.support.test.espresso:espresso-core:3.0.2"
//
//    implementation "org.jetbrains.kotlin:kotlin-stdlib-jdk7:$kotlin_version"
//    implementation "io.ktor:ktor-client-android:$ktor_version"
//    implementation "org.jetbrains.kotlinx:kotlinx-coroutines-android:$kotlinx_coroutines_version"
//
//    implementation "com.android.support:recyclerview-v7:28.0.0"
//    implementation "com.github.bumptech.glide:glide:4.9.0"
//    annotationProcessor "com.github.bumptech.glide:compiler:4.9.0"
//    implementation ("com.github.bumptech.glide:recyclerview-integration:4.9.0") {
//        // Excludes the support library because it"s already included by Glide.
//        transitive = false
//    }
}
