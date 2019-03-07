//
//  ViewController.swift
//  GifPOC
//
//  Created by Ben Whitley on 2/15/19.
//  Copyright © 2019 Ben Whitley. All rights reserved.
//

/*
 Resources:
 https://developers.giphy.com/explorer/
 https://github.com/Flipboard/FLAnimatedImage
 */

import UIKit
import FLAnimatedImage
import Alamofire
import SwiftyJSON
import SharedLibrary

class ViewController: UIViewController {
    
    var collectionView: UICollectionView?
    var gifs: [String] = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        setupCollectionView()
        requestGifs()
    }
    
    func setupCollectionView() {
        let layout = UICollectionViewFlowLayout.init()
        layout.itemSize = CGSize(
            width: view.bounds.width,
            height: view.bounds.width
        )
        
        collectionView = UICollectionView(
            frame: view.bounds,
            collectionViewLayout: layout
        )
        
        collectionView?.register(
            CollectionViewCell.self,
            forCellWithReuseIdentifier: "GifCell"
        )
        
        collectionView?.dataSource = self
        if let cv = collectionView { view.addSubview(cv) }
    }
    
    func requestGifs() {
        
        GiphyAPI().getGifUrls { [weak self] gifs -> KotlinUnit in
            self?.gifs = gifs
            self?.collectionView?.reloadData()
            
            return KotlinUnit()
        }
//        let apiKey = "OrgzqLeDP0GLJZN5Z5ucN5aQaJ15GPLt"
//
//        Alamofire
//            .request("https://api.giphy.com/v1/gifs/trending",
//                     method: .get,
//                     parameters: ["api_key": apiKey],
//                     encoding: URLEncoding.default,
//                     headers: nil)
//            .responseData { [weak self] response in
//                guard
//                    let self = self,
//                    let data = response.data,
//                    let json = try? JSON(data: data)["data"].arrayValue
//                    else { return }
//
//                self.parse(json)
//        }
    }
    
    func parse(_ json: [JSON]) {
        for gif in json {
            if let urlString = gif["images"]["original"]["url"].string {
                self.gifs.append(urlString)
            }
//            guard
//                let urlString = gif["images"]["original"]["url"].string,
//                let url = URL(string: urlString),
//                let data = try? Data(contentsOf: url),
//                let image = FLAnimatedImage(animatedGIFData: data)
//                else { return }
//
//            self.gifs.append(image)
        }
        collectionView?.reloadData()
    }
}

extension ViewController: UICollectionViewDataSource {
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return gifs.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        if let cell = collectionView.dequeueReusableCell(
            withReuseIdentifier: "GifCell",
            for: indexPath) as? CollectionViewCell {
            
            cell.setImage(urlString: gifs[indexPath.row])
            return cell
        }
        
        return UICollectionViewCell()
    }
}
