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

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>

@class PSEditingPane;

@interface PSDetailController : PSViewController {

	PSEditingPane* _pane;

}

@property (assign,nonatomic) PSEditingPane * pane; 
-(void)saveChanges;
-(void)dealloc;
<<<<<<< HEAD
-(id)title;
-(void)suspend;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
=======
-(void)suspend;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
<<<<<<< HEAD
-(void)setPane:(PSEditingPane *)arg1 ;
-(PSEditingPane *)pane;
-(void)statusBarWillAnimateByHeight:(float)arg1 ;
-(CGRect)paneFrame;
-(void)loadPane;
=======
-(id)pane;
-(void)setPane:(PSEditingPane *)arg1 ;
-(void)statusBarWillAnimateByHeight:(float)arg1 ;
-(CGRect)paneFrame;
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
@end

