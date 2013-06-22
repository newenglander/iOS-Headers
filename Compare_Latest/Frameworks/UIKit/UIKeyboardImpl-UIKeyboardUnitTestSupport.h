/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardImpl.h>

@interface UIKeyboardImpl (UIKeyboardUnitTestSupport)
+ (void)_clearHardwareKeyboardMinimizationPreference;
- (BOOL)isAutoDeleteActive;
- (void)testAutocorrectionPromptWithCorrection:(id)arg1;
- (int)textInputChangingCount;
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;
- (void)updateFromTextInputTraits;
- (BOOL)hasAutoRepeat;
- (void)_setShiftLockedEnabled:(BOOL)arg1;
- (void)_setInputManager:(id)arg1;
- (id)_layout;

// Remaining properties
@property(retain, nonatomic) id changedDelegate; // @dynamic changedDelegate;
@end
