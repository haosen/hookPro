//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TBCycleScrollViewDatasource-Protocol.h"
#import "TBCycleScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBCycleScrollView, UIView;

@interface GDMBannerTableViewCell : UITableViewCell <TBCycleScrollViewDatasource, TBCycleScrollViewDelegate>
{
    float bannerHeightByitem;	// 8 = 0x8
    NSArray *_bannerList;	// 16 = 0x10
    TBCycleScrollView *_cycleScrollView;	// 24 = 0x18
    NSMutableArray *_bannerViewList;	// 32 = 0x20
    UIView *_blankView;	// 40 = 0x28
}

+ (float)height;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) NSMutableArray *bannerViewList; // @synthesize bannerViewList=_bannerViewList;
@property(retain, nonatomic) TBCycleScrollView *cycleScrollView; // @synthesize cycleScrollView=_cycleScrollView;
@property(retain, nonatomic) NSArray *bannerList; // @synthesize bannerList=_bannerList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didClickPage:(id)arg1 atIndex:(long long)arg2;
- (id)csView:(id)arg1 pageAtIndex:(long long)arg2;
- (long long)numberOfPages:(id)arg1;
- (void)setBannerItemList:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
