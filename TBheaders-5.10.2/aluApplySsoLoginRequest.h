//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluBaseRequest.h"

@class NSDictionary, aluApplySsoLoginInfo;

@interface aluApplySsoLoginRequest : aluBaseRequest
{
    aluApplySsoLoginInfo *_ssoTokenApplyRequest;	// 8 = 0x8
    NSDictionary *_ext;	// 16 = 0x10
}

@property(copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) aluApplySsoLoginInfo *ssoTokenApplyRequest; // @synthesize ssoTokenApplyRequest=_ssoTokenApplyRequest;
- (void).cxx_destruct;
- (id)userId;

@end
