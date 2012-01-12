//
//  DetailViewController.h
//  Restaurants
//
//  Created by Dimitri Stancioff on 1/12/12.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
