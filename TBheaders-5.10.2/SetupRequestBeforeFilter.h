//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BeforeFilter-Protocol.h"

@class NSString;

@interface SetupRequestBeforeFilter : NSObject <BeforeFilter>
{
    NSString *_systemName;	// 8 = 0x8
    NSString *_systemVersion;	// 16 = 0x10
    NSString *_model;	// 24 = 0x18
    NSString *_ua;	// 32 = 0x20
}

+ (id)getCurrentDeviceModel;
@property(retain, nonatomic) NSString *ua; // @synthesize ua=_ua;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
- (void).cxx_destruct;
- (id)generateWUAWithRequest:(id)arg1 appkey:(id)arg2 timestamp:(id)arg3;
- (void)configSwitch:(id)arg1;
- (void)setup:(id)arg1;
- (void)handle:(id)arg1 result:(id)arg2;
- (id)getName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
