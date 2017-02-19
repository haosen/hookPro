//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseMediaObject.h"

@class NSString;

@interface WBVideoObject : WBBaseMediaObject
{
    NSString *videoUrl;	// 8 = 0x8
    NSString *videoLowBandUrl;	// 16 = 0x10
    NSString *videoStreamUrl;	// 24 = 0x18
    NSString *videoLowBandStreamUrl;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *videoLowBandStreamUrl; // @synthesize videoLowBandStreamUrl;
@property(retain, nonatomic) NSString *videoStreamUrl; // @synthesize videoStreamUrl;
@property(retain, nonatomic) NSString *videoLowBandUrl; // @synthesize videoLowBandUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;

@end
