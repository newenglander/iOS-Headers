/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIPopoverLayoutInfo.h>

@interface _UIModernPopoverLayoutInfo : _UIPopoverLayoutInfo
{
}

- (void)_updateOutputs;
- (struct CGRect)_horizontallyAdjustedRectForAboveBelowPosition:(struct CGRect)arg1 presentationRect:(struct CGRect)arg2;
- (struct CGRect)_verticallyAdjustedRectForLeftRightPosition:(struct CGRect)arg1 presentationRect:(struct CGRect)arg2;
- (struct CGSize)_popoverViewSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned int)arg2;
- (float)arrowHeight;
- (void)setArrowHeight:(float)arg1;
- (id)init;

@end

