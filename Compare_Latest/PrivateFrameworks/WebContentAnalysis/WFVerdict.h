/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, WFLSMResult;

@interface WFVerdict : NSObject
{
    BOOL restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}

+ (id)verdictWithRestriction:(BOOL)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5;
- (void)dealloc;
- (id)description;
- (void)setEvidence:(int)arg1;
- (int)evidence;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setLSMEvaluationResult:(id)arg1;
- (id)LSMEvaluationResult;
- (void)setRestricted:(BOOL)arg1;
- (BOOL)restricted;

@end

