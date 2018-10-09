//
//  UIApplication+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/9/30.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (FYCategory)
/// 沙盒中 documents 的路径
@property (nonatomic, readonly) NSURL *documentsURL;
/// 沙盒中 documents 的路径
@property (nonatomic, readonly) NSString *documentsPath;

/// 沙盒中 caches 的路径
@property (nonatomic, readonly) NSURL *cachesURL;
/// 沙盒中 caches 的路径
@property (nonatomic, readonly) NSString *cachesPath;

/// 沙盒中 Library 的路径
@property (nonatomic, readonly) NSURL *libraryURL;
/// 沙盒中 Library 的路径
@property (nonatomic, readonly) NSString *libraryPath;

/// 应用的appid
@property (nullable, nonatomic, readonly) NSString *appBundleID;
/// 应用名称
@property (nullable, nonatomic, readonly) NSString *appBundleName;
/// 应用的版本号
@property (nullable, nonatomic, readonly) NSString *appVersion;
/// 应用的build号
@property (nullable, nonatomic, readonly) NSString *appBuildVersion;
/// 当前内存使用情况 byte
@property (nonatomic, readonly) int64_t memoryUsage;
/// CPU 使用情况 0-1.0。
@property (nonatomic, readonly) float cpuUsage;
@end

NS_ASSUME_NONNULL_END
