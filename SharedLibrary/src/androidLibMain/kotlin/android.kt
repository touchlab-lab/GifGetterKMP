package org.sharedLibrary

import android.util.Log
import kotlinx.coroutines.*

internal actual val UIDispatcher: CoroutineDispatcher = Dispatchers.Main
internal actual fun test() {}

//@ExperimentalCoroutinesApi
//actual class GifsViewModel {
//
//    private val activityScope = MainScope()
//
//    actual fun getGifs(callback: (List<String>) -> Unit) {
//        activityScope.launch {
//                val urls = async(Dispatchers.IO) {
//                    Log.d("EXAMPLE", "Calling api:" + Thread.currentThread().name)
//                    GiphyAPI().getGifURLS(callback)
//                }.await()
//            Log.d("SAMPLE", "Have result: " + urls + " : " + Thread.currentThread().name)
//        }
//    }
//}

