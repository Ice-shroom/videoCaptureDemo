//
//  IDFileManager.h
//  VideoCaptureDemo
//
//  Created by Adriaan Stellingwerff on 9/04/2015.
//  Copyright (c) 2015 Infoding. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IDFileManager : NSObject
// 缓存文件
- (NSURL *) tempFileURL;
// 删除文件
- (void) removeFile:(NSURL *)outputFileURL;
// 保存文件到沙河路径下
- (void) copyFileToDocuments:(NSURL *)fileURL;
// 将文件保存到相机卷中
- (void) copyFileToCameraRoll:(NSURL *)fileURL;

@end
