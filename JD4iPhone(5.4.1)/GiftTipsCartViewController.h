//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class GiftGreentingsModel, NSString, UIImageView, UILabel, UIScrollView, UITextField, UITextView, UIView;

@interface GiftTipsCartViewController : JDViewController <UITextFieldDelegate, UITextViewDelegate>
{
    UIScrollView *scrollerView;
    UILabel *toLabel;
    UITextField *toTextField;
    UILabel *fromLabel;
    UITextField *fromTextField;
    UITextView *contentView;
    UILabel *tipsLabel;
    UILabel *surplusTipsLabel;
    _Bool isKeyBoardUp;
    _Bool isEditingText;
    UIView *fromView;
    UIView *toView;
    UIImageView *rightIconView;
    UIImageView *bottomIconView;
    GiftGreentingsModel *greetingsModel;
}

@property(retain, nonatomic) GiftGreentingsModel *greetingsModel; // @synthesize greetingsModel;
- (void)didSaveGreetings:(_Bool)arg1;
- (void)handleKeyboardFrameChangedNotifi:(id)arg1;
- (void)keyboardDidHidden;
- (void)textFieldDidChange:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)scrollToCursorPos;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)scrollToEnd;
- (void)setContentViewLine;
- (void)rightNavBtnClicked;
- (void)backButtonClicked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
