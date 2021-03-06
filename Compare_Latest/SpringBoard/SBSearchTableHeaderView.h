/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface SBSearchTableHeaderView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSString *_reuseIdentifier;
}

+ (float)heightForContentSizeCategory:(id)arg1;
+ (float)titleBaselineFromBottomForContentSizeCategory:(id)arg1;
+ (id)textColor;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (BOOL)isUserInteractionEnabled;
- (void)dealloc;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end

