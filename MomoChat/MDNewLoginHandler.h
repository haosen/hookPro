//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDNewLoginHandler : NSObject
{
    _Bool _isLogining;
    NSString *_accessToken;
    NSString *_pwdMD5;
    long long _errorCode;
    id <MDNewLoginHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <MDNewLoginHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *pwdMD5; // @synthesize pwdMD5=_pwdMD5;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) _Bool isLogining; // @synthesize isLogining=_isLogining;
- (void).cxx_destruct;
- (void)loginError:(id)arg1;
- (void)loginFail:(id)arg1;
- (void)addSession:(id)arg1 time:(id)arg2;
- (void)loginSuccess:(id)arg1;
- (void)private_checkAccount:(id)arg1 withPwd:(id)arg2 smsToken:(id)arg3 type:(unsigned long long)arg4;
- (void)checkSMSLoginPhoneNumber:(id)arg1 smsCode:(id)arg2 smsToken:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)checkLoginWithUser:(id)arg1 password:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
