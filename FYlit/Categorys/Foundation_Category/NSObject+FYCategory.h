//
//  NSObject+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/10/9.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (FYCategory)
#pragma mark - Swap method (Swizzling)

/**
 交换实例的两个对象方法
 @param originalSel 原始方法
 @param newSel 新方法
 @return 是否成功
 */
+ (BOOL)swizzleInstanceMethod:(SEL)originalSel with:(SEL)newSel;

/**
 交换两个类方法
 @param originalSel 原始方法
 @param newSel 新方法
 @return 是否成功
 */
+ (BOOL)swizzleClassMethod:(SEL)originalSel with:(SEL)newSel;

#pragma mark - Others
/**
 使用`NSKeyedArchiver` 和 `NSKeyedUnarchiver`实现对象的深拷贝

 @return new Object
 */
- (nullable id)deepCopy;

@end

NS_ASSUME_NONNULL_END
