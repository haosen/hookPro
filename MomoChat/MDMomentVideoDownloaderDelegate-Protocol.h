//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDMomentVideoDownloader;

@protocol MDMomentVideoDownloaderDelegate <NSObject>

@optional
- (void)process:(float)arg1 download:(MDMomentVideoDownloader *)arg2;
- (void)downLoadVideoFail:(MDMomentVideoDownloader *)arg1;
- (void)downLoadVideoFinish:(MDMomentVideoDownloader *)arg1;
@end
