//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDNearbyHotGroupCategoryButton, NSString, UIImageView, UIScrollView;

@interface MDHotGroupTypeView : UIView
{
    _Bool _isButtonAnimating;
    id <MDHotGroupTypeDelegate> _hotGroupTypeDelegate;
    UIView *_categroyView;
    UIScrollView *_scrollView;
    MDNearbyHotGroupCategoryButton *_preSelectedButton;
    UIImageView *_animateImageView;
    UIView *_maskView;
    NSString *_categaryTitle;
}

@property(retain, nonatomic) NSString *categaryTitle; // @synthesize categaryTitle=_categaryTitle;
@property(nonatomic) _Bool isButtonAnimating; // @synthesize isButtonAnimating=_isButtonAnimating;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) MDNearbyHotGroupCategoryButton *preSelectedButton; // @synthesize preSelectedButton=_preSelectedButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *categroyView; // @synthesize categroyView=_categroyView;
@property(nonatomic) __weak id <MDHotGroupTypeDelegate> hotGroupTypeDelegate; // @synthesize hotGroupTypeDelegate=_hotGroupTypeDelegate;
- (void).cxx_destruct;
- (void)buttonClickedWithSender:(id)arg1;
- (void)animateButtonClickWithFromButton:(id)arg1 toButton:(id)arg2;
- (void)scrollSelectedButtonWithButton:(id)arg1;
- (void)refreshHotGroupTypeWithDataArray:(id)arg1 withButtonType:(unsigned long long)arg2;
- (void)refreshHotGroupTypeWithDataArray:(id)arg1 withButtonType:(unsigned long long)arg2 withFromType:(unsigned long long)arg3;
- (void)refreshFilterCategoryButtonStateWithIndex:(long long)arg1;
- (void)resetData;
- (id)nearbyButtonWithGroupCategoryItem:(id)arg1 index:(long long)arg2 btnWidth:(double)arg3 buttonType:(unsigned long long)arg4 isDrawLine:(_Bool)arg5;
- (id)buttonWithGroupCategoryItem:(id)arg1 index:(long long)arg2 btnWidth:(double)arg3 buttonType:(unsigned long long)arg4 isDrawLine:(_Bool)arg5;
- (void)setCategroyViewTitle:(id)arg1;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
