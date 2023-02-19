//
//  CIPushTool.h
//  CIPush
//
//  Created by daben on 2022/12/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 持续向外回调消息
typedef void(^PushResultCallback)(NSInteger callbackType, NSString * _Nullable callbackName, id _Nullable callbackParams, NSString * _Nullable errorString);

// 持续向外回调订阅消息
typedef void(^PushSubscribeResultCallback)(NSString * _Nullable callbackName, id _Nullable callbackParams, NSString * _Nullable errorString);

@interface CIPushTool : NSObject

+ (instancetype)tool;

/// 验证命令是否有效
/// @param command 命令
- (BOOL)canIUse:(NSString *)command;

/**
 推送消息处理
 
 @param message JS消息体
 @param callback 消息回调
 @discussion 该方法属于Push消息分发器，所有和Push相关的消息都通过该方法进行转发
 */
- (void)dispatchJSMessage:(NSDictionary *)message callback:(PushResultCallback)callback;

/**
 JS订阅消息
 
 @param callback 订阅消息回调
 @discussion 该方法属于JS消息分发器，所有和JS-Native相关的订阅消息都通过该方法进行回调
 */
- (void)subscribeMessageWithCallback:(PushSubscribeResultCallback)callback;

@end

NS_ASSUME_NONNULL_END
