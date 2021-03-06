/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextView.h"

@class NSString, UILabel;

@interface GKTextView : UITextView
{
    UILabel *_placeholderLabel;
}

@property(nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *placeholderText;
- (id)textAttributesForPlaceholder;
- (void)setText:(id)arg1;
- (void)_gkTextViewDidChange;
- (void)updatePlaceholderVisibility;
- (void)dealloc;

@end

