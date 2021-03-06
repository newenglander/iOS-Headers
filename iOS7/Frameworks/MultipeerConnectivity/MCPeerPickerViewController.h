/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MCNearbyServiceBrowserDelegate-Protocol.h"
#import "MCSessionDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MCNearbyServiceBrowser, MCPeerID, MCSession, NSMutableArray, UIActivityIndicatorView, UIBarButtonItem, UILabel, UITableView;

@interface MCPeerPickerViewController : UIViewController <MCSessionDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, MCNearbyServiceBrowserDelegate>
{
    id <MCPeerPickerViewControllerDelegate> _delegate;
    MCNearbyServiceBrowser *_browser;
    MCSession *_session;
    MCPeerID *_myPeerID;
    UITableView *_tableView;
    NSMutableArray *_nearbyPeers;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_searchingPeersLabel;
    UIBarButtonItem *_connectButton;
    UIBarButtonItem *_cancelButton;
    int _responseCount;
    unsigned int _minimumNumberOfPeers;
    unsigned int _maximumNumberOfPeers;
}

@property(nonatomic) unsigned int maximumNumberOfPeers; // @synthesize maximumNumberOfPeers=_maximumNumberOfPeers;
@property(nonatomic) unsigned int minimumNumberOfPeers; // @synthesize minimumNumberOfPeers=_minimumNumberOfPeers;
@property int responseCount; // @synthesize responseCount=_responseCount;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *connectButton; // @synthesize connectButton=_connectButton;
@property(retain, nonatomic) UILabel *searchingPeersLabel; // @synthesize searchingPeersLabel=_searchingPeersLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSMutableArray *nearbyPeers; // @synthesize nearbyPeers=_nearbyPeers;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MCNearbyServiceBrowser *browser; // @synthesize browser=_browser;
@property(nonatomic) id <MCPeerPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didReceiveResourceAtURL:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)allPeersRespondedForSession:(id)arg1;
- (void)cancelTapped:(id)arg1;
- (void)connectTapped:(id)arg1;
- (void)peer:(id)arg1 changedStateTo:(id)arg2;
- (void)peerWithDictionary:(id)arg1 changedStateTo:(id)arg2;
- (id)dictionaryForPeer:(id)arg1;
- (void)updateConnectButton;
- (void)setMinimumNumberOfPeers:(unsigned int)arg1 maximumNumberOfPeers:(unsigned int)arg2;
- (void)presentConnectingView;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithBrowser:(id)arg1 session:(id)arg2;

@end

