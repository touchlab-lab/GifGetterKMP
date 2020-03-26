//
//  CollectionViewCell.swift
//  iosApp
//
//  Created by Ben Whitley on 3/6/19.
//

//
//  CollectionViewCell.swift
//  GifPOC
//
//  Created by Ben Whitley on 2/15/19.
//  Copyright © 2019 Ben Whitley. All rights reserved.
//

import UIKit
import FLAnimatedImage

class CollectionViewCell: UICollectionViewCell {
    var imageView = FLAnimatedImageView()
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        
        imageView.contentMode = .scaleAspectFit
        imageView.frame = contentView.bounds
        contentView.addSubview(imageView)
    }
    
    func setImage(data: Data) {
        guard
            let image = FLAnimatedImage(animatedGIFData: data)
            else { return }
        
        imageView.animatedImage = image
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
