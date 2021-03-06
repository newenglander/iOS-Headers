/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIImage;

@interface SFAirDropNode : NSObject
{
    struct __SFOperation *_sender;
    BOOL _unknown;
    BOOL _monogram;
    id _node;
    NSString *_realName;
    UIImage *_displayIcon;
    NSString *_displayName;
    NSString *_secondaryName;
}

+ (id)nodeWithSFNode:(struct __SFNode *)arg1;
@property(getter=isMonogram) BOOL monogram; // @synthesize monogram=_monogram;
@property(getter=isUnknown) BOOL unknown; // @synthesize unknown=_unknown;
@property(retain) NSString *secondaryName; // @synthesize secondaryName=_secondaryName;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) UIImage *displayIcon; // @synthesize displayIcon=_displayIcon;
@property(retain) NSString *realName; // @synthesize realName=_realName;
@property(retain) id node; // @synthesize node=_node;
- (void).cxx_destruct;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long)arg2 withResults:(id)arg3;
- (void)cancelSend;
- (void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (struct CGImage *)createRotatedCGImageFromUIImage:(id)arg1;
- (void)updateWithSFNode:(struct __SFNode *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

