//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDThemeStreetModel, UIButton;

@interface JDSubscribedThemeStreetView : UIView
{
    id <JDSubscribedThemeStreetViewDelegate> _delegate;
    JDThemeStreetModel *_themeStreet;
    UIButton *_emptyButton;
    UIButton *_themeStreetButton;
}

@property(retain, nonatomic) UIButton *themeStreetButton; // @synthesize themeStreetButton=_themeStreetButton;
@property(retain, nonatomic) UIButton *emptyButton; // @synthesize emptyButton=_emptyButton;
@property(retain, nonatomic) JDThemeStreetModel *themeStreet; // @synthesize themeStreet=_themeStreet;
@property(nonatomic) __weak id <JDSubscribedThemeStreetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureViewWithThemeStreet:(id)arg1 animated:(_Bool)arg2;
- (void)themeStreetButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
