//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPMoviePlayerController.h"

#import "JDBaseToastViewDelegate.h"

@class JDImageView, JDPlayerMenuView, NSString, NSTimer, UIView;

@interface JDPlayerController : MPMoviePlayerController <JDBaseToastViewDelegate>
{
    _Bool _isFullscreenMode;
    _Bool _isStoping;
    CDUnknownBlockType _dimissCompleteBlock;
    CDUnknownBlockType _eventBlock;
    JDPlayerMenuView *_menuView;
    JDImageView *_movieBackgroundView;
    UIView *_disconnectedBackgroundView;
    UIView *_disconnectedView;
    NSTimer *_durationTimer;
    NSTimer *_retryPlayTime;
    NSTimer *_exceptionTimer;
    UIView *_bgroundView;
    struct CGRect _originFrame;
}

@property(retain, nonatomic) UIView *bgroundView; // @synthesize bgroundView=_bgroundView;
@property(nonatomic) _Bool isStoping; // @synthesize isStoping=_isStoping;
@property(retain, nonatomic) NSTimer *exceptionTimer; // @synthesize exceptionTimer=_exceptionTimer;
@property(retain, nonatomic) NSTimer *retryPlayTime; // @synthesize retryPlayTime=_retryPlayTime;
@property(retain, nonatomic) NSTimer *durationTimer; // @synthesize durationTimer=_durationTimer;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) _Bool isFullscreenMode; // @synthesize isFullscreenMode=_isFullscreenMode;
@property(retain, nonatomic) UIView *disconnectedView; // @synthesize disconnectedView=_disconnectedView;
@property(retain, nonatomic) UIView *disconnectedBackgroundView; // @synthesize disconnectedBackgroundView=_disconnectedBackgroundView;
@property(retain, nonatomic) JDImageView *movieBackgroundView; // @synthesize movieBackgroundView=_movieBackgroundView;
@property(retain, nonatomic) JDPlayerMenuView *menuView; // @synthesize menuView=_menuView;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(copy, nonatomic) CDUnknownBlockType dimissCompleteBlock; // @synthesize dimissCompleteBlock=_dimissCompleteBlock;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)fadeDismissControl;
- (void)retryPlay;
- (void)stopexceptionTimer;
- (void)startexceptionTimer;
- (void)stopRetryPlayTimer;
- (void)startRetryPlayTimer;
- (void)stopDurationTimer;
- (void)startDurationTimer;
- (void)setTimeLabelValues:(double)arg1 totalTime:(double)arg2;
- (void)monitorVideoPlayback;
- (void)progressSliderValueChanged:(id)arg1;
- (void)progressSliderTouchEnded:(id)arg1;
- (void)progressSliderTouchBegan:(id)arg1;
- (void)setProgressSliderMaxMinValues;
- (void)shrinkScreenButtonClick;
- (void)fullScreenButtonClick;
- (void)closeButtonClick;
- (void)pauseButtonClick;
- (void)replayButtonClick;
- (void)playButtonClick;
- (void)mediaPlaybackIsPreparedToPlayDidChangeNotification:(id)arg1;
- (void)moviePlayerReadyForDisplayDidChangeNotification:(id)arg1;
- (void)moviePlayerPlaybackDidFinishNotification:(id)arg1;
- (void)movieDurationAvailableNotification:(id)arg1;
- (void)moviePlayerLoadStateDidChangeNotification:(id)arg1;
- (void)moviePlayerPlaybackStateDidChangeNotification:(id)arg1;
- (void)stopToast;
- (void)retryToPlay;
- (void)configControlAction;
- (void)cancelObserver;
- (void)configObserver;
- (void)dismissPlayerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)showInWindow;
- (void)didFinishInToastView:(id)arg1;
- (void)setBackgroundImageURL:(id)arg1;
- (void)setContentURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

