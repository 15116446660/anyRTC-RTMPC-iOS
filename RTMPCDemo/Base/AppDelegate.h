//
//  AppDelegate.h
//  RTMPCDemo
//
//  Created by jh on 2017/9/18.
//  Copyright © 2017年 jh. All rights reserved.
//

#import <UIKit/UIKit.h>

#warning config developer info
//开发者信息（前往www.anyrtc.io申请）
static NSString *developerID = @"xxx";
static NSString *token = @"xxx";
static NSString *key = @"xxx";
static NSString *appID = @"xxx";

//该参数是使用我们的cdn
static NSString *appvtoken = @"xxx";

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
//是否允许横屏
@property (nonatomic,assign)BOOL allowRotation;

@end

