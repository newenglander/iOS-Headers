/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class UIActivityIndicatorView, UIButton, UILabel, UIStatusBar, _UIBackdropView;

@interface ADVideoAdOverlayView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _fullscreen;
    BOOL _titleActivityIndicatorVisible;
    BOOL _barsVisible;
    BOOL _skipButtonCountingDown;
    id <ADVideoAdOverlayViewDelegate> _delegate;
    _UIBackdropView *_topBarView;
    UIStatusBar *_statusBar;
    UIButton *_doneButton;
    UIButton *_moreButton;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_titleActivityIndicator;
    _UIBackdropView *_bottomBarView;
    UIButton *_skipButton;
    _UIBackdropView *_brandingView;
}

@property(nonatomic) _UIBackdropView *brandingView; // @synthesize brandingView=_brandingView;
@property(nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) BOOL skipButtonCountingDown; // @synthesize skipButtonCountingDown=_skipButtonCountingDown;
@property(nonatomic) _UIBackdropView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(nonatomic) UIActivityIndicatorView *titleActivityIndicator; // @synthesize titleActivityIndicator=_titleActivityIndicator;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(nonatomic) _UIBackdropView *topBarView; // @synthesize topBarView=_topBarView;
@property(nonatomic) BOOL barsVisible; // @synthesize barsVisible=_barsVisible;
@property(nonatomic) BOOL titleActivityIndicatorVisible; // @synthesize titleActivityIndicatorVisible=_titleActivityIndicatorVisible;
@property(nonatomic) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) id <ADVideoAdOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)accessibilityPerformEscape;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_singleTapGestureRecognized:(id)arg1;
- (void)_skipButtonTapped:(id)arg1;
- (void)_moreButtonTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (BOOL)isSkipButtonCountingDownOrEnabled;
- (void)disableSkipButton;
- (void)startEnablingSkipButtonWithCountdownDuration:(double)arg1 completionHandler:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

