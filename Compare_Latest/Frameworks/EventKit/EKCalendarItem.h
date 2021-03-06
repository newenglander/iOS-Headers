/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKObject.h>

@class EKAttendee, EKCalendar, EKOrganizer, EKStructuredLocation, NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItem : EKObject
{
    int _actionsDisabledCachedValue;
    EKAttendee *_selfAttendee;
    NSString *_sharedItemCreatedByEmailAddress;
}

@property(copy, nonatomic) NSString *sharedItemCreatedByEmailAddress; // @synthesize sharedItemCreatedByEmailAddress=_sharedItemCreatedByEmailAddress;
@property(retain, nonatomic) EKAttendee *selfAttendee; // @synthesize selfAttendee=_selfAttendee;
- (void)moveToCalendar:(id)arg1;
- (id)originalItem;
- (void)_moveToCalendarInternal:(id)arg1;
- (BOOL)rebase;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updatePersistentObject;
- (BOOL)validate:(id *)arg1;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSArray *attachments;
- (id)_attachmentsRelation;
@property(copy, nonatomic) NSTimeZone *sharedItemModifiedTimeZone;
@property(copy, nonatomic) NSDate *sharedItemModifiedDate;
@property(copy, nonatomic) NSString *sharedItemModifiedByLastName;
@property(copy, nonatomic) NSString *sharedItemModifiedByFirstName;
@property(copy, nonatomic) NSString *sharedItemModifiedByEmailAddress;
@property(copy, nonatomic) NSString *sharedItemModifiedByDisplayName;
@property(copy, nonatomic) NSTimeZone *sharedItemCreatedTimeZone;
@property(copy, nonatomic) NSDate *sharedItemCreatedDate;
@property(copy, nonatomic) NSString *sharedItemCreatedByLastName;
@property(copy, nonatomic) NSString *sharedItemCreatedByFirstName;
- (void)setSharedItemCreatedByAddress:(id)arg1;
@property(copy, nonatomic) NSString *sharedItemCreatedByDisplayName;
@property(retain, nonatomic) EKOrganizer *organizer;
- (id)_organizerRelation;
@property(readonly, nonatomic) int selfParticipantStatus;
- (void)removeAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)setAttendees:(id)arg1;
@property(readonly, nonatomic) NSArray *attendees;
@property(readonly, nonatomic) BOOL hasAttendees;
- (id)_selfAttendeeRelation;
- (id)_attendeesRelation;
- (void)removeRecurrenceRule:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
@property(copy, nonatomic) NSArray *recurrenceRules;
@property(readonly, nonatomic) BOOL hasRecurrenceRules;
- (id)_recurrencesRelation;
- (void)removeAllSnoozedAlarms;
- (void)removeAcknowledgedSnoozedAlarms;
- (BOOL)isAlarmAcknowledgedPropertyDirty;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(int)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *allAlarms;
@property(copy, nonatomic) NSArray *alarms;
@property(readonly, nonatomic) BOOL hasAlarms;
- (id)_alarmsRelation;
@property(readonly, nonatomic) BOOL actionsDisabled;
@property(readonly, nonatomic) BOOL allowsAttendeeModifications;
@property(readonly, nonatomic) BOOL allowsAlarmModifications;
@property(readonly, nonatomic) BOOL allowsRecurrenceModifications;
@property(readonly, nonatomic) BOOL allowsCalendarModifications;
@property(readonly, nonatomic) BOOL isOrganizedBySharedCalendarOwner;
@property(readonly, nonatomic) BOOL isExternallyOrganizedInvitation;
@property(readonly, nonatomic) BOOL isSelfOrganizedInvitation;
@property(readonly, nonatomic) BOOL isSelfOrganized;
@property(readonly, nonatomic) BOOL isFloating;
@property(readonly, nonatomic) BOOL isEditable;
@property(readonly) BOOL requiresDetach;
@property(readonly, nonatomic) NSURL *externalURI;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSString *externalID;
@property(nonatomic, getter=isDefaultAlarmRemoved) BOOL defaultAlarmRemoved;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) EKCalendar *calendar;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSURL *action;
@property(nonatomic) int priority;
@property(nonatomic, getter=isAllDay) BOOL allDay;
- (void)setCreationDate:(id)arg1;
@property(readonly, nonatomic) NSDate *creationDate;
- (void)setLastModifiedDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
@property(copy, nonatomic) NSString *location;
- (id)_locationRelation;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) BOOL hasNotes;
@property(copy, nonatomic) NSString *notes;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSString *calendarItemExternalIdentifier;
@property(readonly, nonatomic) NSString *calendarItemIdentifier;
- (id)_persistentItem;
- (id)description;
- (id)lazyLoadRelationForKey:(id)arg1;

@end

