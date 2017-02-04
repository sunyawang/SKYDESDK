//
//  SKYDEManger.h
//  SKYDEManger
//
//  Created by yeven on 2017/2/4.
//  Copyright © 2017年 Skyworth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKYDEConfig.h"

/* 接收数据全部是异步的，回调均在子线程，请勿在回调中直接刷新UI */

//Notification
//通信超时导致和设备断开连接，会发送此通知
static NSString * const _Nonnull SOCKET_NOTIFICATION_DISCONNECT = @"SOCKET_NOTIFICATION_DISCONNECT";

/**
 搜索设备回调

 @param device 设备信息
 */
typedef void (^SearchDevice)( NSDictionary * _Nonnull device);


/**
 连接设备回调block

 @param success YES连接成功,NO连接失败
 */
typedef void (^ConnectDevice)(BOOL success);

@interface SKYDEManger : NSObject

NS_ASSUME_NONNULL_BEGIN

+ (instancetype)sharedInstance;

/**
 搜索设备
 
 @param devBlk block的参数是字典
 eg:
 {
 deviceType = AndroidTVNew;
 ip = "10.10.1.70";
 name = "\U5ba2\U5385\U7535\U89c6";
 port = 57805;
 servicesName = ServerService;
 version = "5.70.192640";
 }
 */
- (void)searchDevices:(SearchDevice)devBlk;

/**
 连接设备
 
 @param devIP 设备IP
 @param clientName 客户端名称,连接成功之后会显示在电视上
 */
- (void)connectDevice:(NSString *)devIP clientName:(NSString *)clientName callBack:(ConnectDevice)blk;

/**
 断开连接
 */
- (void)disConnectDevice;


/**
 遥控器键值命令
 
 @param cmd 键值
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
 *
 */
- (void)controlTV:(NSString *)cmd;

/**
 待机/唤醒
 
 @param sleep YES:待机 NO:唤醒
 
 * 部分电视不支持待机，该命令响应关机，关机之后无法唤醒
 */
- (void)sleepTV:(BOOL)sleep;

NS_ASSUME_NONNULL_END


@end
