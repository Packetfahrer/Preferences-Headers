/*
<<<<<<< HEAD
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
=======
* This header is generated by classdump-dyld 0.2
* on Wednesday, May 21, 2014 at 1:42:41 PM Central European Summer Time
* Operating System: Version 7.0.6 (Build 11B651)
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Preferences/KeychainSyncViewControllerDelegate.h>
#import <Preferences/KeychainSyncPhoneSettingsFragmentDelegate.h>

@class PSSpecifier, NSArray, PSSetupController, KeychainSyncDevicePINController, KeychainSyncPhoneSettingsFragment, NSString, KeychainSyncCountryInfo, PSKeychainSyncManager, UIAlertView;

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate> {

	PSSpecifier* _recoverySwitch;
	NSArray* _passcodeSpecifiers;
	PSSetupController* _devicePasscodeChangeSetupController;
	KeychainSyncDevicePINController* _devicePINController;
	KeychainSyncPhoneSettingsFragment* _phoneSettingsFragment;
	NSString* _SMSTarget;
	KeychainSyncCountryInfo* _SMSTargetCountryInfo;
	BOOL _secureBackupEnabled;
	PSKeychainSyncManager* _manager;
	UIAlertView* _invalidPhoneNumberAlert;
	UIAlertView* _changeDevicePasscodeAlert;
	UIAlertView* _disableRecoveryConfirmationAlert;
<<<<<<< HEAD
	int _securityCodeType;
=======
	BOOL _usesSimpleSecurityCode;
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
	NSString* _securityCode;

}

<<<<<<< HEAD
@property (assign,nonatomic) int securityCodeType;                  //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (nonatomic,retain) NSString * securityCode;               //@synthesize securityCode=_securityCode - In the implementation block
@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
=======
@property (assign,nonatomic) BOOL usesSimpleSecurityCode;              //@synthesize usesSimpleSecurityCode=_usesSimpleSecurityCode - In the implementation block
@property (nonatomic,retain) NSString * securityCode;                  //@synthesize securityCode=_securityCode - In the implementation block
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)cancelPressed;
<<<<<<< HEAD
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
=======
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
-(void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3 ;
-(void)handleBurnedRecord;
-(void)changeSecurityCode:(id)arg1 ;
-(void)setUseRecovery:(id)arg1 specifier:(id)arg2 ;
-(id)useRecoveryForSepecifier:(id)arg1 ;
-(id)passcodeSpecifiers;
-(void)_setShowsDoneButton:(BOOL)arg1 ;
-(void)setSecurityCode:(NSString *)arg1 ;
-(void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1 ;
<<<<<<< HEAD
-(NSString *)securityCode;
=======
-(id)securityCode;
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
-(void)saveSMSTargetChanges;
-(void)navCancelPressed;
-(void)navDonePressed;
-(void)disableRecovery;
<<<<<<< HEAD
=======
-(id)useSimpleSecurityCodeForSpecifier:(id)arg1 ;
-(BOOL)usesSimpleSecurityCode;
-(void)setUsesSimpleSecurityCode:(BOOL)arg1 ;
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
@end

