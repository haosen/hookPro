//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MLConferenceWindowDataModel, MLCountDownView, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface MLConferenceWindow : UIView
{
    _Bool _isFullScreen;
    _Bool _closeButtonIsHidden;
    _Bool _isPreviewAnimating;
    MLConferenceWindowDataModel *_dataModel;
    UIButton *_cameraButton;
    unsigned long long _conferenceWindowType;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <MLConferenceWindowDelegate> _delegate;
    UIImageView *_iconImageView;
    UILabel *_labelTitle;
    MLCountDownView *_countDownView;
    UIView *_photoImageContainerView;
    UILabel *_userName;
    UIView *_windowTitleContainerView;
    UIView *_mask;
    UILabel *_tipLabel;
    UIImageView *_userAttributeImageView;
    unsigned long long _conferenceRoleType;
    UIView *_rankingPhotoAnimationView;
    UIView *_starThumbsView;
    UILabel *_starThumbsLabel;
    UIButton *_closeButton;
    UIButton *_rankingButton;
}

@property(retain, nonatomic) UIButton *rankingButton; // @synthesize rankingButton=_rankingButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *starThumbsLabel; // @synthesize starThumbsLabel=_starThumbsLabel;
@property(retain, nonatomic) UIView *starThumbsView; // @synthesize starThumbsView=_starThumbsView;
@property(retain, nonatomic) UIView *rankingPhotoAnimationView; // @synthesize rankingPhotoAnimationView=_rankingPhotoAnimationView;
@property(nonatomic) unsigned long long conferenceRoleType; // @synthesize conferenceRoleType=_conferenceRoleType;
@property(retain, nonatomic) UIImageView *userAttributeImageView; // @synthesize userAttributeImageView=_userAttributeImageView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(nonatomic) _Bool isPreviewAnimating; // @synthesize isPreviewAnimating=_isPreviewAnimating;
@property(retain, nonatomic) UIView *windowTitleContainerView; // @synthesize windowTitleContainerView=_windowTitleContainerView;
@property(nonatomic) _Bool closeButtonIsHidden; // @synthesize closeButtonIsHidden=_closeButtonIsHidden;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIView *photoImageContainerView; // @synthesize photoImageContainerView=_photoImageContainerView;
@property(retain, nonatomic) MLCountDownView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <MLConferenceWindowDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) unsigned long long conferenceWindowType; // @synthesize conferenceWindowType=_conferenceWindowType;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) MLConferenceWindowDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)showRankingAction:(id)arg1;
- (void)configConferenceWindowInfoWithDataModel:(id)arg1;
- (void)setCloseButtonHidden:(_Bool)arg1;
- (void)closeAction;
- (void)startPreviewAnimationWithDuration:(unsigned long long)arg1;
- (id)creatLabelTitle:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)setupConnectingConferenceView;
- (id)setupRankingPhotoImageView:(struct CGRect)arg1 photoUrl:(id)arg2;
- (id)setupPhotoImageView:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void)updateOnlineNum:(unsigned long long)arg1;
- (void)setupSlaverPhotoView:(id)arg1 waitConferenceCount:(unsigned long long)arg2;
- (void)updateWaitConferenceView:(id)arg1 waitConferenceCount:(unsigned long long)arg2;
- (void)setupWaitConferenceView;
- (void)setupJoinConferenceView;
- (void)setupConferenceWindow:(unsigned long long)arg1;
- (void)hiddenTipLabel:(_Bool)arg1;
- (void)setupConferenceInterruptLabel;
- (void)updatestarThumbs:(unsigned long long)arg1;
- (void)updateUserInfoUI;
- (void)updateUserNameFrame:(double)arg1;
- (void)updatestarThumbsViewFrame;
- (id)formatStringFromOnlineNumber:(unsigned long long)arg1;
- (void)updateCurrentRankingPhoto:(unsigned long long)arg1;
- (unsigned long long)imageViewTag:(unsigned long long)arg1;
- (void)updateRankingPhoto:(id)arg1;
- (void)startRankingPhotoAnimationWithImageView:(id)arg1 animationTime:(double)arg2 delayTime:(double)arg3 startCoordX:(double)arg4 endCoordX:(double)arg5;
- (void)setupRankingPhotoIndex:(unsigned long long)arg1 animationTime:(double)arg2 delayTime:(double)arg3 startCoordX:(double)arg4 endCoordX:(double)arg5;
- (void)setupThirdPhotoAnimation;
- (void)setupSecondPhotoAnimation;
- (void)setupFirstPhotoAnimation;
- (void)startRankingAnimation:(unsigned long long)arg1;
- (void)setupRankingPhotoAnimation;
- (void)setupUserInfoUI;
- (void)setupUIWithType:(unsigned long long)arg1 delegate:(id)arg2 role:(unsigned long long)arg3;
- (void)layoutSubviews;

@end
