/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask
{
    CoreDAVAction *_backingAction;
}

@property(retain) CoreDAVAction *backingAction; // @synthesize backingAction=_backingAction;
@property(retain) CoreDAVAction *action;
- (void)dealloc;
- (id)description;

@end

