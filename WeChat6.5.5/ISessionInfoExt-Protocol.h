//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBaseContact, NSMutableArray, NSString;

@protocol ISessionInfoExt <NSObject>

@optional
- (void)onModifyDraft:(CBaseContact *)arg1 draft:(NSString *)arg2 draftTime:(unsigned int)arg3;
- (void)onGetDraft:(CBaseContact *)arg1 draft:(NSMutableArray *)arg2;
@end

