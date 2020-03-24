// Top-level build file where you can add configuration options common to all sub-projects/modules.

buildscript {
    repositories {
        google()
        jcenter()
    }

    dependencies {
		classpath(Deps.android_gradle_plugin)
		classpath(Deps.xcodesync)
		classpath("org.jetbrains.kotlin:kotlin-serialization:${Versions.kotlin}")
		classpath(kotlin("gradle-plugin", Versions.kotlin))
    }
}

allprojects {
    repositories {
        google()
        jcenter()
        maven(url = "https://kotlin.bintray.com/kotlinx")
		maven(url = "https://dl.bintray.com/touchlabpublic/kotlin")
		maven(url = "https://oss.sonatype.org/content/repositories/snapshots/")
    }
}

tasks.register("clean", Delete::class) {
	delete(rootProject.buildDir)
}

