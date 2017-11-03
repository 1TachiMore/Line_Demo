//
//  MY_MACD_Model.h
//  XinShengInternational
//
//  Created by michelle on 2017/9/27.
//  Copyright © 2017年 michelle. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MY_MACD_Model : NSObject
@property (nonatomic, assign) double EMA_LONG;
@property (nonatomic, assign) double EMA_SHORT;

@property (nonatomic, assign) double DIF;
@property (nonatomic, assign) double DEA;
@property (nonatomic, assign) double M;

@property (nonatomic, assign) double DIF_Height;
@property (nonatomic, assign) double DEA_Height;
@property (nonatomic, assign) double M_Height;

@property (nonatomic, assign) double Width;
@end
