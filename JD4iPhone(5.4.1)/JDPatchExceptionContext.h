//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JDPatchExceptionContext : NSObject
{
    _Bool _isDebugMode;
    NSString *_appVersion;
    NSString *_appBuild;
    CDUnknownBlockType _classNameBlock;
    CDUnknownBlockType _signBlock;
    CDUnknownBlockType _specialParamsBlock;
    CDUnknownBlockType _caugthBlock;
    NSString *_loginCookie;
    NSString *_deviceID;
    unsigned long long _maxUpdateCount;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long maxUpdateCount; // @synthesize maxUpdateCount=_maxUpdateCount;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *loginCookie; // @synthesize loginCookie=_loginCookie;
@property(copy, nonatomic) CDUnknownBlockType caugthBlock; // @synthesize caugthBlock=_caugthBlock;
@property(copy, nonatomic) CDUnknownBlockType specialParamsBlock; // @synthesize specialParamsBlock=_specialParamsBlock;
@property(copy, nonatomic) CDUnknownBlockType signBlock; // @synthesize signBlock=_signBlock;
@property(copy, nonatomic) CDUnknownBlockType classNameBlock; // @synthesize classNameBlock=_classNameBlock;
@property(retain, nonatomic) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool isDebugMode; // @synthesize isDebugMode=_isDebugMode;
- (void)dealloc;

@end

