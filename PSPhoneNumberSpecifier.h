/*
<<<<<<< HEAD
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
=======
* This header is generated by classdump-dyld 0.2
* on Wednesday, May 21, 2014 at 1:42:40 PM Central European Summer Time
* Operating System: Version 7.0.6 (Build 11B651)
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTextFieldSpecifier.h>

@class NSString;

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate> {

	NSString* _countryCode;

}

<<<<<<< HEAD
@property (nonatomic,retain) NSString * countryCode;                //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
=======
@property (nonatomic,retain) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)countryCode;
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
@end

