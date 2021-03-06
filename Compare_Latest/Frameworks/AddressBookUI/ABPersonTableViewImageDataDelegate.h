/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABPersonImageDataDelegate-Protocol.h"

@class ABPersonTableViewDataSource, ABUIPerson, NSMutableDictionary;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate>
{
    NSMutableDictionary *_currentImageData;
    ABUIPerson *_personForImageData;
    BOOL _hasImageChanges;
    BOOL _didChangePreferredPersonForImage;
    ABPersonTableViewDataSource *_dataSource;
}

@property(nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (BOOL)didChangePreferredPersonForImage;
- (id)personForImageDataExcludingPeople:(id)arg1;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect *)arg2 forPerson:(id)arg3 isRemoved:(char *)arg4;
- (void)updateRecordImages;
- (void)resetImageData;
- (BOOL)hasImageChanges;
- (void)setCurrentImageData:(id)arg1;
- (id)currentImageData;
- (void)reloadImageData;
- (void)imageWillSave;
- (void)refreshImageData;
- (void)setPersonForImageData:(id)arg1;
- (id)personForImageData;
- (void)removeImageDataForPerson:(id)arg1;
- (void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(struct CGRect)arg3 forPerson:(id)arg4;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect *)arg2 forPerson:(id)arg3;
- (BOOL)hasImageDataForPerson:(id)arg1;
- (id)writablePeople;
- (id)people;
- (void)markImagesWith:(id)arg1 forPerson:(id)arg2;
- (void)dealloc;

@end

