/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBLockScreenSlideUpController.h"

@class NSDate, NSObject<OS_dispatch_queue>, PUApplicationCameraViewController, SBPasscodeLockDisableAssertion, UIImageView, UIView;

@interface SBLockScreenCameraController : SBLockScreenSlideUpController
{
    UIView *_cameraClippingView;
    UIImageView *_cameraDefaultImageView;
    UIView *_cameraBackgroundView;
    UIView *_cameraContainerView;
    UIView *_cameraFakeStatusBar;
    PUApplicationCameraViewController *_cameraViewController;
    BOOL _animatingCameraIn;
    BOOL _cancelCameraAnimation;
    BOOL _cameraModeActive;
    BOOL _cameraVisible;
    NSDate *_lastCameraSessionID;
    BOOL _exitedCameraForAlert;
    BOOL _exitedCameraToHomescreen;
    BOOL _restartCameraAfterCall;
    BOOL _disableGracePeriodForCamera;
    SBPasscodeLockDisableAssertion *_disableGracePeriodForCameraAssertion;
    NSObject<OS_dispatch_queue> *_prewarmQueue;
    id _savedWindowDelegate;
    BOOL _prewarming;
}

@property(readonly, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraClippingView;
- (float)_grabberInset;
- (BOOL)isCameraVisible;
- (BOOL)isCameraActive;
- (void)abortDynamicAnimationForScreenOff;
- (void)tearDownCameraUIImmediately;
- (void)_restoreWindowOrientationAndDelegate;
- (void)_setCameraAsWindowDelegate;
- (void)_dismissCameraAnimated:(BOOL)arg1;
- (void)_tearDownCameraPreview;
- (void)_removeCameraPreviewViews;
- (void)_activateCameraAfterCall;
- (void)prepareToReturnToCameraFromCall;
- (BOOL)shouldReturnToCameraAfterCall;
- (void)cancelReturnToCameraAfterCall;
- (void)noteStartingPhoneCallWhileUILocked;
- (void)presentCameraAnimated:(BOOL)arg1;
- (void)activateCamera;
- (void)setDisableGracePeriodForCamera:(BOOL)arg1;
- (void)_hideLockScreenView;
- (void)_activateCameraWithNewSessionID:(BOOL)arg1 afterCall:(BOOL)arg2;
- (void)_createCameraViewControllerWithOldSessionID;
- (void)_createCameraViewControllerWithNewSessionID;
- (void)_createCameraViewControllerWithNewSessionID:(BOOL)arg1 andStartPreview:(BOOL)arg2;
- (void)finalizeGesture;
- (void)translateSlidingViewByY:(float)arg1;
- (void)_setupCameraSlideDownAnimation;
- (void)cleanupFromGesture;
- (void)prepareForSlideUpAnimation;
- (void)_removeLockScreenViewFakeStatusBar;
- (void)_cancelCameraPrewarm;
- (void)_prewarmCamera;
- (BOOL)handleMenuButtonTap;
- (void)deactivate;
- (void)activate;
- (void)setInScreenOffMode:(BOOL)arg1;
- (BOOL)wantsStatusBar;
- (void)setGrabberOnLockScreen:(id)arg1;
- (id)grabberView;
- (void)setLockScreenView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

