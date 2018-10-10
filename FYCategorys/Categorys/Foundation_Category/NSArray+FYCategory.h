//
//  NSArray+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/10/9.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray<__covariant ObjectType> (FYCategory)

/// 将二进制数据格式的plist转换成`NSArray`,错误时为 `nil`
+ (nullable NSArray *)arrayWithPlistData:(NSData *)plist;
/// 将字符串格式的plist转换成`NSArray`,错误时为 `nil`
+ (nullable NSArray *)arrayWithPlistString:(NSString *)plist;
/// 将数组序列化为plist格式的二进制数据
- (nullable NSData *)plistData;
/// 将数组序列化为plist格式的字符串
- (nullable NSString *)plistString;
/// 返回随机下标的对象
- (nullable ObjectType)randomObject;
// 返回一个下标对象，越界时返回`nil`
- (nullable ObjectType)objectOrNilAtIndex:(NSUInteger)index;
/// 返回数组的`json`字符串
- (nullable NSString *)jsonStringEncoded;
/// 返回数组的`json`字符串，会对结果进行修整
- (nullable NSString *)jsonPrettyStringEncoded;

@end


@interface NSMutableArray<ObjectType>  (YYAdd)

/// 将二进制数据格式的plist转换成`NSMutableArray`,错误时为 `nil`
+ (nullable NSMutableArray *)arrayWithPlistData:(NSData *)plist;
/// 将字符串格式的plist转换成`NSMutableArray`,错误时为 `nil`
+ (nullable NSMutableArray *)arrayWithPlistString:(NSString *)plist;
/// 移除首位元素
- (void)removeFirstObject;
/// 移除末尾元素
- (void)removeLastObject;
/// 移除并返回首位元素
- (nullable ObjectType)popFirstObject;
/// 移除并返回末尾元素
- (nullable ObjectType)popLastObject;

@end

NS_ASSUME_NONNULL_END
