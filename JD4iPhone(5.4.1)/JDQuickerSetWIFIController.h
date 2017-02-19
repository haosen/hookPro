//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDQuickerBaseCardController.h"

#import "JDBaseToastViewDelegate.h"
#import "JDQuickerJoinControllerDataSource.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIImageView, UITextField;

@interface JDQuickerSetWIFIController : JDQuickerBaseCardController <UITextFieldDelegate, JDQuickerJoinControllerDataSource, UINavigationControllerDelegate, JDBaseToastViewDelegate>
{
    UIImageView *_wifiImageView;
    UITextField *_ssidTextFiled;
    UITextField *_secretTextFiled;
    _Bool _isXChanged;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (id)lightViewWIFIValue;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)changeSecretDisplayStatus:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)noWifiHint;
- (void)initSSIDName;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addConstraints;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
