//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface FinalSearchHotTagModel : JDModel
{
    int _tagType;
    NSString *_currentKeyName;
    NSString *_tagValue;
    NSString *_tagName;
    NSString *_tagLog;
    NSString *_tiledImageUrl;
    NSString *_tiledLog;
    NSString *_tiledName;
    NSString *_tiledType;
    NSString *_tiledValue;
}

@property(copy, nonatomic) NSString *tiledValue; // @synthesize tiledValue=_tiledValue;
@property(copy, nonatomic) NSString *tiledType; // @synthesize tiledType=_tiledType;
@property(copy, nonatomic) NSString *tiledName; // @synthesize tiledName=_tiledName;
@property(copy, nonatomic) NSString *tiledLog; // @synthesize tiledLog=_tiledLog;
@property(copy, nonatomic) NSString *tiledImageUrl; // @synthesize tiledImageUrl=_tiledImageUrl;
@property(copy, nonatomic) NSString *tagLog; // @synthesize tagLog=_tagLog;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *tagValue; // @synthesize tagValue=_tagValue;
@property(nonatomic) NSString *currentKeyName; // @synthesize currentKeyName=_currentKeyName;
@property(nonatomic) int tagType; // @synthesize tagType=_tagType;
- (void).cxx_destruct;
- (id)showText;
- (void)setDataWithDic:(id)arg1;

@end

