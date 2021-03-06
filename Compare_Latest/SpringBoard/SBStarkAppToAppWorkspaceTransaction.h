/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBStarkToAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate-Protocol.h"

@class BKSApplicationActivationAssertion, SBApplication, SBUIAnimationController;

@interface SBStarkAppToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SBApplication *_fromApp;
    SBUIAnimationController *_animationController;
    BKSApplicationActivationAssertion *_suspendingAppAssertion;
    BOOL _animatedActivation;
    BOOL _animatedDeactivation;
}

@property(readonly, nonatomic) SBApplication *fromApp; // @synthesize fromApp=_fromApp;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToApp;
- (void)_doCommit;
- (id)_animation;
- (void)_handleAppDidNotChange;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_transactionComplete;
- (void)_interruptWithReason:(int)arg1;
- (BOOL)_canBeInterrupted;
- (void)_endAnimation;
- (BOOL)selfStarkAlertDidDeactivate:(id)arg1;
- (BOOL)selfAlertDidDeactivate:(id)arg1;
- (BOOL)selfApplicationExited:(id)arg1;
- (BOOL)selfApplicationLaunchDidFail:(id)arg1;
- (BOOL)selfApplicationActivated:(id)arg1;
- (BOOL)selfApplicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)selfApplicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (void)_commit;
- (void)_beginAnimation;
- (int)_setupMilestonesFrom:(id)arg1 to:(id)arg2;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5;

@end

