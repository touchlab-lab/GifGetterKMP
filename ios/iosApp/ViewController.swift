//
//  ViewController.swift
//  GifPOC
//
//  Created by Ben Whitley on 2/15/19.
//  Copyright © 2019 Ben Whitley. All rights reserved.
//

import UIKit
import FLAnimatedImage

class ViewController: UIViewController {
    
    var collectionView: UICollectionView?
    var urls: [String] = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        setupCollectionView()
        
        GifRetriever().requestGifs { [weak self] gifs in
            guard let self = self else { return }
            self.urls = gifs
            self.collectionView?.reloadData()
        }
    }
    
    func setupCollectionView() {
        let layout = UICollectionViewFlowLayout.init()
        layout.itemSize = view.bounds.size
        
        collectionView = UICollectionView(
            frame: view.bounds,
            collectionViewLayout: layout
        )
        
        collectionView?.register(
            CollectionViewCell.self,
            forCellWithReuseIdentifier: "GifCell"
        )
        
        collectionView?.dataSource = self
        collectionView?.delegate = self
        collectionView?.isPagingEnabled = true
        if let cv = collectionView { view.addSubview(cv) }
    }
}
