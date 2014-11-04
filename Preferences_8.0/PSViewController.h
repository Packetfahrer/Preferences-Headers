/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Preferences/PSController.h>

@protocol PSController;
@class UIViewController, PSRootController, PSSpecifier, NSString;

@interface PSViewController : UIViewController <PSController> {

	UIViewController* _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;

}

@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifier;
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(id)parentController;
-(void)setParentController:(id)arg1 ;
-(id)rootController;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)setRootController:(id)arg1 ;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(float)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
@end

