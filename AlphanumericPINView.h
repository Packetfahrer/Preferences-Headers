/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>

@class UITextField, AlphanumericPINTableViewCell, UITableView, NSString;

@interface AlphanumericPINView : PINView <UITableViewDataSource> {

	UITextField* _passcodeField;
	AlphanumericPINTableViewCell* _cell;
	UITableView* _table;

}

@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(BOOL)isFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setTextFieldKeyboardType:(int)arg1 ;
-(void)setTextFieldKeyboardAppearance:(int)arg1 ;
-(void)showError:(id)arg1 animate:(BOOL)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(void)okButtonPressed:(id)arg1 ;
@end

