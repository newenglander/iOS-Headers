/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

@class MPAVController, MPMediaQuery;

@interface MSTableViewController : UITableViewController
{
    id <MSCarDisplayServiceProvider> _serviceProvider;
    MPAVController *_player;
    MPMediaQuery *_query;
    BOOL _viewHasAppeared;
    BOOL _alwaysShowNavBar;
}

+ (id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2;
+ (id)addAlbumArtViewFromItem:(id)arg1 toCell:(id)arg2;
@property(nonatomic) BOOL alwaysShowNavBar; // @synthesize alwaysShowNavBar=_alwaysShowNavBar;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(readonly, nonatomic) id <MSCarDisplayServiceProvider> serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(nonatomic) BOOL viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
- (void).cxx_destruct;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)_restartNowPlayingTimer;
- (void)_presentNowPlayingViewController;
- (void)_cancelNowPlayingTimer;
- (void)_playbackStateChanged:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)hasRowsToDisplay;
- (id)dequeueReusableCarDisplayCellForTableView:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

