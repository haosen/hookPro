//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol WXGBackupBasicLogicDelegate <NSObject>
- (_Bool)onBasicLogicSendData:(NSData *)arg1;

@optional
- (void)onBasicLogicAlert:(unsigned long long)arg1;
- (void)onBasicProgresssCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBasicLogicNotifyEvent:(unsigned long long)arg1;
@end
