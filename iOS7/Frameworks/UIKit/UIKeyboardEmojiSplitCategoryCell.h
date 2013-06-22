/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell
{
    UIImageView *_symbol;
    UILabel *_title;
}

@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *symbol; // @synthesize symbol=_symbol;
- (void)setTitleText:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)titleFont;
- (id)symbolFont;

@end
