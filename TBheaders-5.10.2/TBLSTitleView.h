//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TBLSTitleView : UIView
{
    UIButton *_backButton;	// 8 = 0x8
    UIButton *_addressButton;	// 16 = 0x10
}

- (void).cxx_destruct;
- (void)updateTitle:(id)arg1;
- (void)setBackSelector:(SEL)arg1 addressSelector:(SEL)arg2 target:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupView;
- (void)updateAddressButtonEdgeinsets;

@end
