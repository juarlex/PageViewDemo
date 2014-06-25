//
//  PageContentViewController.h
//  PageViewDemo
//
//  Created by Alejandro Juárez Robles on 4/11/14.
//  Copyright (c) 2014 MonsterLabs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController


@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
