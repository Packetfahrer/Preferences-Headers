/*
<<<<<<< HEAD
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:10 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
=======
* This header is generated by classdump-dyld 0.2
* on Wednesday, May 21, 2014 at 1:42:42 PM Central European Summer Time
* Operating System: Version 7.0.6 (Build 11B651)
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSettingsDetail.h>

<<<<<<< HEAD
@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)iconImage;
=======
@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>
+(id)iconImage;
+(unsigned)guidedAccessAvailability;
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
+(id)preferencesURL;
+(BOOL)guidedAccessHasPasscode;
+(void)setGuidedAccessSwitchEnabled:(BOOL)arg1 ;
+(void)enterGuidedAccessMode;
<<<<<<< HEAD
+(unsigned)guidedAccessAvailability;
=======
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
@end

