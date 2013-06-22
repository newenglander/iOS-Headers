/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

@interface SBWindowManager : NSObject
{
    NSMapTable *_windowStateMap;
    NSMapTable *_hidingContextMap;
    struct SBWindowLevelRange_struct _hideRange;
}

+ (void)start;
+ (id)sharedInstance;
- (id)dumpKnownWindows;
- (id)dumpHidingState;
- (void)_releaseWindow:(id)arg1;
- (BOOL)_isHidingWindowLevel:(float)arg1;
- (void)_captureWindow:(id)arg1;
- (void)_takeNoteOfWindow:(id)arg1 onScreen:(id)arg2;
- (void)_adjustWindowsForActiveHideRange;
- (void)_recomputeHideRangeAndAdjustWindows;
- (BOOL)_isHidingWindows;
- (void)stopHidingWindowsForContext:(id)arg1;
- (void)startHidingWindowsExclusivelyFromLevel:(float)arg1 toLevel:(float)arg2 forContext:(id)arg3 reason:(id)arg4;
- (void)setAlpha:(float)arg1 forWindow:(id)arg2;
- (id)init;

@end
