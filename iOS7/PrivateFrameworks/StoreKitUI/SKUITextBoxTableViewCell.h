/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUITableViewCell.h>

@class SKUITextBoxView;

@interface SKUITextBoxTableViewCell : SKUITableViewCell
{
    SKUITextBoxView *_textBoxView;
    struct UIEdgeInsets _textBoxInsets;
}

@property(nonatomic) struct UIEdgeInsets textBoxInsets; // @synthesize textBoxInsets=_textBoxInsets;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView; // @synthesize textBoxView=_textBoxView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

