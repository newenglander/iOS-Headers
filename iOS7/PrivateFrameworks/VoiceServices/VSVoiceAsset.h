/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface VSVoiceAsset : NSObject <NSSecureCoding>
{
    BOOL _isInstalled;
    NSString *_name;
    NSArray *_languages;
    int _gender;
    int _footprint;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isInstalled; // @synthesize isInstalled=_isInstalled;
@property(readonly, nonatomic) int footprint; // @synthesize footprint=_footprint;
@property(readonly, nonatomic) int gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(int)arg3 footprint:(int)arg4 isInstalled:(BOOL)arg5;

@end

