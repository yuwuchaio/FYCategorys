//
//  UIDevice+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/10/9.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef kSystemVersion
#define kSystemVersion [UIDevice systemVersion]
#endif

#ifndef kiOS6Later
#define kiOS6Later (kSystemVersion >= 6)
#endif

#ifndef kiOS7Later
#define kiOS7Later (kSystemVersion >= 7)
#endif

#ifndef kiOS8Later
#define kiOS8Later (kSystemVersion >= 8)
#endif

#ifndef kiOS9Later
#define kiOS9Later (kSystemVersion >= 9)
#endif

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (FYCategory)

/// 设备系统版本号 (e.g. 8.1)
+ (double)systemVersion;

/// 判断设备是否是 iPad/iPad mini.
@property (nonatomic, readonly) BOOL isPad;

/// 判断设备是否为模拟器.
@property (nonatomic, readonly) BOOL isSimulator;

/// 判断设备是越狱.
@property (nonatomic, readonly) BOOL isJailbroken;

/// 判断设备能否打电话.
@property (nonatomic, readonly) BOOL canMakePhoneCalls NS_EXTENSION_UNAVAILABLE_IOS("");

/// 设备的机器 model.  e.g. "iPhone6,1" "iPad4,6"
/// @see http://theiphonewiki.com/wiki/Models
@property (nullable, nonatomic, readonly) NSString *machineModel;

/// 设备的名称. e.g. "iPhone 5s" "iPad mini 2"
/// @see http://theiphonewiki.com/wiki/Models
@property (nullable, nonatomic, readonly) NSString *machineModelName;

/// 系统开机启动的时间.
@property (nonatomic, readonly) NSDate *systemUptime;


#pragma mark - Network Information

/// WIFI下的 IP 地址(can be nil). e.g. @"192.168.1.111"
@property (nullable, nonatomic, readonly) NSString *ipAddressWIFI;

/// 蜂窝网络下的 IP 地址. e.g. @"10.2.2.222"
@property (nullable, nonatomic, readonly) NSString *ipAddressCell;


#pragma mark - Disk Space

/// 磁盘的总大小. (-1 when error occurs)
@property (nonatomic, readonly) int64_t diskSpace;

/// 未使用的磁盘大小. (-1 when error occurs)
@property (nonatomic, readonly) int64_t diskSpaceFree;

/// 已使用的磁盘大小. (-1 when error occurs)
@property (nonatomic, readonly) int64_t diskSpaceUsed;


#pragma mark - Memory Information

/// 内存的总大小. (-1 when error occurs)
@property (nonatomic, readonly) int64_t memoryTotal;

/// 已用内存大小. (-1 when error occurs)
@property (nonatomic, readonly) int64_t memoryUsed;

/// 未使用内存大小. (-1 when error occurs)
@property (nonatomic, readonly) int64_t memoryFree;

/// 激活的内存. (-1 when error occurs)
@property (nonatomic, readonly) int64_t memoryActive;

/// 未激活的内存. (-1 when error occurs)
@property (nonatomic, readonly) int64_t memoryInactive;

/// Wired memory in byte. (-1 when error occurs)
@property (nonatomic, readonly) int64_t memoryWired;

/// Purgable memory in byte. (-1 when error occurs)
@property (nonatomic, readonly) int64_t memoryPurgable;

#pragma mark - CPU Information
/// 可用CPU处理器核数.
@property (nonatomic, readonly) NSUInteger cpuCount;

/// 当前CPU的使用情况, 1.0 means 100%. (-1 when error occurs)
@property (nonatomic, readonly) float cpuUsage;

///当前CPU每个核的使用情况, 1.0 means 100%. (nil when error occurs)
@property (nullable, nonatomic, readonly) NSArray<NSNumber *> *cpuUsagePerProcessor;

@end

NS_ASSUME_NONNULL_END
