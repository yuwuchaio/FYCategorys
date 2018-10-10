//
//  NSNumber+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/10/9.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSNumber (FYCategory)

/**
 将字符串转换成`NSnumber`对象返回。
 如下可以转换:@"12", @"12.345", @" -0xFF", @" .23e99 "...

 @param string 数字字符串格式
 @return 返回`NSNumber`或者nil
 */
+ (nullable NSNumber *)numberWithString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
