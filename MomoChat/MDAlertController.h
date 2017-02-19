//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, UIViewController;

@interface MDAlertController : NSObject <UIAlertViewDelegate>
{
    _Bool _haveCancel;
    NSMutableArray *_actions;
    NSString *_title;
    NSString *_message;
    UIViewController *_container;
}

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 container:(id)arg3;
@property(nonatomic) _Bool haveCancel; // @synthesize haveCancel=_haveCancel;
@property(nonatomic) __weak UIViewController *container; // @synthesize container=_container;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show;
- (void)addAction:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 container:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
