//
//  UIView+FYCategory.h
//  FYCategorys
//
//  Created by FishYu on 2018/9/30.
//  Copyright © 2018 FishYu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (FYCategory)

/// 当前视图的控制器， 可能为nil
@property (nullable, nonatomic, readonly) UIViewController *viewController;

/// 当前视图的截图
- (nullable UIImage *)fy_snapshotImage;
/// 设置视图阴影效果
- (void)setLayerShadow:(nullable UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius;
/// 根据sketch设置视图shadow
- (void)applySketchShadowColor:(nullable UIColor*)color alpha:(CGFloat)alpha offset:(CGSize)offset blur:(CGFloat)blur spread:(CGFloat)spread;
/// 移除所有子视图
- (void)fy_removeAllSubviews;

#pragma mark - coordinate system
/// 将 receiver 上的 一个 point 转换到 view 的坐标系上，view 为nil使用window的坐标系
- (CGPoint)convertPoint:(CGPoint)point toViewOrWindow:(nullable UIView *)view;
/// 将 view 上的 一个 point 转换到 receiver 的坐标系上，view 为nil使用window的坐标系
- (CGPoint)convertPoint:(CGPoint)point fromViewOrWindow:(nullable UIView *)view;
/// 将 receiver 上的 一个 rect 转换到 view 的坐标系上，view 为nil使用window的坐标系
- (CGRect)convertRect:(CGRect)rect toViewOrWindow:(nullable UIView *)view;
/// 将 view 上的 一个 rect 转换到 receiver 的坐标系上，view 为nil使用window的坐标系
- (CGRect)convertRect:(CGRect)rect fromViewOrWindow:(nullable UIView *)view;

/// x坐标
@property (nonatomic) CGFloat x;
/// y坐标
@property (nonatomic) CGFloat y;
/// 宽度
@property (nonatomic) CGFloat width;
/// 高度
@property (nonatomic) CGFloat height;
/// right = x + width
@property (nonatomic) CGFloat right;
/// bottom = y + height
@property (nonatomic) CGFloat bottom;
/// 大小
@property (nonatomic) CGSize size;
/// 位置
@property (nonatomic) CGPoint origin;
/// 中心点x
@property (nonatomic) CGFloat centerX;
/// 中心点y
@property (nonatomic) CGFloat centerY;

@end

NS_ASSUME_NONNULL_END
