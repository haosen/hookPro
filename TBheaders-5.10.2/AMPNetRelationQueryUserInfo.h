//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPNetRelationQueryUserInfo : AMPNetPacket
{
    NSString *_queryUserInfoString;	// 8 = 0x8
}

@property(copy, nonatomic) NSString *queryUserInfoString; // @synthesize queryUserInfoString=_queryUserInfoString;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithQueryUserInfoString:(id)arg1;

@end
