//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBHTTPRequest : NSObject
{
}

+ (void)cancelWithIdentifier:(id)arg1;
+ (id)requestWithFunctionID:(id)arg1 params:(id)arg2 showDialog:(_Bool)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5 cancel:(CDUnknownBlockType)arg6;
+ (id)requestWithFunctionID:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4 cancel:(CDUnknownBlockType)arg5;
+ (id)requestWithSetup:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;
+ (_Bool)checkNetworkAvailability;

@end
