//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NXAnnularIndicatorView, UIScrollView;

@interface NXInfiniteScrollingView : UIView
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _canLoadWhileDragging;	// 9 = 0x9
    _Bool _wasTriggeredByUser;	// 10 = 0xa
    _Bool _isObserving;	// 11 = 0xb
    CDUnknownBlockType infiniteScrollingHandler;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    NXAnnularIndicatorView *_loadingView;	// 40 = 0x28
    double _preloadThreshold;	// 48 = 0x30
    NSMutableArray *_viewForState;	// 56 = 0x38
    double _originalBottomInset;	// 64 = 0x40
}

@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) _Bool wasTriggeredByUser; // @synthesize wasTriggeredByUser=_wasTriggeredByUser;
@property(nonatomic) double originalBottomInset; // @synthesize originalBottomInset=_originalBottomInset;
@property(retain, nonatomic) NSMutableArray *viewForState; // @synthesize viewForState=_viewForState;
@property(nonatomic) double preloadThreshold; // @synthesize preloadThreshold=_preloadThreshold;
@property(nonatomic) _Bool canLoadWhileDragging; // @synthesize canLoadWhileDragging=_canLoadWhileDragging;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NXAnnularIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType infiniteScrollingHandler; // @synthesize infiniteScrollingHandler;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)triggerRefresh;
- (void)setCustomView:(id)arg1 forState:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setScrollViewContentInsetForInfiniteScrolling;
- (void)resetScrollViewContentInset;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

