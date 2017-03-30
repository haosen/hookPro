//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMAsset, MMImagePickerController, NSArray, NSData, NSDictionary, SightDraft, UINavigationController;

@protocol MMImagePickerControllerDelegate <NSObject>
- (void)MMImagePickerControllerDidCancel:(MMImagePickerController *)arg1;
- (void)MMImagePickerController:(MMImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSArray *)arg2;

@optional
- (void)MMImagePickerController:(MMImagePickerController *)arg1 didFinishPickingGifFileWithData:(NSData *)arg2;
- (void)MMVideoPickerControllerDidCancel:(UINavigationController *)arg1;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingSightWithAsset:(MMAsset *)arg2;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingSightWithInfo:(SightDraft *)arg2;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
@end
