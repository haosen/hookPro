//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDRankHomeInfoModel, NSString, UIImageView, UILabel, UITableView;

@interface JDRankHomeHotsaleView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    UILabel *cateNameLabel;
    UIImageView *line;
    UITableView *listview;
    _Bool isMoving;
    id <JDRankHomeHotsaleViewDelegate> _hotdelegate;
    long long _viewtag;
    JDRankHomeInfoModel *_hothomeInfomodel;
}

@property(retain, nonatomic) JDRankHomeInfoModel *hothomeInfomodel; // @synthesize hothomeInfomodel=_hothomeInfomodel;
@property(nonatomic) long long viewtag; // @synthesize viewtag=_viewtag;
@property(nonatomic) id <JDRankHomeHotsaleViewDelegate> hotdelegate; // @synthesize hotdelegate=_hotdelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)getRowsInSection:(long long)arg1;
- (void)tapProduct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
