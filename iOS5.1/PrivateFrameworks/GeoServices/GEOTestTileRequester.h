/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOTileRequester.h>

@class NSTimer;

@interface GEOTestTileRequester : GEOTileRequester
{
    NSTimer *_timer;
}

+ (unsigned char)tileProviderIdentifier;
- (void)dealloc;
- (void)_sendResults:(id)arg1;
- (void)start;

@end

