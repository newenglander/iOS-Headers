/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLImageElement : DOMHTMLElement
{
}

@property(readonly) NSURL *absoluteImageURL;
@property(readonly) NSString *altDisplayString;
@property(readonly) int y;
@property(readonly) int x;
@property(readonly) int naturalWidth;
@property(readonly) int naturalHeight;
@property(copy) NSString *lowsrc;
@property(readonly) BOOL complete;
@property int width;
@property int vspace;
@property(copy) NSString *useMap;
@property(copy) NSString *src;
@property(copy) NSString *longDesc;
@property BOOL isMap;
@property int hspace;
@property int height;
- (void)setCrossOrigin:(id)arg1;
- (id)crossOrigin;
@property(copy) NSString *border;
@property(copy) NSString *alt;
@property(copy) NSString *align;
@property(copy) NSString *name;
- (id)mimeType;
- (id)dataRepresentation:(BOOL)arg1;

@end
