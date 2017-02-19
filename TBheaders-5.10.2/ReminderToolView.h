//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RemindButtonDelegate-Protocol.h"

@class NSMutableDictionary, NSString, ReminderButton, UIButton;
@protocol ReminderToolViewDelegate;

@interface ReminderToolView : UIView <RemindButtonDelegate>
{
    _Bool _isAallDay;	// 8 = 0x8
    _Bool _isSetUp;	// 9 = 0x9
    int _remindTime;	// 12 = 0xc
    NSMutableDictionary *_isAllDayButtons;	// 16 = 0x10
    NSMutableDictionary *_notAllDayButtons;	// 24 = 0x18
    ReminderButton *_selectedButton;	// 32 = 0x20
    id <ReminderToolViewDelegate> _delegate;	// 40 = 0x28
    UIButton *_beforeBtn;	// 48 = 0x30
}

@property(retain, nonatomic) UIButton *beforeBtn; // @synthesize beforeBtn=_beforeBtn;
@property id <ReminderToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool isSetUp; // @synthesize isSetUp=_isSetUp;
@property(retain, nonatomic) ReminderButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) NSMutableDictionary *notAllDayButtons; // @synthesize notAllDayButtons=_notAllDayButtons;
@property(retain, nonatomic) NSMutableDictionary *isAllDayButtons; // @synthesize isAllDayButtons=_isAllDayButtons;
@property(nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAallDay;
- (void).cxx_destruct;
- (void)sendSelectedRemindTime:(int)arg1;
- (void)displayWithIsAllDay:(_Bool)arg1 andRemindTime:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)setUp;
- (void)displayButtons;
- (void)setUpButtons;
@property int remindTime; // @synthesize remindTime=_remindTime;
- (_Bool)isAallDay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
