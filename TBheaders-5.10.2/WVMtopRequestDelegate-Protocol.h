//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WVMtopRequest;

@protocol WVMtopRequestDelegate <NSObject>
- (void)requestFailed:(WVMtopRequest *)arg1;
- (void)requestFinished:(WVMtopRequest *)arg1;
- (void)requestStarted:(WVMtopRequest *)arg1;
@end
