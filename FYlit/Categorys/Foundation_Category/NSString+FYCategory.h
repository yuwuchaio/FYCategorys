//
//  NSString+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/3/13.
//  Copyright © 2018年 FishYu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSString (FYCategory)
#pragma mark - Utilities
/**
 返回一个UUID
 */
+ (NSString *)stringWithUUID;

/**
 去除前后空格、换行
 */
- (NSString *)stringByTrim;

#pragma mark - Hash
/**
 使用MD5 hash算法生成的小写字符串
 */
- (nullable NSString *)md5String;
/**
 使用sha256 hash算法生成的小写字符串
 */
- (nullable NSString *)sha256String;
/**
 使用sha512 hash算法生成的小写字符串
 */
- (nullable NSString *)sha512String;
/**
 hmac 使用MD5的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)hmacMD5StringWithKey:(NSString *)key;
/**
 hmac 使用SHA256的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)hmacSHA256StringWithKey:(NSString *)key;
/**
 hmac 使用SHA384的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)hmacSHA384StringWithKey:(NSString *)key;
/**
 hmac 使用SHA512的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)hmacSHA512StringWithKey:(NSString *)key;
/**
 使用crc32的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)crc32String;

#pragma mark - Encode and decode

/**
 返回base64编码后的字符串
 */
- (nullable NSString *)base64EncodedString;
/**
 使用utf-8进行URL编码。参考AFNetworking
 */
- (NSString *)stringByURLEncode;
/**
 使用utf-8对URL字符串解码。
 */
- (NSString *)stringByURLDecode;
/**
 将常见的HTML转义为实体
 Example: "a<b" will be escape to "a&lt;b".
 */
- (NSString *)stringByEscapingHTML;
#pragma mark - Drawing
/**
根据字体大小、给定的范围大小、lineBreakMode模式。计算返回文字的宽高。
 */
- (CGSize)sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;
/**
 根据文字大小计算文字宽度
 @param font 文字大小
 @return 宽度
 */
- (CGFloat)widthForFont:(UIFont *)font;
/**
 根据文字大小、给定宽度计算文字高度
 @param font 字体大小
 @param width 给定宽度
 @return 计算后的高度
 */
- (CGFloat)heightForFont:(UIFont *)font width:(CGFloat)width;


@end

NS_ASSUME_NONNULL_END
