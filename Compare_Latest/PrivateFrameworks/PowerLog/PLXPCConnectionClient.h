/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PLXPCConection;

@interface PLXPCConnectionClient : NSObject
{
    PLXPCConection *xpcConnection;
}

- (void)PLXPCinvalidationHandler;
- (void)PLXPCinterruptedHandler;
- (BOOL)PLXPCSendMessage:(id)arg1;
- (id)PLXPCSendMessageWithReply:(id)arg1;
- (id)init;

@end

