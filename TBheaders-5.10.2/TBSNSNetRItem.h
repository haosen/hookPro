//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary;

@interface TBSNSNetRItem : TBJSONModel
{
    NSDictionary *_item;	// 8 = 0x8
}

@property(retain, nonatomic) NSDictionary *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
