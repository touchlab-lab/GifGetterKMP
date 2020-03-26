//
//  ViewController.Exts.swift
//  iosApp
//
//  Created by Ben Whitley on 3/25/19.
//

import UIKit

extension ViewController: UICollectionViewDataSource {
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return urls.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        guard
            let data = urls[indexPath.row].urlData(),
            let cell = collectionView.dequeueReusableCell(
                withReuseIdentifier: "GifCell",
                for: indexPath) as? CollectionViewCell
            else { return UICollectionViewCell() }
        
        cell.setImage(data: data)
        return cell
    }
}

extension ViewController: UICollectionViewDelegateFlowLayout {
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return 0
    }
}
