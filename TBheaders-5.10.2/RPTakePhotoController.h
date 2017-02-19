//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "RPPreviewPhotoControllerDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSArray, NSMutableArray, NSString, RPCamFlashSwitchView, UIButton, UIImageView, UIView;
@protocol RPTakePhotoControllerDelegate;

@interface RPTakePhotoController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, RPPreviewPhotoControllerDelegate>
{
    AVCaptureSession *_session;	// 8 = 0x8
    AVCaptureDeviceInput *_input;	// 16 = 0x10
    AVCaptureVideoPreviewLayer *_previewLayer;	// 24 = 0x18
    AVCaptureStillImageOutput *_stillImageOutput;	// 32 = 0x20
    AVCaptureVideoDataOutput *_videoDataOutput;	// 40 = 0x28
    _Bool isFrontCamera;	// 48 = 0x30
    double bottomViewHeight;	// 56 = 0x38
    double viewRatio;	// 64 = 0x40
    _Bool beOpen;	// 72 = 0x48
    NSArray *_imageUrlArray;	// 80 = 0x50
    NSArray *_takePhotoTypeArray;	// 88 = 0x58
    id <RPTakePhotoControllerDelegate> _delegate;	// 96 = 0x60
    UIView *_waitView;	// 104 = 0x68
    UIView *_videoPreviewView;	// 112 = 0x70
    UIView *_topView;	// 120 = 0x78
    UIView *_cameraView;	// 128 = 0x80
    UIImageView *_cameraImageView;	// 136 = 0x88
    RPCamFlashSwitchView *_flashView;	// 144 = 0x90
    long long _takePhotoType;	// 152 = 0x98
    long long _index;	// 160 = 0xa0
    long long _urlIndex;	// 168 = 0xa8
    NSMutableArray *_imageFileArray;	// 176 = 0xb0
    UIButton *_closeBtn;	// 184 = 0xb8
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) NSMutableArray *imageFileArray; // @synthesize imageFileArray=_imageFileArray;
@property(nonatomic) long long urlIndex; // @synthesize urlIndex=_urlIndex;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long takePhotoType; // @synthesize takePhotoType=_takePhotoType;
@property(retain, nonatomic) RPCamFlashSwitchView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) UIImageView *cameraImageView; // @synthesize cameraImageView=_cameraImageView;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) UIView *waitView; // @synthesize waitView=_waitView;
@property(nonatomic) __weak id <RPTakePhotoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *takePhotoTypeArray; // @synthesize takePhotoTypeArray=_takePhotoTypeArray;
@property(retain, nonatomic) NSArray *imageUrlArray; // @synthesize imageUrlArray=_imageUrlArray;
- (void).cxx_destruct;
- (void)exitController:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)saveImageToSandBox:(id)arg1;
- (id)getImageLocalPath:(id)arg1;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (id)cameraWithPosition:(long long)arg1;
- (void)takePicture;
- (_Bool)checkCamera;
- (void)switchFlash;
- (void)releaseCamera;
- (void)changeCamera;
- (void)initCamera:(_Bool)arg1;
- (void)didAcceptPhoto:(id)arg1;
- (void)closeBtnClick:(id)arg1;
- (void)changeGestureImage:(id)arg1;
- (void)changeCameraAction:(id)arg1;
- (void)doCancel:(id)arg1;
- (void)doCamera:(id)arg1;
- (void)showFailWarning;
- (void)setupViewWithPhotoType:(long long)arg1;
- (void)loadCameraViewWithPhotoType:(long long)arg1;
- (void)loadBottomViewWithPhotoType:(long long)arg1;
- (void)loadTopViewWithPhotoType:(long long)arg1;
- (void)hideWaitingView;
- (void)showWaitingView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)loadVideoPreview;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUpParmas;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackgroundNotification;
- (void)viewDidLoad;
- (void)initTakePhotoType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
