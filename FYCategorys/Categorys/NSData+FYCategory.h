//
//  NSData+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/3/28.
//  Copyright © 2018年 FishYu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (FYCategory)
#pragma mark - data compress & decompress
// 网络中常用压缩及解压方式
//GZIP  file format speci cation: http://www.ietf.org/rfc/rfc1952.txt
/**
 从gzip压缩后的data解压出raw的data
 @return 解压后的data.
 */
- (nullable NSData *)fy_gzipDecompress;

/**
 使用gzip压缩原始的data
 @return 压缩后的data.
 */
- (nullable NSData *)fy_gzipComperss;

// ZLIB Compressed Data Format Speci cation: http://www.ietf.org/rfc/rfc1950.txt
/**
 使用ZLIB解压压缩的data
 @return 解压后的data.
 */
- (nullable NSData *)fy_zlibDecompress;

/**
 使用ZLIB压缩原始的data
 @return 压缩后的data.
 */
- (nullable NSData *)fy_zlibCompressed;
@end
