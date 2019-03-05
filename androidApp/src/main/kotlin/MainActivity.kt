package org.touchlab.gifgetter

import android.app.AlertDialog
import android.app.Application
import android.content.Context
import android.net.ConnectivityManager
import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import android.support.v7.widget.LinearLayoutManager
import android.support.v7.widget.RecyclerView
import android.util.Log
import android.widget.LinearLayout
import android.widget.TextView
import kotlinx.coroutines.*
import org.sharedLibrary.GifResult
import org.sharedLibrary.GiphyAPI
import org.touchlab.gifgetter.R
import kotlin.properties.Delegates

@ExperimentalCoroutinesApi
class MainActivity : AppCompatActivity() {

    private lateinit var adapter: GifAdapter

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val gifList: RecyclerView = findViewById(R.id.gif_list)
        val layoutManager = LinearLayoutManager(this)
        gifList.layoutManager = layoutManager

        adapter = GifAdapter(this)
        gifList.adapter = adapter

        if (isNetworkConnected()) {
            getGifUrls {
                adapter.setResults(it)
                Log.d("CALLBACK", "Back in MainActivity")
            }
        } else {
            showAlert()
        }
    }

    private fun getGifUrls(callback: (List<String>) -> Unit) {
        MainScope().launch {
            val urls = async(Dispatchers.IO) {
                Log.d("EXAMPLE", "Calling api:" + Thread.currentThread().name)
                GiphyAPI().getGifUrls(callback)
            }.await()
            Log.d("RESULT", "URLS: " + urls + " THREAD: " + Thread.currentThread().name)
        }
    }

    private fun showAlert() {
        AlertDialog.Builder(this).setTitle("No Internet Connection")
                .setMessage("Please check your internet connection and try again")
                .setPositiveButton(android.R.string.ok) { _, _ -> }
                .setIcon(android.R.drawable.ic_dialog_alert).show()
    }

    private fun isNetworkConnected(): Boolean {
        val connectivityManager = getSystemService(Context.CONNECTIVITY_SERVICE) as ConnectivityManager
        val networkInfo = connectivityManager.activeNetworkInfo
        return networkInfo != null && networkInfo.isConnected
    }
}