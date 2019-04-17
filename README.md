# Multiplatform sample

This sample based on the [multiplatform documentation](https://github.com/h0tk3y/k-new-mpp-samples/blob/master/README.md).
If you have questions about the structure or how it works take a look at the documentation there.

## iOS

To compile the project from Xcode just open `iosApp/iosApp.xcodeproj` and run the application.
The [swift tests](iosApp/iosAppTests/iosAppTests.swift) also can be executed from Xcode.

To compile a framework for ios simulator from the command line execute:

```
  > ./gradlew :GifLibrary:build
```

To compile the framework for a device use the `device` project property:

```
  > ./gradlew :GifLibrary:build -Pdevice=true
```

By default the `iPhone 8` simulator is used. One can change this setting using the `iosDevice` project property:

```
  > ./gradlew :GifLibrary:iosTest -PiosDevice='iPhone 7'
```


## Android

The application can be built and executed on a device or emulator using Android Studio 3.2 or higher.
One can also compile the application and run tests from the command line:

```
   > ./gradlew :androidApp:build
```
