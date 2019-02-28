//
//  GiphyAPI.swift
//  iosApp
//
//  Created by Ben Whitley on 3/12/19.
//

import Foundation
import GifLibrary


class GifRetriever {
   
    typealias StringsClosure = ([String]) -> Void

    private var urls = ["https://media1.giphy.com/media/9xijGdDIMovchalhxN/giphy.gif",
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
                        "https://media2.giphy.com/media/2d400VBPJbxaU/giphy.gif"]

    
    func requestGifs(_ closure: @escaping StringsClosure) {
        GiphyAPI().getGifUrls { gifs -> KotlinUnit in
            closure(gifs)
            return KotlinUnit()
        }
    }
}
