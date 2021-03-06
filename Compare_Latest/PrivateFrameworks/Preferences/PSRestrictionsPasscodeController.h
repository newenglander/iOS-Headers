/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PSRestrictionsPasscodeController : NSObject
{
}

+ (id)_keychainPasswordForRestrictions;
+ (void)_removeKeychainPasswordForRestrictions;
+ (BOOL)validatePIN:(id)arg1;
+ (BOOL)settingEnabled;
+ (void)setPIN:(id)arg1;
+ (void)removePasswordForRestrictions;
+ (void)setPasswordForRestrictions:(id)arg1;
+ (id)passwordForRestrictions;
+ (id)saltForRestrictions;
+ (id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2;
+ (id)_restrictionPasswordDictionary;
+ (id)_generateSalt;
+ (BOOL)legacyRestrictionsInEffect;
+ (void)migrateRestrictionsPasscode;

@end

