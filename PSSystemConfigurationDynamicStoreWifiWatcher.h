/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {

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

