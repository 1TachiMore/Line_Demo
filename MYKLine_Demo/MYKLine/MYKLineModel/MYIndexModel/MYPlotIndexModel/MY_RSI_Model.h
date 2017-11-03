//
//  MY_RSI_Model.h
//  XinShengInternational
//
//  Created by michelle on 2017/9/27.
//  Copyright © 2017年 michelle. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MY_RSI_Model : NSObject
@property (nonatomic, assign) double SMA1_A;
@property (nonatomic, assign) double SMA1_B;
@property (nonatomic, assign) double SMA2_A;
@property (nonatomic, assign) double SMA2_B;
@property (nonatomic, assign) double SMA3_A;
@property (nonatomic, assign) double SMA3_B;


@property (nonatomic, assign) double RSI1;
@property (nonatomic, assign) double RSI2;
@property (nonatomic, assign) double RSI3;


@property (nonatomic, assign) double RSI1_Height;
@property (nonatomic, assign) double RSI2_Height;
@property (nonatomic, assign) double RSI3_Height;

@property (nonatomic, assign) double Width;
@end
