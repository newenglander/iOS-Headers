/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface _UIKeyframe : NSObject
{
    NSString *_key;
    id _value;
    double _startTime;
    double _duration;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void)dealloc;
- (id)initWithKey:(id)arg1 startTime:(double)arg2 duration:(double)arg3;

@end
