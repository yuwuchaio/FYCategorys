//
//  UINavigationController+FYCategory.m
//  FYCategorys
//
//  Created by FishYu on 2018/3/28.
//  Copyright © 2018年 FishYu. All rights reserved.
//

#import "UINavigationController+FYCategory.h"

@implementation UINavigationController (FYCategory)

- (void)fy_pushViewController:(UIViewController *)viewController
                     animated:(BOOL)animated
                   completion:(void(^)(void))completion {
    [self pushViewController:viewController animated:animated];
    if (!completion) {
        return;
    }
    if (self.transitionCoordinator && animated) {
        [self.transitionCoordinator animateAlongsideTransition:nil completion:^(__unused id<UIViewControllerTransitionCoordinatorContext> context) {
            completion();
        }];
    } else {
        completion();
    }
}

- (void)fy_popViewControllerAnimated:(BOOL)animated
                          completion:(void(^)(void))completion {
    [self popViewControllerAnimated:animated];
    if (!completion) {
        return;
    }
    if (self.transitionCoordinator && animated) {
        [self.transitionCoordinator animateAlongsideTransition:nil completion:^(__unused id<UIViewControllerTransitionCoordinatorContext> context) {
            completion();
        }];
    } else {
        completion();
    }
}

- (void)fy_popToViewController:(UIViewController *)viewController
                      animated:(BOOL)animated
                    completion:(void(^)(void))completion {
    [self popToViewController:viewController animated:animated];
    if (!completion) {
        return;
    }
    if (self.transitionCoordinator && animated) {
        [self.transitionCoordinator animateAlongsideTransition:nil completion:^(__unused id<UIViewControllerTransitionCoordinatorContext> context) {
            completion();
        }];
    } else {
        completion();
    }
}
@end
