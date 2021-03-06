//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "JHSFooterCellMoreProtocol-Protocol.h"

@class NSString, UIButton, UIView;

@interface JHSFooterCellMore : UICollectionReusableView <JHSFooterCellMoreProtocol>
{
    long long _loadingState;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
- (void).cxx_destruct;
- (void)callback:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

