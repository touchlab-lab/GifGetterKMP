package org.sharedLibrary

import kotlinx.coroutines.*
import platform.darwin.dispatch_async
import platform.darwin.dispatch_get_main_queue
import platform.darwin.dispatch_queue_t
import kotlin.coroutines.CoroutineContext
import kotlin.native.concurrent.freeze
import kotlinx.coroutines.*

internal actual val ApplicationDispatcher: CoroutineDispatcher = NsQueueDispatcher(dispatch_get_main_queue())
internal actual val UIDispatcher: CoroutineDispatcher = ApplicationDispatcher
internal actual fun test() {}

internal class NsQueueDispatcher(private val dispatchQueue: dispatch_queue_t) : CoroutineDispatcher() {
    override fun dispatch(context: CoroutineContext, block: Runnable) {
        dispatch_async(dispatchQueue.freeze()) {
            block.run()
        }
    }
}

//@ExperimentalCoroutinesApi
//actual class GifsViewModel {
//    actual fun getGifs(callback: (List<String>) -> Unit) {
//        activityScope.launch {
//            val urls = async(Dispatchers.IO) {
//                Log.d("EXAMPLE", "Calling api:" + Thread.currentThread().name)
//                GiphyAPI().getGifURLS(callback)
//            }.await()
//            Log.d("SAMPLE", "Have result: " + urls + " : " + Thread.currentThread().name)
//    }
//}

