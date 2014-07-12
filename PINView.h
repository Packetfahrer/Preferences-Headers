/*
* This header is generated by classdump-dyld 0.2
* on Wednesday, May 21, 2014 at 1:42:41 PM Central European Summer Time
* Operating System: Version 7.0.6 (Build 11B651)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PINEntryView.h>

@class UILabel, FailureBarView;

@interface PINView : UIView <PINEntryView> {

	UILabel* _titleLabel;
	UILabel* _errorTitleLabel;
	FailureBarView* _failureView;
	UILabel* _pinPolicyLabel;
	BOOL _error;
	id _delegate;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
-(void)showFailedAttempts:(int)arg1 ;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2 ;
-(void)showError:(id)arg1 animate:(BOOL)arg2 ;
-(void)setTitle:(id)arg1 font:(id)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
@end

