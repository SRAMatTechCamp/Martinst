//
//  ModelController.h
//  Martist1.0
//
//  Created by 青井 翔平 on 12/09/06.
//  Copyright (c) 2012年 青井 翔平. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
