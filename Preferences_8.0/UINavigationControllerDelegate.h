/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UINavigationControllerDelegate <NSObject>
@optional
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
@end
