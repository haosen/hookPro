//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

@class NSMutableArray, UIView;

@interface TBOrderPayDetailV2Cell : TBOrderBasicCell
{
    NSMutableArray *_orderPriceDetailViews;	// 8 = 0x8
    NSMutableArray *_payDetailViews;	// 16 = 0x10
    UIView *_payDetailBackgroundView;	// 24 = 0x18
    UIView *_payDetailSepLineView;	// 32 = 0x20
    UIView *_payDetailSepLineUpwardArrowView;	// 40 = 0x28
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) UIView *payDetailSepLineUpwardArrowView; // @synthesize payDetailSepLineUpwardArrowView=_payDetailSepLineUpwardArrowView;
@property(retain, nonatomic) UIView *payDetailSepLineView; // @synthesize payDetailSepLineView=_payDetailSepLineView;
@property(retain, nonatomic) UIView *payDetailBackgroundView; // @synthesize payDetailBackgroundView=_payDetailBackgroundView;
@property(retain, nonatomic) NSMutableArray *payDetailViews; // @synthesize payDetailViews=_payDetailViews;
@property(retain, nonatomic) NSMutableArray *orderPriceDetailViews; // @synthesize orderPriceDetailViews=_orderPriceDetailViews;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)layoutSubviews;
- (void)viewLayout;

@end
