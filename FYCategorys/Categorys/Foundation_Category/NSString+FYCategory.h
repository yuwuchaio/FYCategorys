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
/**
 使用MD5 hash算法生成的小写字符串
 */
- (nullable NSString *)fy_md5String;
/**
 使用sha256 hash算法生成的小写字符串
 */
- (nullable NSString *)fy_sha256String;
/**
 使用sha512 hash算法生成的小写字符串
 */
- (nullable NSString *)fy_sha512String;
/**
 hmac 使用MD5的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)fy_hmacMD5StringWithKey:(NSString *)key;
/**
 hmac 使用SHA256的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)fy_hmacSHA256StringWithKey:(NSString *)key;
/**
 hmac 使用SHA384的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)fy_hmacSHA384StringWithKey:(NSString *)key;
/**
 hmac 使用SHA512的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)fy_hmacSHA512StringWithKey:(NSString *)key;
/**
 使用crc32的 hash算法 + key生成的小写字符串
 */
- (nullable NSString *)fy_crc32String;

#pragma mark - Encode and decode

/**
 返回base64编码后的字符串
 */
- (nullable NSString *)fy_base64EncodedString;
/**
 使用utf-8进行URL编码。参考AFNetworking
 */
- (NSString *)fy_stringByURLEncode;
/**
 使用utf-8对URL字符串解码。
 */
- (NSString *)fy_stringByURLDecode;
/**
 将常见的HTML转义为实体
 Example: "a<b" will be escape to "a&lt;b".
 */
- (NSString *)fy_stringByEscapingHTML;
#pragma mark - Drawing
/**
根据字体大小、给定的范围大小、lineBreakMode模式。计算返回文字的宽高。
 */
- (CGSize)fy_sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;
/**
 根据文字大小计算文字宽度
 @param font 文字大小
 @return 宽度
 */
- (CGFloat)fy_widthForFont:(UIFont *)font;
/**
 根据文字大小、给定宽度计算文字高度
 @param font 字体大小
 @param width 给定宽度
 @return 计算后的高度
 */
- (CGFloat)fy_heightForFont:(UIFont *)font width:(CGFloat)width;


@end

NS_ASSUME_NONNULL_END
