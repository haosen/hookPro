//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface SynCartTopToastView : UIView
{
    UILabel *_cartRefrashedTipLabel;
    long long _toastType;
}

+ (id)sharedSynCartTopToastView;
@property(nonatomic) long long toastType; // @synthesize toastType=_toastType;
@property(retain, nonatomic) UILabel *cartRefrashedTipLabel; // @synthesize cartRefrashedTipLabel=_cartRefrashedTipLabel;
- (void).cxx_destruct;
- (void)closeSelfAnimation;
- (void)close;
- (void)setTitle:(id)arg1;
- (id)init;

@end
