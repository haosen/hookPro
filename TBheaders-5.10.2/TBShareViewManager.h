//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBShareView;
@protocol TBShareViewDelegate;

@interface TBShareViewManager : NSObject
{
    TBShareView *_shareView;	// 8 = 0x8
    id <TBShareViewDelegate> _delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <TBShareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBShareView *shareView; // @synthesize shareView=_shareView;
- (void).cxx_destruct;
- (void)showView;
- (void)update;
- (id)init;

@end
