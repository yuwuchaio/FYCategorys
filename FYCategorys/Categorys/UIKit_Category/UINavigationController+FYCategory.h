//
//  UINavigationController+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/3/28.
//  Copyright © 2018年 FishYu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (FYCategory)

- (void)fy_pushViewController:(UIViewController *)viewController
                     animated:(BOOL)animated
                   completion:(void(^)(void))completion;

- (void)fy_popViewControllerAnimated:(BOOL)animated
                          completion:(void(^)(void))completion;

- (void)fy_popToViewController:(UIViewController *)viewController
                      animated:(BOOL)animated
                    completion:(void(^)(void))completion;
@end
