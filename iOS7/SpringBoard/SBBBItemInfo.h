/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SBBBItemInfo : NSObject
{
    id _representedObject;
}

+ (id)infoWithRepresentedObject:(id)arg1;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)invalidateCachedLayoutData;
- (float)heightForReusableViewInTableView:(id)arg1;
- (void)populateReusableView:(id)arg1;
- (Class)reusableViewClass;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithRepresentedObject:(id)arg1;

@end

