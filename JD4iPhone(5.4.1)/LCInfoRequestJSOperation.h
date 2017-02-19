//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class LCInfoHTTPItem;

@interface LCInfoRequestJSOperation : NSOperation
{
    _Bool _isFinished;
    int _retryIndex;
    LCInfoHTTPItem *_infoHTTPItem;
}

@property(retain, nonatomic) LCInfoHTTPItem *infoHTTPItem; // @synthesize infoHTTPItem=_infoHTTPItem;
- (void).cxx_destruct;
- (id)covertToResponseDictWithItem:(id)arg1;
- (id)convertToRequestDictWithItem:(id)arg1;
- (id)jsParseHTTPResponse:(id)arg1;
- (void)parseJsResponse:(id)arg1;
- (void)parseJsRequest:(id)arg1;
- (void)requestHTTPDataFail:(id)arg1;
- (void)requestHTTPDataSuccess:(id)arg1;
- (void)loopRequestInfoViaHTTP;
- (void)requestInfoViaHTTP;
- (void)requestInfoViaJavascript;
- (void)main;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end
