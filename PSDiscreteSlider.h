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
<<<<<<< HEAD
#import <UIKit/UISlider.h>
=======
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8

@class UIColor;

@interface PSDiscreteSlider : UISlider {

	UIColor* _trackMarkersColor;

}

@property (nonatomic,retain) UIColor * trackMarkersColor;              //@synthesize trackMarkersColor=_trackMarkersColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)sliderTapped:(id)arg1 ;
-(void)setTrackMarkersColor:(UIColor *)arg1 ;
<<<<<<< HEAD
-(UIColor *)trackMarkersColor;
=======
-(id)trackMarkersColor;
>>>>>>> 9b3c8b97620825ae25bfcb8647c947dfc8814ae8
@end

