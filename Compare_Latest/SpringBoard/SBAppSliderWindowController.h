/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBUIActiveOrientationObserver-Protocol.h"

@class SBAppSliderWindow, UIViewController, UIWindow;

@interface SBAppSliderWindowController : NSObject <SBUIActiveOrientationObserver>
{
    SBAppSliderWindow *_window;
    UIViewController *_rootViewController;
    int _trueWindowOrientation;
    int _overrideWindowOrientation;
}

- (void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1;
- (void)_rotateIfNecessaryTo:(int)arg1 withDuration:(double)arg2 forOverride:(BOOL)arg3;
- (void)_setTrueWindowOrientation:(int)arg1;
- (void)_setOverrideWindowOrientation:(int)arg1;
- (BOOL)_shouldAllowRotation:(BOOL)arg1;
- (BOOL)_hasOrientationOverride;
- (void)clearOverrideWindowOrientation;
- (void)overrideWindowOrientation:(int)arg1;
- (int)windowOrientationWithoutOverrides;
- (int)windowOrientation;
- (void)_windowDidBecomeVisible:(id)arg1;
@property(readonly, nonatomic) UIWindow *window;
@property(retain, nonatomic) UIViewController *rootViewController;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

@end

