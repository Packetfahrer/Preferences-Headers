/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:10 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSMutableArray;

@interface PSUsageBundleManager : NSObject {

	NSDictionary* _bundleMap;
	NSArray* _usageBundleApps;
	NSMutableArray* _storageReporters;

}
-(void)dealloc;
-(void)_loadUsageBundlesWithHandler:(/*^block*/ id)arg1 ;
-(id)allUsageBundleApps;
-(void)vendUsageBundleAppsWithHandler:(/*^block*/ id)arg1 ;
@end

