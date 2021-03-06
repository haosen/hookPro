//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKServerDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TMSearchProxy : NSObject <TBSDKServerDelegate>
{
    long long _requestSno;	// 8 = 0x8
    NSMutableDictionary *_callbacks;	// 16 = 0x10
    NSMutableDictionary *_responseFactory;	// 24 = 0x18
}

+ (long long)sendMtopRequest:(id)arg1 didRecvResponse:(CDUnknownBlockType)arg2 responseSuccess:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
+ (long long)sendMtopRequest:(id)arg1 responseSuccess:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
+ (id)sharedProxy;
@property(retain, nonatomic) NSMutableDictionary *responseFactory; // @synthesize responseFactory=_responseFactory;
@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
@property(nonatomic) long long requestSno; // @synthesize requestSno=_requestSno;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)cancelRequest:(long long)arg1;
- (void)cancelAll;
- (long long)sendMtopRequest:(id)arg1 didRecvResponse:(CDUnknownBlockType)arg2 responseSuccess:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (long long)sendMtopRequest:(id)arg1 responseSuccess:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)buildMtopServerWithRequest:(id)arg1;
- (id)buildMtopResponseWithHttpJsonBody:(id)arg1 methodName:(id)arg2;
- (void)registerClass:(Class)arg1 forResponseWithMethodName:(id)arg2;
- (id)copiedCallbacks;
- (void)removeAllCallbacks;
- (void)removeCallbackWithSno:(long long)arg1;
- (void)removeCallback:(id)arg1;
- (id)callbakcWithSno:(long long)arg1;
- (_Bool)isWaitingCallback:(long long)arg1;
- (void)addCallback:(id)arg1;
- (id)sendRequestOperationQueue;
- (long long)generateUniqueRequestSno;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

