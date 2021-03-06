/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAudioSessionDataSourceDescription, NSArray, NSString;

@interface AVAudioSessionPortDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2;
+ (id)privateCreateOrConfigure:(id)arg1 withRawPortDescription:(id)arg2;
- (void)configureChannelsAndDataSources:(id)arg1;
- (id)initWithRawPortDescription:(id)arg1;
- (BOOL)privateMatchesRawDescription:(id)arg1;
- (id)privateGetID;
- (struct PortDescriptionImpl *)privateGetImplementation;
- (BOOL)setPreferredDataSource:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly) NSString *UID;
@property(readonly) AVAudioSessionDataSourceDescription *preferredDataSource;
@property(readonly) AVAudioSessionDataSourceDescription *selectedDataSource;
- (BOOL)isHeadphones;
@property(readonly) NSArray *dataSources;
@property(readonly) NSArray *channels;
@property(readonly) NSString *portName;
@property(readonly) NSString *portType;
- (unsigned int)hash;
- (BOOL)isEqualToPort:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

