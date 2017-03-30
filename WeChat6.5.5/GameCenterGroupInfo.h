//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GameCenterGroupInfo : MMObject <PBCoding>
{
    NSString *title;
    NSString *icon;
    NSString *intro;
    NSString *desc;
    NSString *moreUrl;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *moreUrl; // @synthesize moreUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *intro; // @synthesize intro;
@property(retain, nonatomic) NSString *icon; // @synthesize icon;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
