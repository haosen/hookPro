//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBottomBarItemModel.h"

@class AliDetailApiUnit, NSString;

@interface AliDetailBottomBarSMCartModel : AliDetailBottomBarItemModel
{
    AliDetailApiUnit *_apiUnit;	// 8 = 0x8
    NSString *_itemId;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) AliDetailApiUnit *apiUnit; // @synthesize apiUnit=_apiUnit;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end

