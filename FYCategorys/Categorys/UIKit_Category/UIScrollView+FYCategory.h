//
//  UIScrollView+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/10/9.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIScrollView (FYCategory)
#pragma mark - 默认动画效果
/**
 滑动到顶部
 */
- (void)scrollToTop;

/**
  滑动到底部
 */
- (void)scrollToBottom;

/**
  滑动到左侧
 */
- (void)scrollToLeft;

/**
 滑动到右侧
 */
- (void)scrollToRight;

/**
 滑动到顶部
 
 @param animated  是否动画.
 */
- (void)scrollToTopAnimated:(BOOL)animated;

/**
 滑动到底部
 
 @param animated  是否动画.
 */
- (void)scrollToBottomAnimated:(BOOL)animated;

/**
 滑动到左侧
 
 @param animated  是否动画.
 */
- (void)scrollToLeftAnimated:(BOOL)animated;

/**
 滑动到右侧
 
 @param animated  是否动画.
 */
- (void)scrollToRightAnimated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
