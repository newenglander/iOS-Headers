/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIPageViewController.h"

#import "UIPageViewControllerDataSource-Protocol.h"

@class MPMediaQuery, NSMutableArray, UIButton;

@interface MSGeniusMixesViewController : UIPageViewController <UIPageViewControllerDataSource>
{
    MPMediaQuery *_query;
    NSMutableArray *_viewControllers;
    UIButton *_pageRightButton;
    UIButton *_pageLeftButton;
}

- (void).cxx_destruct;
- (void)updatePageArrows;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (void)knobPressed:(id)arg1;
- (void)_pageLeftButtonTouchUpInside:(id)arg1;
- (void)_pageRightButtonTouchUpInside:(id)arg1;
- (int)presentationIndexForPageViewController:(id)arg1;
- (int)presentationCountForPageViewController:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;

@end

