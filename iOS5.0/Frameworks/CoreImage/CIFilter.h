/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying>
{
    void *_priv[8];
}

+ (id)filterNamesInCategories:(id)arg1;
+ (id)filterNamesInCategory:(id)arg1;
+ (id)filterWithName:(id)arg1 keysAndValues:(id)arg2;
+ (id)filterWithName:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyFilterWithZone:(struct _NSZone *)arg1;
- (void)_copyAttributesTo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setDefaults;
- (id)attributes;
@property(readonly, nonatomic) CIImage *outputImage; // @dynamic outputImage;
- (id)outputKeys;
- (id)inputKeys;
- (void)dealloc;
- (id)name;
- (unsigned int)hash;
- (BOOL)_isIdentity;
- (BOOL)isEqual:(id)arg1;

@end

