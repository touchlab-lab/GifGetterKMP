package org.touchlab.gifgetter

import android.app.Application
import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import android.util.Log
import android.widget.LinearLayout
import android.widget.TextView
import kotlinx.coroutines.*
import org.sharedLibrary.GifsViewModel
import org.sharedLibrary.SharedSpeaker
import org.touchlab.gifgetter.R
import kotlin.properties.Delegates

@ExperimentalCoroutinesApi
class MainActivity : AppCompatActivity() {

    private val activityScope = MainScope()

    private var rootLayout: LinearLayout by Delegates.notNull()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        rootLayout = findViewById(R.id.main_view) as LinearLayout
        rootLayout.removeAllViews()

        activityScope.launch {
            val urls = async(Dispatchers.IO) {
                Log.d("EXAMPLE", "Calling api:" + Thread.currentThread().name)
                GifsViewModel().getGifURLS()
            }.await()
            Log.d("SAMPLE", "Have result: " + urls.size + " : " + Thread.currentThread().name)
        }

//        val tv = TextView(this)
//        rootLayout.addView(tv)
    }
}