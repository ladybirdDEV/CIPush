//
//  CIPushConst.h
//  CIPush
//
//  Created by daben on 2022/12/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 回调类型
typedef NS_ENUM(NSUInteger, CIPushJSCallbackType) {
    CIPushJSCallbackTypeNormal, // 普通回调
    CIPushJSCallbackTypeSubscribe // 订阅回调
};

/// 平台类型
typedef NSString * CIPushPlatform;
/// 个推
FOUNDATION_EXPORT CIPushPlatform const CIPushPlatformGT;
/// FCM（Firebase Cloud Message）
FOUNDATION_EXPORT CIPushPlatform const CIPushPlatformFCM;

/// plist根参数
typedef NSString * CIPushBundleKey;
FOUNDATION_EXPORT CIPushBundleKey const CIPushBundlePushKey;
FOUNDATION_EXPORT CIPushBundleKey const CIPushBundlePlatformKey;
FOUNDATION_EXPORT CIPushBundleKey const CIPushBundleAppIDKey;
FOUNDATION_EXPORT CIPushBundleKey const CIPushBundleAppKeyKey;
FOUNDATION_EXPORT CIPushBundleKey const CIPushBundleAppSecretKey;

/// 附加消息体
typedef NSString * CIPushUserInfoKey;
FOUNDATION_EXPORT CIPushUserInfoKey const CIPushUserInfoPayloadKey;
FOUNDATION_EXPORT CIPushUserInfoKey const CIPushUserInfoTitleKey;
FOUNDATION_EXPORT CIPushUserInfoKey const CIPushUserInfoSubtitleKey;
FOUNDATION_EXPORT CIPushUserInfoKey const CIPushUserInfoBodyKey;

/// 参数名
typedef NSString * CIPushParamName;
/// callbackId
FOUNDATION_EXPORT CIPushParamName const CIPushParamCallbackIdName;
/// payload
FOUNDATION_EXPORT CIPushParamName const CIPushParamPayloadName;
/// registration_token
FOUNDATION_EXPORT CIPushParamName const CIPushParamTokenName;

/// 响应：Native回调给小程序
typedef NSString * CIPushResKey;

/// 错误码（小程序框架设计如此：errMsg=ok代表成功，errMsg=fail代表失败）
/// 使用示例：@{CIPushResStatus : CIPushResStatusSuccess, CIPushResStatusMessage : @"This response is success"}
FOUNDATION_EXPORT CIPushResKey const CIPushResStatusSuccess;
FOUNDATION_EXPORT CIPushResKey const CIPushResStatus;
FOUNDATION_EXPORT CIPushResKey const CIPushResStatusSuccess;
FOUNDATION_EXPORT CIPushResKey const CIPushResStatusFailure;
FOUNDATION_EXPORT CIPushResKey const CIPushResStatusMessage;

@interface CIPushConst : NSObject

@end

NS_ASSUME_NONNULL_END
