//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDPacketReceiver.h"

@class MDBaseMessage, MFDispatchSource, MFIMJPacket;

@interface MDMessagePacketReceiver : MDPacketReceiver
{
    MDBaseMessage *_willSoundLastMsg;
    MFIMJPacket *_lastSingleMsgPacket;
    MFIMJPacket *_lastGroupMsgPacket;
    MFIMJPacket *_lastMultiMsgPacket;
    MFIMJPacket *_lastShopMsgPacket;
    MFIMJPacket *_lastRoomMsgPacket;
    MFDispatchSource *_dispatchSource;
}

@property(retain, nonatomic) MFDispatchSource *dispatchSource; // @synthesize dispatchSource=_dispatchSource;
@property(retain, nonatomic) MFIMJPacket *lastRoomMsgPacket; // @synthesize lastRoomMsgPacket=_lastRoomMsgPacket;
@property(retain, nonatomic) MFIMJPacket *lastShopMsgPacket; // @synthesize lastShopMsgPacket=_lastShopMsgPacket;
@property(retain, nonatomic) MFIMJPacket *lastMultiMsgPacket; // @synthesize lastMultiMsgPacket=_lastMultiMsgPacket;
@property(retain, nonatomic) MFIMJPacket *lastGroupMsgPacket; // @synthesize lastGroupMsgPacket=_lastGroupMsgPacket;
@property(retain, nonatomic) MFIMJPacket *lastSingleMsgPacket; // @synthesize lastSingleMsgPacket=_lastSingleMsgPacket;
@property(retain, nonatomic) MDBaseMessage *willSoundLastMsg; // @synthesize willSoundLastMsg=_willSoundLastMsg;
- (void)handleCloudMessage:(id)arg1;
- (void)refreshData;
- (void)didRecvGuestMsgPacket:(id)arg1;
- (void)notifyGroupMsgReceivedDelegateWithPacket:(id)arg1;
- (void)notifyMsgReceivedDelegateWithPacket:(id)arg1;
- (void)didRecvCommonNoticeV2Packet:(id)arg1;
- (void)didRecvMomentCommentMsg:(id)arg1;
- (void)didRecvMomentLikeMsg:(id)arg1;
- (void)didRecvMomentMsg:(id)arg1;
- (void)didRecvCommonNoticePacket:(id)arg1;
- (void)didRecvLikeNoticePacket:(id)arg1;
- (void)didRecvNotificationCenterMsgPacket:(id)arg1;
- (void)didRecvShopMsgPacket:(id)arg1;
- (void)didRecvMultiMsgPacket:(id)arg1;
- (void)didRecvRoomMsgPacket:(id)arg1;
- (void)didRecvGroupMsgPacket:(id)arg1;
- (void)didRecvShopMsgReadPacket:(id)arg1;
- (void)didRecvMsgReadPacket:(id)arg1;
- (void)didRecvTestMsg;
- (void)didRecvSingleMsgPacket:(id)arg1;
- (id)shopMsgFromPacket:(id)arg1;
- (id)roomMsgFromPacket:(id)arg1;
- (id)multiMsgFromPacket:(id)arg1;
- (id)groupMsgFromPacket:(id)arg1;
- (id)singleMsgFromPacket:(id)arg1;
- (_Bool)handleMsg:(id)arg1;
- (void)addSourceSemphore;
- (void)dealloc;
- (id)initWithPacketHandler:(id)arg1;
- (void)messageAudioDownloadFailedWithMsgid:(id)arg1 targetid:(id)arg2 fileType:(int)arg3;
- (void)messageAudioDownloadFinishWithMsgid:(id)arg1 targetid:(id)arg2 fileType:(int)arg3;
- (void)downloadAudio:(id)arg1;
- (void)needDownloadAudio:(id)arg1;
- (void)resumeMusicIfNeeded;
- (void)stopMusicIfNeeded;
- (void)playSoundAndVibrate;
- (void)playSoundAndVibrateDelay:(id)arg1;
- (void)playSoundAndVibrateDelayInGuestMode:(id)arg1;
- (void)playReceiveSound:(id)arg1;

@end
