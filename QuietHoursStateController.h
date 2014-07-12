/*
* This header is generated by classdump-dyld 0.2
* on Wednesday, May 21, 2014 at 1:42:42 PM Central European Summer Time
* Operating System: Version 7.0.6 (Build 11B651)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDateComponents, BBSettingsGateway;

@interface QuietHoursStateController : NSObject {

	BOOL _valid;
	BOOL _enabled;
	unsigned _mode;
	NSArray* _overrides;
	unsigned _privilegeTypes;
	int _recordID;
	NSDateComponents* _fromComponents;
	NSDateComponents* _toComponents;
	BBSettingsGateway* _bbGateway;
	unsigned _overrideType;
	BOOL _isEffectiveWhileUnlocked;
	int _overrideStatus;

}

@property (assign,nonatomic) BOOL valid;                                     //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) unsigned mode;                                  //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSArray * overrides;                              //@synthesize overrides=_overrides - In the implementation block
@property (assign,nonatomic) BOOL isEffectiveWhileUnlocked;                  //@synthesize isEffectiveWhileUnlocked=_isEffectiveWhileUnlocked - In the implementation block
@property (assign,nonatomic) unsigned privilegeTypes;                        //@synthesize privilegeTypes=_privilegeTypes - In the implementation block
@property (assign,nonatomic) int recordID;                                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSDateComponents * fromComponents;              //@synthesize fromComponents=_fromComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * toComponents;                //@synthesize toComponents=_toComponents - In the implementation block
@property (nonatomic,readonly) BBSettingsGateway * bbGateway;                //@synthesize bbGateway=_bbGateway - In the implementation block
@property (assign,nonatomic) unsigned overrideType;                          //@synthesize overrideType=_overrideType - In the implementation block
@property (assign,nonatomic) int overrideStatus;                             //@synthesize overrideStatus=_overrideStatus - In the implementation block
+(id)sharedController;
+(BOOL)isDNDScheduled;
+(void)setManualEnabled:(BOOL)arg1 ;
+(void)setScheduledEnabled:(BOOL)arg1 ;
+(void)setScheduledRangeFrom:(id)arg1 to:(id)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(BOOL)enabled;
-(BOOL)valid;
-(unsigned)overrideType;
-(void)setOverrideType:(unsigned)arg1 ;
-(void)setRecordID:(int)arg1 ;
-(int)recordID;
-(void)setOverrides:(NSArray * )arg1 ;
-(id)fromComponents;
-(id)toComponents;
-(id)bbGateway;
-(id)overrides;
-(void)setOverrideStatus:(int)arg1 ;
-(void)setFromComponents:(NSDateComponents *)arg1 ;
-(void)setToComponents:(NSDateComponents *)arg1 ;
-(unsigned)privilegeTypes;
-(int)overrideStatus;
-(void)setPrivilegeTypes:(unsigned)arg1 ;
-(void)resetToFallbackRange;
-(void)synchronizeEnabledState;
-(BOOL)repeatedCalls;
-(BOOL)manualModeEnabled;
-(void)setRepeatedCalls:(BOOL)arg1 ;
-(unsigned)allowedGroupType;
-(int)userSelectedGroupID;
-(void)setAllowedGroup:(id)arg1 recordID:(int)arg2 groupName:(id)arg3 ;
-(void)synchronizeOverrides:(id)arg1 mode:(unsigned)arg2 gateway:(id)arg3 ;
-(BOOL)isEffectiveWhileUnlocked;
-(void)setIsEffectiveWhileUnlocked:(BOOL)arg1 ;
@end

