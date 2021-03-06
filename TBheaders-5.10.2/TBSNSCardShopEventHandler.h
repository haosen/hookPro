//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardEventHandler.h"

#import "IBActionSheetDelegate-Protocol.h"
#import "TBSNSBigPhotoBrowserDelegate-Protocol.h"
#import "TBSNSNetServiceContainerDelegate-Protocol.h"
#import "TBSNSShopBannerViewDelegate-Protocol.h"

@class NSString, TBSCPraiseOperation, TBSNSCard9ImageWithPrice, TBSNSCardCover, TBSNSCardFeedInteraction, TBSNSCardFeedRichText, TBSNSCardPromotionHeader, TBSNSCardShopHeader, TBSNSCardStressArea, TBSNSNetServiceContainer, TBSNSShopTimeLineItem, UIWindow;

@interface TBSNSCardShopEventHandler : TBSNSCardEventHandler <TBSNSBigPhotoBrowserDelegate, TBSNSShopBannerViewDelegate, IBActionSheetDelegate, TBSNSNetServiceContainerDelegate>
{
    TBSNSCardShopHeader *_header;	// 8 = 0x8
    TBSNSCardPromotionHeader *_promotionHeader;	// 16 = 0x10
    TBSNSCardFeedInteraction *_feedInteraction;	// 24 = 0x18
    TBSNSCardStressArea *_feedStressArea;	// 32 = 0x20
    TBSNSCard9ImageWithPrice *_card9Image;	// 40 = 0x28
    TBSNSCardCover *_cardCover;	// 48 = 0x30
    TBSNSCardFeedRichText *_cardRichText;	// 56 = 0x38
    TBSNSNetServiceContainer *_servicesContainer;	// 64 = 0x40
    TBSCPraiseOperation *_praiseOperater;	// 72 = 0x48
    TBSNSShopTimeLineItem *_shopTimeLineItem;	// 80 = 0x50
    UIWindow *_customWindow;	// 88 = 0x58
}

@property(retain, nonatomic) UIWindow *customWindow; // @synthesize customWindow=_customWindow;
@property(retain, nonatomic) TBSNSShopTimeLineItem *shopTimeLineItem; // @synthesize shopTimeLineItem=_shopTimeLineItem;
@property(retain, nonatomic) TBSCPraiseOperation *praiseOperater; // @synthesize praiseOperater=_praiseOperater;
@property(retain, nonatomic) TBSNSNetServiceContainer *servicesContainer; // @synthesize servicesContainer=_servicesContainer;
@property(nonatomic) __weak TBSNSCardFeedRichText *cardRichText; // @synthesize cardRichText=_cardRichText;
@property(nonatomic) __weak TBSNSCardCover *cardCover; // @synthesize cardCover=_cardCover;
@property(nonatomic) __weak TBSNSCard9ImageWithPrice *card9Image; // @synthesize card9Image=_card9Image;
@property(nonatomic) __weak TBSNSCardStressArea *feedStressArea; // @synthesize feedStressArea=_feedStressArea;
@property(nonatomic) __weak TBSNSCardFeedInteraction *feedInteraction; // @synthesize feedInteraction=_feedInteraction;
@property(nonatomic) __weak TBSNSCardPromotionHeader *promotionHeader; // @synthesize promotionHeader=_promotionHeader;
@property(nonatomic) __weak TBSNSCardShopHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showToast:(id)arg1;
- (void)enterUserCenter;
- (void)shareBtnClicked;
- (void)tabSelect:(id)arg1 atIndex:(long long)arg2 withUrl:(id)arg3 withTitle:(id)arg4;
- (void)result:(_Bool)arg1 markT:(int)arg2 withData:(id)arg3;
- (void)refuseDynamic;
- (void)refuseAllRecommend;
- (void)refuseRecommend;
- (void)removeThisFeed;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)selected;
- (void)clickHeaderSpace:(id)arg1;
- (void)clickHeaderIconOrTitle:(id)arg1;
- (id)getUTParams;
- (void)goShop;
- (void)goDetail:(_Bool)arg1;
- (void)clickTag:(id)arg1;
- (void)clickMoreButton:(id)arg1;
- (void)clickFeedComment:(id)arg1;
- (void)clickFeedPraise:(id)arg1;
- (void)clickPromotionHeader:(id)arg1;
- (void)clickLastLineBtn;
- (_Bool)clickImageShouldGoToDetailForItem:(id)arg1;
- (_Bool)setupEvent;
- (id)photoBrowser:(id)arg1 photoModelAtIndex:(unsigned long long)arg2;
- (id)imageFromView:(id)arg1 atFrame:(struct CGRect)arg2;
- (void)goBigImageWithItem:(id)arg1 index:(unsigned long long)arg2 weakSelf:(id)arg3;
- (id)getBigImagePageUTParams;
- (void)addPraise;
- (void)removePraise;
- (void)addFloatViewListener;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

