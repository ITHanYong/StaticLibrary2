//
//  RadarMapView.h
//  RadarMap
//
//  Created by HanYong on 2018/1/16.
//  Copyright © 2018年 com.hanyong. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  能力评估方向  基础评估、实践评估、专业评估、
 */
@interface ElementItem : NSObject
/**
 *  评估名字
 */
@property (copy, nonatomic) NSString *itemName;
/**
 *  评估ID 预留
 */
@property (copy, nonatomic) NSString *itemID;
/**
 *  代表该评估方向的颜色
 */
@property (strong, nonatomic) UIColor  *itemColor;
/**
 *  各项评估结果的百分比数组
 */
@property (strong, nonatomic) NSArray  *itemPercent;

@end

/**
 *  评估模型UI
 */
@interface Item : UIView

@property (strong, nonatomic) UIView *colorView;

@property (strong, nonatomic) UILabel *itemLabel;

@end

@interface RadarMapView : UIView

/**
 *  评估描述内容
 */
@property (copy, nonatomic) NSString *content;

/**
 *  实例化
 *
 *  @param elements    各项能力评估的名字数组
 *  @param lengthColor 主体颜色
 *
 */
- (instancetype)initWithRadarElements:(NSArray *)elements lengthColor:(UIColor *)lengthColor;

/**
 *  添加评估方向
 *
 *  @param elements 评估方向数组<ElementItem>
 */
- (void)addAbilitysWithElements:(NSArray <ElementItem*>*)elements;

@end
