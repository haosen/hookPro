//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSRecursiveLock, NSString, NSThread;

@interface ACDSUpdatelogOperation : NSOperation
{
    _Bool _isKeepRunning;	// 24 = 0x18
    NSString *_userID;	// 32 = 0x20
    NSString *_ds;	// 40 = 0x28
    long long _timeout;	// 48 = 0x30
    NSThread *_currentThread;	// 56 = 0x38
    NSMutableArray *_toBeProcessQueue;	// 64 = 0x40
    NSRecursiveLock *_queueLock;	// 72 = 0x48
}

+ (void)utMonitePerformByCost:(id)arg1;
+ (void)utMonitorFailed:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3 isBroadcast:(_Bool)arg4;
+ (void)utMonitorSuccess:(id)arg1 isBroadcast:(_Bool)arg2;
+ (id)costFromItem:(id)arg1;
@property(retain, nonatomic) NSRecursiveLock *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSMutableArray *toBeProcessQueue; // @synthesize toBeProcessQueue=_toBeProcessQueue;
@property(retain, nonatomic) NSThread *currentThread; // @synthesize currentThread=_currentThread;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool isKeepRunning; // @synthesize isKeepRunning=_isKeepRunning;
@property(retain, nonatomic) NSString *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)taskDidEnd;
- (void)taskDidStart;
- (void)dealloc;
- (void)finishOperation;
- (void)processItem:(id)arg1;
- (void)afterReadFromDB:(id)arg1;
- (void)readFromDB:(CDUnknownBlockType)arg1;
- (void)loopProcess;
- (id)popSyncItemFromQueue;
- (void)addHighPrioItem:(id)arg1;
- (void)cancel;
- (void)finish;
- (_Bool)checkIfRuningFreshIt;
- (void)main;
- (id)init;
- (id)init:(id)arg1 withUserId:(id)arg2;

@end
