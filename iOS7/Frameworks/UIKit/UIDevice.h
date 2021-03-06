/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSUUID;

@interface UIDevice : NSObject
{
    int _numDeviceOrientationObservers;
    float _batteryLevel;
    struct {
        unsigned int batteryMonitoringEnabled:1;
        unsigned int proximityMonitoringEnabled:1;
        unsigned int expectsFaceContactInLandscape:1;
        unsigned int orientation:3;
        unsigned int batteryState:2;
        unsigned int proximityState:1;
    } _deviceFlags;
}

+ (id)currentDevice;
+ (int)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg1;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)_playSystemSound:(unsigned long)arg1;
- (void)_unregisterForSystemSounds:(id)arg1;
- (void)_registerForSystemSounds:(id)arg1;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (float)_softwareDimmingAlpha;
@property(nonatomic, setter=_setBacklightLevel:) float _backlightLevel;
- (void)playInputClick;
@property(readonly, nonatomic) int userInterfaceIdiom;
@property(readonly, nonatomic, getter=isMultitaskingSupported) BOOL multitaskingSupported;
@property(readonly, nonatomic) BOOL proximityState;
- (void)_setExpectsFaceContactInLandscape:(BOOL)arg1;
@property(nonatomic, getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;
@property(readonly, nonatomic) float batteryLevel;
@property(readonly, nonatomic) int batteryState;
@property(nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property(readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;
- (void)beginGeneratingDeviceOrientationNotifications;
@property(readonly, nonatomic) int orientation;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) NSUUID *identifierForVendor;
- (id)uniqueIdentifier;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *systemName;
@property(readonly, nonatomic) NSString *localizedModel;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
- (id)_deviceInfoForKey:(struct __CFString *)arg1;
- (void)_setActiveUserInterfaceIdiom:(int)arg1;
- (void)_enableDeviceOrientationEvents:(BOOL)arg1;
- (void)_clearGraphicsQualityOverride;
- (void)_setGraphicsQualityOverride:(int)arg1;
- (int)_graphicsQuality;
- (BOOL)_isTTYEnabled;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(int)arg1;
- (void)_setProximityState:(BOOL)arg1;

@end

