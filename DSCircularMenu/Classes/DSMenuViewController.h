//
//  MenuViewController.h
//  Pods
//
//  Created by Srinivasan Dodda on 26/07/16.
//
//

#import <UIKit/UIKit.h>
#import "DSCircularLayout.h"

@protocol DSMenuViewControllerDataSource;

@interface DSMenuViewController : UICollectionViewController

@property (assign, nonatomic) BOOL isAnimating;

@property (strong, nonatomic) DSCircularLayout *circularLayout;

@property (weak, nonatomic) id<DSMenuViewControllerDataSource> dataSource;

-(void)showMenu;
-(void)hideMenu;

@end

@protocol DSMenuViewControllerDataSource <NSObject>

@required

-(NSInteger)noOfMenuItems;
-(UICollectionViewCell *)collectionView:(UICollectionView *)collectionView menuItemAt:(NSInteger)index;
-(void)selectedMenuItemAt:(NSInteger)index;

@end
