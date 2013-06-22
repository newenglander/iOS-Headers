/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol _UIWebRotationDelegate
- (BOOL)considerHeightOfRectOfInterestForRotation;
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;
- (float)heightToKeepVisible;
- (float)minimumVerticalContentOffset;
- (struct CGRect)rectOfInterestForRotation;
- (float)minimumScaleForSize:(struct CGSize)arg1;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(CDStruct_869f9c67)arg2;
- (CDStruct_869f9c67)scalesForContainerSize:(struct CGSize)arg1;
- (float)currentDocumentScale;
- (float)zoomedDocumentScale;
- (id)contentView;
- (id)enclosingScrollView;

@optional
- (struct CGSize)contentSizeForScrollView:(id)arg1;
- (float)scaleForProposedNewScale:(float)arg1 andOldScale:(float)arg2;
@end
