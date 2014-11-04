/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:10 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PSWeakReference, NSString, NSArray;

@interface PSUsageBundleApp : NSObject {

	PSWeakReference* _storageReporterReference;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;
	float _totalSize;

}

@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                           //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) float totalSize;                                                //@synthesize totalSize=_totalSize - In the implementation block
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3 ;
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)bundleIdentifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)categories;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setTotalSize:(float)arg1 ;
-(float)totalSize;
@end

