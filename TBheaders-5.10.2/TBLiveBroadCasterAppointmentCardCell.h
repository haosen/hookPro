//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

@class TBLiveAppointmentSubscribeView, UIImageView, UILabel;

@interface TBLiveBroadCasterAppointmentCardCell : TBLiveTableViewCell
{
    UIImageView *_coverImgView;	// 8 = 0x8
    UILabel *_appointmentDate;	// 16 = 0x10
    UILabel *_title;	// 24 = 0x18
    TBLiveAppointmentSubscribeView *_subscribeView;	// 32 = 0x20
}

+ (struct CGSize)viewSize;
@property(retain, nonatomic) TBLiveAppointmentSubscribeView *subscribeView; // @synthesize subscribeView=_subscribeView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *appointmentDate; // @synthesize appointmentDate=_appointmentDate;
@property(retain, nonatomic) UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void).cxx_destruct;
- (void)refreshWithViewModel:(id)arg1;
- (void)updateLayoutConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
