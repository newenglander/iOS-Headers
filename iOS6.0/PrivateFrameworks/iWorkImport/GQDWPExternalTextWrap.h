/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable>
{
    BOOL mFloatingWrapEnabled;
    BOOL mInlineWrapEnabled;
    float mMargin;
    float mAlphaThreshold;
    int mWrapStyle;
    int mWrapDirection;
    int mFloatingWrapType;
    int mAttachmentWrapType;
}

+ (const struct StateSpec *)stateForReading;
- (int)attachmentWrapType;
- (int)floatingWrapType;
- (int)wrapDirection;
- (int)wrapStyle;
- (float)alphaThreshold;
- (float)margin;
- (BOOL)inlineWrapEnabled;
- (BOOL)floatingWrapEnabled;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

