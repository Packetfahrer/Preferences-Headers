/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:10 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PSUsageBundleApp, NSString;

@interface PSUsageBundleCategory : NSObject {

	PSUsageBundleApp* _usageBundleApp;
	NSString* _identifier;
	NSString* _name;

}

@property (assign,nonatomic) PSUsageBundleApp * usageBundleApp;              //@synthesize usageBundleApp=_usageBundleApp - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setIdentifier:(NSString *)arg1 ;
-(PSUsageBundleApp *)usageBundleApp;
-(void)setUsageBundleApp:(PSUsageBundleApp *)arg1 ;
@end

