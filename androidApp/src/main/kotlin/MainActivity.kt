package org.touchlab.gifgetter

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.PagerSnapHelper
import androidx.recyclerview.widget.RecyclerView
import kotlinx.coroutines.*

@ExperimentalCoroutinesApi
class MainActivity : AppCompatActivity() {

    private lateinit var adapter: GifAdapter

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val gifList: RecyclerView = findViewById(R.id.gif_list)
        val layoutManager = LinearLayoutManager(this)
        val pagerSnapHelper = PagerSnapHelper()

        pagerSnapHelper.attachToRecyclerView(gifList)
        adapter = GifAdapter(this)

        gifList.layoutManager = layoutManager
        gifList.adapter = adapter

        adapter.setResults(urls)
    }

    private val urls: List<String> = listOf(
            "https://media1.giphy.com/media/9xijGdDIMovchalhxN/giphy.gif",
            "https://media3.giphy.com/media/HfFccPJv7a9k4/giphy.gif",
            "https://media1.giphy.com/media/13Qumr2SLqrl5e/giphy.gif",
            "https://media1.giphy.com/media/p8BOVqc17KVy0/giphy.gif",
            "https://media0.giphy.com/media/UNbTT1iYiStna/giphy.gif",
            "https://media0.giphy.com/media/aBj9b5VIEZfwI/giphy.gif",
            "https://media2.giphy.com/media/3o7TKQ2iSp676nzt0Q/giphy.gif",
            "https://media0.giphy.com/media/oozmeuZVAUF32/giphy.gif",
            "https://media3.giphy.com/media/ZXKZWB13D6gFO/giphy.gif",
            "https://media1.giphy.com/media/QAGKS4hwZIE2Q/giphy.gif",
            "https://media3.giphy.com/media/JZLFC4GJR3h6M/giphy.gif",
            "https://media2.giphy.com/media/UO95NWY0PmoWk/giphy.gif",
            "https://media3.giphy.com/media/xT1XH0lC7yoLLB1BSM/giphy.gif",
            "https://media1.giphy.com/media/mtlwOSac6agE0/giphy.gif",
            "https://media1.giphy.com/media/3o6fJfO5xksMX0VKLe/giphy.gif",
            "https://media0.giphy.com/media/6MzgKYjeIR5EA/giphy.gif",
            "https://media3.giphy.com/media/xrbdBK5A5cIYo/giphy.gif",
            "https://media3.giphy.com/media/Ngu7v2fXqO9a/giphy.gif",
            "https://media2.giphy.com/media/3o7qDYDz3yD5xXJaZG/giphy.gif",
            "https://media2.giphy.com/media/tJpRghYb5Aarj7x663/giphy.gif",
            "https://media2.giphy.com/media/3o6ZsWTFgnDOvvgayc/giphy.gif",
            "https://media3.giphy.com/media/l0MYJ4f8pI6CuZM2c/giphy.gif",
            "https://media2.giphy.com/media/3ohze0GfYKBzqX6g5a/giphy.gif",
            "https://media0.giphy.com/media/tHQck4uGgJt72/giphy.gif",
            "https://media2.giphy.com/media/2d400VBPJbxaU/giphy.gif"
	)
}
