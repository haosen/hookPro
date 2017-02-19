//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCard.h"

#import "ITBOCellHeight-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBOUser;

@interface TBOCommunityInfoCard : TBOBaseCard <ITBOCellHeight>
{
    double _footerHeight;	// 32 = 0x20
    NSString *_cid;	// 40 = 0x28
    NSString *_icon;	// 48 = 0x30
    NSString *_pic;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    long long _type;	// 72 = 0x48
    long long _topicNum;	// 80 = 0x50
    long long _feedNum;	// 88 = 0x58
    NSString *_topicId;	// 96 = 0x60
    NSString *_topicName;	// 104 = 0x68
    NSMutableArray<TBOUser> *_userList;	// 112 = 0x70
}

@property(retain, nonatomic) NSMutableArray<TBOUser> *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long feedNum; // @synthesize feedNum=_feedNum;
@property(nonatomic) long long topicNum; // @synthesize topicNum=_topicNum;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (double)getFooterHeight;
- (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
