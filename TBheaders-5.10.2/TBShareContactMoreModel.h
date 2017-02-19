//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBShareContactMoreModel : NSObject
{
    NSString *_taoName;	// 8 = 0x8
    NSString *_taoPinyin;	// 16 = 0x10
    NSString *_contactName;	// 24 = 0x18
    NSString *_contactPinyin;	// 32 = 0x20
    NSString *_logoUrl;	// 40 = 0x28
    NSString *_phoneNumber;	// 48 = 0x30
    NSString *_subtext;	// 56 = 0x38
    NSString *_number;	// 64 = 0x40
    unsigned long long _type;	// 72 = 0x48
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *contactPinyin; // @synthesize contactPinyin=_contactPinyin;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *taoPinyin; // @synthesize taoPinyin=_taoPinyin;
@property(copy, nonatomic) NSString *taoName; // @synthesize taoName=_taoName;
- (void).cxx_destruct;

@end
