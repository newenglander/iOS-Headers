/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPropertyStoreMapping.h>

@interface NSAttributeStoreMapping : NSPropertyStoreMapping
{
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (id)initWithProperty:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)attribute;
- (int)externalType;
- (void)setExternalType:(int)arg1;
- (unsigned int)externalPrecision;
- (void)setExternalPrecision:(unsigned int)arg1;
- (int)externalScale;
- (void)setExternalScale:(int)arg1;
- (id)sqlType;
- (id)columnDefinition;

@end
