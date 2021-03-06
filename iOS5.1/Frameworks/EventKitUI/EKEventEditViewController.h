/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class EKEvent, EKEventEditor, EKEventStore, NSString;

@interface EKEventEditViewController : UINavigationController
{
    EKEventStore *_store;
    EKEvent *_event;
    id <EKEventEditViewDelegate> _editViewDelegate;
    NSString *_eventId;
    BOOL _showsTimeZone;
    EKEventEditor *_editor;
}

+ (void)setDefaultDatesForEvent:(id)arg1;
@property(retain, nonatomic) EKEventEditor *editor; // @synthesize editor=_editor;
@property(nonatomic) BOOL showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) id <EKEventEditViewDelegate> editViewDelegate; // @synthesize editViewDelegate=_editViewDelegate;
- (void)handleTapOutside;
- (void)setShowAttachments:(BOOL)arg1;
- (BOOL)showAttachments;
- (void)setScrollToNotes:(BOOL)arg1;
- (BOOL)scrollToNotes;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_storeChanged:(id)arg1;
- (void)eventEditor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (void)eventEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (void)refreshStartAndEndDates;
- (struct CGSize)contentSizeForViewInPopover;
@property(retain, nonatomic) EKEvent *event;
@property(retain, nonatomic) EKEventStore *eventStore;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithEvent:(id)arg1 store:(id)arg2;

@end

