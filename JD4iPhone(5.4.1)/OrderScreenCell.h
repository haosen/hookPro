//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class JDButton, OrderScreenItemModel, UIImageView;

@interface OrderScreenCell : UICollectionViewCell
{
    JDButton *_screenButton;
    UIImageView *_flagScreenImageV;
    CDUnknownBlockType _tapButtonBlock;
    OrderScreenItemModel *_model;
}

@property(retain, nonatomic) OrderScreenItemModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType tapButtonBlock; // @synthesize tapButtonBlock=_tapButtonBlock;
@property(retain, nonatomic) UIImageView *flagScreenImageV; // @synthesize flagScreenImageV=_flagScreenImageV;
@property(retain, nonatomic) JDButton *screenButton; // @synthesize screenButton=_screenButton;
- (void).cxx_destruct;
- (void)_clickButton:(id)arg1;
- (void)clickItem:(CDUnknownBlockType)arg1;
- (void)fillData:(id)arg1 specialId:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
