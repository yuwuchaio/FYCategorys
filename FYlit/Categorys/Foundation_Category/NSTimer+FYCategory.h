//
//  NSTimer+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/10/9.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSTimer (FYCategory)

/**
 创建一个定时器，并且以默认的方式注册到当前的runloop中

 @param seconds 重复的时间间隔
 @param block 指定的回调
 @param repeats 是否重复
 @return 定时器对象
 */
+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)seconds block:(void (^)(NSTimer *timer))block repeats:(BOOL)repeats;

/**
 创建一个定时器对象，需要自己添加到runloop中运行

 @param seconds 重复的时间间隔
 @param block 指定的回调
 @param repeats 是否重复
 @return 定时器对象。
 */
+ (NSTimer *)timerWithTimeInterval:(NSTimeInterval)seconds block:(void (^)(NSTimer *timer))block repeats:(BOOL)repeats;

@end

NS_ASSUME_NONNULL_END
