//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VOIPSyncMgr.h"

#import "PBMessageObserverDelegate.h"

@interface VOIPSyncMgr (RecvResponse) <PBMessageObserverDelegate>
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)retriveKeyFrom:(id)arg1 StatusKey:(unsigned int *)arg2 RelayKey:(unsigned int *)arg3 ConnectingKey:(unsigned int *)arg4;
- (_Bool)isSyncKeyNew:(id)arg1;
- (void)check_next_sync;
@end
