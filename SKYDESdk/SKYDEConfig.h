//
//  SKYDEConfig.h
//  SKYDEManger
//
//  Created by yeven on 2017/2/4.
//  Copyright © 2017年 Skyworth. All rights reserved.
//

#ifndef SKYDEConfig_h
#define SKYDEConfig_h

//LOG开关
//#define LOGENABLE    //去掉注释打开LOG
#ifdef LOGENABLE
#define SKYLog(...) NSLog(__VA_ARGS__);
#else
#define SKYLog(...)
#endif

//尝试与设备通信超时时间
static const NSTimeInterval SOCKET_TIMEOUT = 10.0f; //超时时间

//遥控器键值
/**
 *           key                                说明
 *     @"SKY_KEY_BACK"                         返回按键
 *     @"SKY_KEY_HOME"                         主页按键
 *     @"SKY_KEY_MENU"                         菜单按键
 *     @"SKY_KEY_CENTER"                       确定按键
 *     @"SKY_KEY_UP"                             上
 *     @"SKY_KEY_DOWN"                           下
 *     @"SKY_KEY_LEFT"                           左
 *     @"SKY_KEY_RIGHT"                          右
 *     @"SKY_KEY_POWER"                        关机按键
 *     @"SKY_KEY_SHUTTLE_RIGHT_SPEED_1"       飞梭向右转动
 *     @"SKY_KEY_SHUTTLE_LEFT_SPEED_1"        飞梭向左转动
 *     @"SKY_KEY_VOLUME_UP",                   音量+
 *     @"SKY_KEY_VOLUME_DOWN",                 音量-
 */
static NSString * const SKY_KEY_BACK = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_HOME = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_MENU = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_CENTER = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_UP = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_DOWN = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_LEFT = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_RIGHT = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_POWER = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_VOLUME_UP = @"SKY_KEY_BACK";
static NSString * const SKY_KEY_VOLUME_DOWN = @"SKY_KEY_BACK";

//notification
//static NSString * const SOCKET_NOTIFICATION_DISCONNECT = @"SOCKET_NOTIFICATION_DISCONNECT";


#endif /* SKYDEConfig_h */
