//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBRateService-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol TBRateRequest, TBRateServiceMockProtocol;

@interface TBRateMTOPService : NSObject <TBRateService>
{
    id <TBRateServiceMockProtocol> _rateMTOPServiceMockDelegate;	// 8 = 0x8
    id <TBRateRequest> _lastQueryInteractDatasRequest;	// 16 = 0x10
    NSMutableDictionary *_successCallbacks;	// 24 = 0x18
    NSMutableDictionary *_failureCallbacks;	// 32 = 0x20
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *failureCallbacks; // @synthesize failureCallbacks=_failureCallbacks;
@property(retain, nonatomic) NSMutableDictionary *successCallbacks; // @synthesize successCallbacks=_successCallbacks;
@property(retain, nonatomic) id <TBRateRequest> lastQueryInteractDatasRequest; // @synthesize lastQueryInteractDatasRequest=_lastQueryInteractDatasRequest;
@property(retain, nonatomic) id <TBRateServiceMockProtocol> rateMTOPServiceMockDelegate; // @synthesize rateMTOPServiceMockDelegate=_rateMTOPServiceMockDelegate;
- (void).cxx_destruct;
- (CDUnknownBlockType)getSuccessBlock:(unsigned long long)arg1;
- (CDUnknownBlockType)getFailureBlock:(unsigned long long)arg1;
- (id)getCallbacks:(_Bool)arg1;
- (void)addSuccessCallback:(CDUnknownBlockType)arg1 forAction:(unsigned long long)arg2 type:(id)arg3;
- (void)addFailureCallback:(CDUnknownBlockType)arg1 forAction:(unsigned long long)arg2 type:(id)arg3;
- (CDUnknownBlockType)getSuccessBlock:(unsigned long long)arg1 type:(id)arg2;
- (CDUnknownBlockType)getFailureBlock:(unsigned long long)arg1 type:(id)arg2;
- (void)registerRateCallbacksForAction:(unsigned long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 type:(id)arg4;
- (void)registerRateCallbacksForAction:(unsigned long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)registerRateServiceMockDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
