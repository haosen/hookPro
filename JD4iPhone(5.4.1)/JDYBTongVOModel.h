//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSNumber, NSString;

@interface JDYBTongVOModel : JDModel
{
    NSNumber *Sort;
    NSArray *YBTrademarkVO;
    NSString *VirtualTypeName;
    NSNumber *VirtualSkuType;
    NSString *Describe;
}

@property(retain, nonatomic) NSString *Describe; // @synthesize Describe;
@property(retain, nonatomic) NSNumber *VirtualSkuType; // @synthesize VirtualSkuType;
@property(retain, nonatomic) NSString *VirtualTypeName; // @synthesize VirtualTypeName;
@property(retain, nonatomic) NSArray *YBTrademarkVO; // @synthesize YBTrademarkVO;
@property(retain, nonatomic) NSNumber *Sort; // @synthesize Sort;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;
- (id)createYBTrademarkVO:(id)arg1;

@end
