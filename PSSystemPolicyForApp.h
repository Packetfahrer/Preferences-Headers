/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:10 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@class NSString;

@interface PSSystemPolicyForApp : NSObject {

	unsigned _policyOptions;
	BOOL _forcePolicyOptions;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)specifiers;
-(id)specifiersForPolicyOptions:(unsigned)arg1 force:(BOOL)arg2 ;
-(id)privacySpecifiers;
-(id)notificationSpecifier;
-(id)privacySpecifierForService:(CFStringRef)arg1 ;
-(id)backgroundAppRefreshSpecifier;
-(id)cellularSpecifier;
-(id)_sectionInfo;
-(id)dataUsageWorkspaceInfo;
-(BOOL)isCellularBundleID:(id)arg1 ;
-(void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)appCellularDataEnabledForSpecifier:(id)arg1 ;
-(BOOL)_isCellularDataRestricted;
-(BOOL)_supportsBackgroundAppRefresh;
-(void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isBackgroundRefreshEnabled:(id)arg1 ;
-(BOOL)_isBackgroundAppRefreshRestricted;
-(id)locationStatus:(id)arg1 ;
-(BOOL)_isLocationServicesRestricted;
-(id)authLevelStringForStatus:(int)arg1 ;
-(id)locationServicesSpecifier;
-(id)_privacyAccessForService:(CFStringRef)arg1 ;
-(void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)privacyAccessForSpecifier:(id)arg1 ;
-(CFBundleRef)copyTCCBundleForService:(CFStringRef)arg1 ;
@end
