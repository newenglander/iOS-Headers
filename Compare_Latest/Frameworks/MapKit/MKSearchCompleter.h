/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface MKSearchCompleter : NSObject
{
    NSString *_fragment;
    CDStruct_feeb6407 _boundingRegion;
    id <MKSearchCompleterDelegate> _delegate;
    id _context;
    NSString *_identifier;
}

+ (id)alloc;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) id <MKSearchCompleterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_90e2a262 boundingRegion; // @synthesize boundingRegion=_boundingRegion;
@property(copy, nonatomic) NSString *fragment; // @synthesize fragment=_fragment;
@property(readonly, nonatomic) NSArray *results;
- (void)retry;
- (void)cancel;
- (BOOL)isSearching;
- (BOOL)resultsAreCurrent;
- (void)dealloc;
- (id)init;

@end

