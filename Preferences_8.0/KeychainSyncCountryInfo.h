/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/NSCopying.h>

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
+(void)_loadCountriesIfNeeded;
+(id)allCountries;
+(id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2 ;
-(NSString *)countryName;
-(void)setCountryName:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setLocalizedCountryName:(NSString *)arg1 ;
-(NSString *)localizedCountryName;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(NSString *)dialingPrefix;
-(NSString *)countryCode;
@end

