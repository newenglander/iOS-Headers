/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "_SBUIWidgetHost-Protocol.h"
#import "_SBUIWidgetViewController_Remote_IPC-Protocol.h"

@class NSString;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost, _SBUIWidgetViewController_Remote_IPC>
{
    int _widgetIdiom;
    NSString *_widgetidentifier;
    id <_SBUIWidgetHost> _widgetHost;
    NSString *_widgetIdentifier;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(nonatomic) id <_SBUIWidgetHost> widgetHost; // @synthesize widgetHost=_widgetHost;
@property(copy, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
@property(nonatomic) int widgetIdiom; // @synthesize widgetIdiom=_widgetIdiom;
- (void)__hostDidDismiss;
- (void)__hostWillDismiss;
- (void)__hostDidPresent;
- (void)__hostWillPresent;
- (void)__setWidgetIdiom:(int)arg1;
- (void)__setWidgetIdentifier:(id)arg1;
- (void)__requestPreferredViewSizeWithReplyHandler:(id)arg1;
- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(id)arg1;
- (void)requestPresentationOfViewController:(id)arg1 presentationStyle:(int)arg2 context:(id)arg3 completion:(id)arg4;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@property(readonly, nonatomic) struct CGSize preferredViewSize;
- (void)dealloc;

@end
