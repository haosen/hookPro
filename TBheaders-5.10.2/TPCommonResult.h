//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPResult.h"

@class NSString;

@interface TPCommonResult : TPResult
{
    NSString *_title;	// 8 = 0x8
    NSString *_content;	// 16 = 0x10
    NSString *_picUrl;	// 24 = 0x18
    NSString *_leftBtnText;	// 32 = 0x20
    NSString *_rightBtnText;	// 40 = 0x28
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSString *rightBtnText; // @synthesize rightBtnText=_rightBtnText;
@property(retain, nonatomic) NSString *leftBtnText; // @synthesize leftBtnText=_leftBtnText;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end
