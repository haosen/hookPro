//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class FavoritesItem, MMHeadImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface FavDetailHeaderView : MMUIView
{
    MMHeadImageView *m_headImgView;
    UILabel *m_fromLabel;
    UILabel *m_sourceTimeLabel;
    UIView *m_separateLine;
    FavoritesItem *m_favItem;
}

+ (double)getFavDetailHeaderHeight:(id)arg1;
- (void).cxx_destruct;
- (void)initSeperateLine;
- (void)initSrcTimeLabel;
- (void)initFromLabel;
- (void)initHeaderImgView;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFavItem:(id)arg1;

@end
