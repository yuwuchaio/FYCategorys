//
//  NSDate+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/3/9.
//  Copyright © 2018年 FishYu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
  support minimum iOS 8.0
 */
@interface NSDate (FYCategory)
#pragma mark - Component Properties
/** 年 */
@property (nonatomic, readonly) NSInteger fy_year;
/** 月（1-12) */
@property (nonatomic, readonly) NSInteger fy_month;
/** 日（1-31) */
@property (nonatomic, readonly) NSInteger fy_day;
/** 时（0-23) */
@property (nonatomic, readonly) NSInteger fy_hour;
/** 分（0-59) */
@property (nonatomic, readonly) NSInteger fy_minute;
/** 秒（0-59) */
@property (nonatomic, readonly) NSInteger fy_second;
/** 纳秒 */
@property (nonatomic, readonly) NSInteger fy_nanosecond;
/** 每一周的第几天 周日为0 周六为7*/
@property (nonatomic, readonly) NSInteger fy_weekday;
/** 月的第几周  按天数算的属于第几周，每七天算一周*/
@property (nonatomic, readonly) NSInteger fy_weekdayOrdinal;
/** 月的第几周 按照日历表查的第几周*/
@property (nonatomic, readonly) NSInteger fy_weekOfMonth;
/** 年中的第几个星期 （1-53） */
@property (nonatomic, readonly) NSInteger fy_weekOfYear;
/** 基于 ISO周日历 的年份 https://zh.wikipedia.org/wiki/ISO%E9%80%B1%E6%97%A5%E6%9B%86 */
@property (nonatomic, readonly) NSInteger fy_yearForWeekOfYear;
/** 季度 (0-3)*/
@property (nonatomic, readonly) NSInteger fy_quarter;
/** 是否闰月 */
@property (nonatomic, readonly) BOOL isLeapMonth;
/** 是否闰年 */
@property (nonatomic, readonly) BOOL isLeapYear;
/** 是否是今天 */
@property (nonatomic, readonly) BOOL isToday;
/** 是否是昨天 */
@property (nonatomic, readonly) BOOL isYesterday;
/** 是否是明天 */
@property (nonatomic, readonly) BOOL isTomorrow;
/** 是否是后天 */
@property (nonatomic, readonly) BOOL isTheDayAfterTomorrow;

#pragma mark - Date modify
/**
 修改date的年份
 
 @param years 年
 @return 修改后的date
 */

- (nullable NSDate *)fy_dateByAddingYears:(NSInteger)years;
/**
 修改date的月
 
 @param months 月
 @return 修改后的date
 */
- (nullable NSDate *)fy_dateByAddingMonths:(NSInteger)months;
/**
 修改date的周
 
 @param weeks 周
 @return 修改后的date
 */
- (nullable NSDate *)fy_dateByAddingWeeks:(NSInteger)weeks;
/**
 修改date的天
 
 @param days 天
 @return 修改后的date
 */
- (nullable NSDate *)fy_dateByAddingDays:(NSInteger)days;
/**
 修改date的小时
 
 @param hours 小时
 @return 修改后的date
 */
- (nullable NSDate *)fy_dateByAddingHours:(NSInteger)hours;
/**
 修改date的小时
 
 @param minutes 分钟
 @return 修改后的date
 */
- (nullable NSDate *)fy_dateByAddingMinutes:(NSInteger)minutes;
/**
 修改date的小时
 
 @param seconds 秒
 @return 修改后的date
 */
- (nullable NSDate *)fy_dateByAddingSeconds:(NSInteger)seconds;
#pragma mark - NSDate ——> NSString
/**
 将NSDate 按照dateformat的格式转换成字符串，如'yyyy-MM-dd HH:mm'
 
 @param dateformat 格式字符
 @return 转换后的时间字符串
 */
- (nullable NSString *)fy_stringWithDateFormat:(NSString *)dateformat;
#pragma mark - NSString ——> NSDate
/**
 将时间字符串转换成NSDate对象，dateString与format格式需要相同否则返回nil
 
 @param dateString 时间字符串如 '2018/3/9 13:47:16'
 @param format 对应的时间格式 'yyyy/MM/dd HH:mm:ss'
 @return 格式化后的NSDate对象
 */
+ (nullable NSDate *)fy_dateWithString:(NSString *)dateString dateformat:(NSString *)format;
#pragma mark - NSTimeInterval ——> NSDate
/**
 将时间戳转换成NSDate对象
 
 @param timestamp 时间戳，double类型
 @return 格式化后的NSDate对象
 */
+ (nullable NSDate *)fy_dateWithTimeStamp:(NSTimeInterval)timestamp;
#pragma mark - function methods
/**
 返回NSDate对象的零点NSdate对象
 
 @return date零点对象
 */
- (nullable NSDate *)fy_startDateOfDay;

@end

NS_ASSUME_NONNULL_END
