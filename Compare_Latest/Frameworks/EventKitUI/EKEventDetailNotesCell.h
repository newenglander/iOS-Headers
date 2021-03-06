/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailCell.h>

@class UIFont, UILabel, UITextView;

@interface EKEventDetailNotesCell : EKEventDetailCell
{
    UILabel *_notesTitleView;
    UITextView *_notesView;
    BOOL _isTruncatingNotes;
    UIFont *_font;
}

@property(readonly, nonatomic) BOOL isTruncatingNotes; // @synthesize isTruncatingNotes=_isTruncatingNotes;
@property(retain, nonatomic) UIFont *_font; // @synthesize _font;
- (void).cxx_destruct;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (struct CGSize)_truncatedNotesViewSize:(float)arg1;
- (id)_notesView;
- (id)_notesTitleView;
- (BOOL)update;
- (id)init;

@end

