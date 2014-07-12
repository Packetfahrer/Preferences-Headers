/*
* This header is generated by classdump-dyld 0.2
* on Wednesday, May 21, 2014 at 1:42:40 PM Central European Summer Time
* Operating System: Version 7.0.6 (Build 11B651)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>

@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying> {

	NSString* _countryCode;
	NSString* _countryName;
	NSString* _localizedCountryName;
	NSString* _dialingPrefix;

}

@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * countryName;                       //@synthesize countryName=_countryName - In the implementation block
@property (nonatomic,retain) NSString * localizedCountryName;              //@synthesize localizedCountryName=_localizedCountryName - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                     //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
+(id)countryInfoWithDictionary:(id)arg1 ;
-(id)countryName;
-(void)setCountryName:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)countryCode;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(id)dialingPrefix;
-(id)localizedCountryName;
-(void)setLocalizedCountryName:(NSString *)arg1 ;
@end
