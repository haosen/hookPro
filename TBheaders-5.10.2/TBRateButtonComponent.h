//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBRateButtonComponent : TBJSONModel
{
    _Bool _selected;	// 8 = 0x8
    long long _quantity;	// 16 = 0x10
}

@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)reducingQuantity;
- (void)addingQuantity;

@end
