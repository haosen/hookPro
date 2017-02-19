//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PNLineChartDataItem, UIColor;

@interface PNLineChartData : NSObject
{
    UIColor *_color;	// 8 = 0x8
    UIColor *_fillColor;	// 16 = 0x10
    double _alpha;	// 24 = 0x18
    PNLineChartDataItem *_starItem;	// 32 = 0x20
    unsigned long long _itemCount;	// 40 = 0x28
    CDUnknownBlockType _getData;	// 48 = 0x30
    unsigned long long _inflexionPointStyle;	// 56 = 0x38
    double _inflexionPointWidth;	// 64 = 0x40
    double _lineWidth;	// 72 = 0x48
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double inflexionPointWidth; // @synthesize inflexionPointWidth=_inflexionPointWidth;
@property(nonatomic) unsigned long long inflexionPointStyle; // @synthesize inflexionPointStyle=_inflexionPointStyle;
@property(copy) CDUnknownBlockType getData; // @synthesize getData=_getData;
@property unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) PNLineChartDataItem *starItem; // @synthesize starItem=_starItem;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setupDefaultValues;
- (id)init;

@end
