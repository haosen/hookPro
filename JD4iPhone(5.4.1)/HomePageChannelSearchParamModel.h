//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HomePageChannelSearchParamModel : NSObject
{
    _Bool _stock;
    _Bool _isSelf;
    _Bool _globalPurchaseFilter;
    NSString *_srv;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *srv; // @synthesize srv=_srv;
@property(nonatomic) _Bool globalPurchaseFilter; // @synthesize globalPurchaseFilter=_globalPurchaseFilter;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) _Bool stock; // @synthesize stock=_stock;
- (void).cxx_destruct;

@end
