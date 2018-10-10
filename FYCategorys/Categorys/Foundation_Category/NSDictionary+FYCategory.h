//
//  NSDictionary+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/10/9.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (FYCategory)

/// 将plist的二进制数据转换成 `NSDictionary`
+ (nullable NSDictionary *)dictionaryWithPlistData:(NSData *)plist;
/// 将plist的字符串转换成 `NSDictionary`
+ (nullable NSDictionary *)dictionaryWithPlistString:(NSString *)plist;
/// 将字典转换成plist的二进制数据
- (nullable NSData *)plistData;
/// 将字典转换成plist的字符串
- (nullable NSString *)plistString;
/// 返回排序好的`keys`
- (NSArray *)allKeysSorted;
/// 根据排序好的 `key` 返回 `Values`
- (NSArray *)allValuesSortedByKeys;
/// 判断是否字典包含 `key`
- (BOOL)containsObjectForKey:(id)key;
/// 返回json格式的字符串
- (nullable NSString *)jsonStringEncoded;
/// 返回json格式的字符串,并修整 options: `NSJSONWritingPrettyPrinted`.
- (nullable NSString *)jsonPrettyStringEncoded;

@end


@interface NSMutableDictionary (YYAdd)

/// 将plist的二进制数据转换成 `NSMutableDictionary`
+ (nullable NSMutableDictionary *)dictionaryWithPlistData:(NSData *)plist;
/// 将plist的字符串转换成 `NSMutableDictionary`
+ (nullable NSMutableDictionary *)dictionaryWithPlistString:(NSString *)plist;
/// 返回 `akey` 的 `value`,并移除该键值对.
- (nullable id)popObjectForKey:(id)aKey;
/// 返回 `keys` 的 `values`,并移除这些键值对.
- (NSDictionary *)popEntriesForKeys:(NSArray *)keys;

@end


NS_ASSUME_NONNULL_END
