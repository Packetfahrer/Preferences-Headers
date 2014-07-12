/*
* This header is generated by classdump-dyld 0.2
* on Wednesday, May 21, 2014 at 1:42:41 PM Central European Summer Time
* Operating System: Version 7.0.6 (Build 11B651)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {

	SCDynamicStoreRef _prefs;
	CFStringRef _wifiKey;
	CFStringRef _wifiInterface;
	CFStringRef _tetheringLink;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(BOOL)wifiEnabled;
-(void)dealloc;
-(id)init;
-(id)wifiConfig;
-(void)findKeysAirPortState:(id*)arg1 andTetheringState:(id*)arg2 ;
-(id)_wifiNameWithState:(id)arg1 ;
-(id)_wifiPowerWithState:(id)arg1 ;
-(id)_wifiTetheringWithState:(id)arg1 ;
@end
