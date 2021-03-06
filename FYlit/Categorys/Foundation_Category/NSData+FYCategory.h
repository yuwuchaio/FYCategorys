//
//  NSData+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/3/28.
//  Copyright © 2018年 FishYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSData (FYCategory)

#pragma mark - data hash
/**
 返回md5的字符串
 */
- (NSString *)md5String;
/**
 返回md5后的data数据
 */
- (NSData *)md5Data;

/**
 返回sha256的字符串
 */
- (NSString *)sha256String;

/**
 返回sha256后的data
 */
- (NSData *)sha256Data;

/**
 返回sha384的字符串
 */
- (NSString *)sha384String;

/**
 返回sha384后的data
 */
- (NSData *)sha384Data;

/**
 返回sha512的字符串
 */
- (NSString *)sha512String;

/**
 返回sha512后的data
 */
- (NSData *)sha512Data;

/**
 使用MD5算法+key密码生成消息摘要
 @param key  加密秘钥
 @return 生成的消息摘要字符串
 */
- (NSString *)hmacMD5StringWithKey:(NSString *)key;
/**
 使用MD5算法+key密码生成消息摘要
 @param key  加密秘钥
 @return 生成的消息摘要data
 */
- (NSData *)hmacMD5DataWithKey:(NSData *)key;

/**
 使用SHA256算法+key密码生成消息摘要
 @param key  加密秘钥
 @return 生成的消息摘要字符串
 */
- (NSString *)hmacSHA256StringWithKey:(NSString *)key;

/**
 使用SHA256算法+key密码生成消息摘要
 @param key  加密秘钥
 @return 生成的消息摘要data
 */
- (NSData *)hmacSHA256DataWithKey:(NSData *)key;

/**
 使用SHA384算法+key密码生成消息摘要
 @param key  加密秘钥
 @return 生成的消息摘要字符串
 */
- (NSString *)hmacSHA384StringWithKey:(NSString *)key;

/**
 使用SHA384算法+key密码生成消息摘要
 @param key  加密秘钥
 @return 生成的消息摘要data
 */
- (NSData *)hmacSHA384DataWithKey:(NSData *)key;

/**
 使用SHA512算法+key密码生成消息摘要
 @param key  加密秘钥
 @return 生成的消息摘要字符串
 */
- (NSString *)hmacSHA512StringWithKey:(NSString *)key;

/**
 使用SHA512算法+key密钥生成消息摘要
 @param key  加密密钥
 @return 生成的消息摘要data
 */
- (NSData *)hmacSHA512DataWithKey:(NSData *)key;

/**
 返回crc32后的字符串
 */
- (NSString *)crc32String;

/**
 返回crc32后的数字
 */
- (uint32_t)crc32;

#pragma mark - Encrypt and Decrypt
/**
 返回aes加密后的data
 
 @param key   加密密钥 (128, 192 or 256bits).
 @param iv   初始化向量 (128bits).可传nil
 @return     加密后的数据或者nil
 */
- (nullable NSData *)aes256EncryptWithKey:(NSData *)key iv:(nullable NSData *)iv;

/**
 返回aes解密后的data
 
 @param key  加密密钥 (128, 192 or 256bits).
 @param iv   初始化向量 (128bits).可传nil
 @return     加密后的数据或者nil
 */
- (nullable NSData *)aes256DecryptWithkey:(NSData *)key iv:(nullable NSData *)iv;
#pragma mark - Encode
/**
  按照utf-8编码返回字符串
 */
- (nullable NSString *)utf8String;

/**
 按照16进制编码返回字符串
 */
- (nullable NSString *)hexString;

/**
 按照base64编码返回字符串
 */
- (nullable NSString *)base64EncodedString;

#pragma mark - data compress & decompress
// 网络中常用压缩及解压方式
//GZIP  file format speci cation: http://www.ietf.org/rfc/rfc1952.txt
/**
 从gzip压缩后的data解压出raw的data
 @return 解压后的data.
 */
- (nullable NSData *)gzipDecompress;

/**
 使用gzip压缩原始的data
 @return 压缩后的data.
 */
- (nullable NSData *)gzipComperss;

// ZLIB Compressed Data Format Speci cation: http://www.ietf.org/rfc/rfc1950.txt
/**
 使用ZLIB解压压缩的data
 @return 解压后的data.
 */
- (nullable NSData *)zlibDecompress;

/**
 使用ZLIB压缩原始的data
 @return 压缩后的data.
 */
- (nullable NSData *)zlibCompressed;

@end
NS_ASSUME_NONNULL_END
