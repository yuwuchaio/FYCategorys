//
//  UIColor+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/10/10.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (FYCategory)
/// 16进制颜色转换
+ (nullable UIColor *)colorWithHexString:(NSString *)hexStr;
/// RGB 转换 `UIColor`
+ (UIColor *)colorWithRGB:(uint32_t)rgbValue;
/// RGBA 转换 `UIColor`
+ (UIColor *)colorWithRGBA:(uint32_t)rgbaValue;
/// rgbValue 、alpha 转换 `UIColor`
+ (UIColor *)colorWithRGB:(uint32_t)rgbValue alpha:(CGFloat)alpha;
@end

NS_ASSUME_NONNULL_END
