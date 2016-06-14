//
//  IDCameraPermissionsManager.h
//  VideoCameraDemo
//
//  Created by Adriaan Stellingwerff on 10/03/2014.
//  Copyright (c) 2014 Infoding. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IDPermissionsManager : NSObject

/**
 *  检测用户是否授权麦克风使用
 *
 *  @param block 布尔值
 */
- (void)checkMicrophonePermissionsWithBlock:(void(^)(BOOL granted))block;

/**
 *  检测用户是否授权相机使用
 *
 *  @param block 布尔值
 */
- (void)checkCameraAuthorizationStatusWithBlock:(void(^)(BOOL granted))block;

@end