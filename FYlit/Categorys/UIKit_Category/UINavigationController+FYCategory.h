//
//  UINavigationController+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/3/28.
//  Copyright © 2018年 FishYu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (FYCategory)

- (void)pushViewController:(UIViewController *)viewController
                     animated:(BOOL)animated
                   completion:(void(^)(void))completion;

- (void)popViewControllerAnimated:(BOOL)animated
                          completion:(void(^)(void))completion;

- (void)popToViewController:(UIViewController *)viewController
                      animated:(BOOL)animated
                    completion:(void(^)(void))completion;
@end
