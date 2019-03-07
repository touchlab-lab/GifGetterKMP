package org.touchlab.gifgetter

import android.app.Activity
import android.support.v7.widget.RecyclerView
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import com.bumptech.glide.Glide
import org.sharedLibrary.GifResult

class GifAdapter(private val activity: Activity): RecyclerView.Adapter<GifAdapter.GifViewHolder>() {

    private var results = EMPTY_RESULTS

    override fun getItemCount() = results.size

    internal fun setResults(results: List<String>) {
        this.results = results
        notifyDataSetChanged()
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): GifViewHolder {
        val view = activity
                .layoutInflater
                .inflate(
                        R.layout.gif_list_item,
                        parent,
                        false
                )
        return GifViewHolder(view)
    }

    override fun onBindViewHolder(holder: GifViewHolder, position: Int) {
        val result = results[position]

        Glide.with(activity)
                .load(result)
                .into(holder.gifView)
    }

    companion object {
        private val EMPTY_RESULTS = emptyList<String>()
    }

    class GifViewHolder internal constructor(itemView: View) : RecyclerView.ViewHolder(itemView) {
        internal val gifView: ImageView = itemView.findViewById(R.id.gif_view)
    }
}
