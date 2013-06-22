/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView, UIView<SBUIBannerItemView>;

@interface SBBannerAndShadowView : UIView
{
    UIView<SBUIBannerItemView> *_banner;
    UIImageView *_shadow[5];
    struct CGRect _shadowFrame[5];
    struct CGSize _bannerSize;
    struct CGPoint _bannerOrigin;
    float _sideWidth;
    float _bottomHeight;
    BOOL _shadowsInPortraitWindow;
    UIView *_rollerContainer;
    UIImageView *_roller;
}

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clearRoller;
- (void)setRollerProgress:(float)arg1;
- (void)prepareRoller;
- (void)setShadowAlpha:(float)arg1;
- (void)pullShadowsBack;
- (void)moveShadowsToPortraitWindow:(id)arg1 fromOrientation:(int)arg2;
- (void)_layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_frameForBannerFrame:(struct CGRect)arg1;
- (BOOL)_showsSideShadows;
- (void)setBannerFrame:(struct CGRect)arg1;
- (void)replaceBannerWithBanner:(id)arg1;
- (id)banner;
- (void)dealloc;
- (id)initWithBanner:(id)arg1;

@end
