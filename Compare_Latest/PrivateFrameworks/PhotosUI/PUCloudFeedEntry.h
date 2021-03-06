/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableOrderedSet;

@interface PUCloudFeedEntry : NSObject
{
    int _entryType;
    NSDate *_entryDate;
    id <PLCloudSharedAlbumProtocol> _entryAlbum;
    NSMutableOrderedSet *_entryAssets;
}

@property(retain, nonatomic) NSMutableOrderedSet *entryAssets; // @synthesize entryAssets=_entryAssets;
@property(retain, nonatomic) id <PLCloudSharedAlbumProtocol> entryAlbum; // @synthesize entryAlbum=_entryAlbum;
@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
@property(nonatomic) int entryType; // @synthesize entryType=_entryType;
- (void).cxx_destruct;

@end

