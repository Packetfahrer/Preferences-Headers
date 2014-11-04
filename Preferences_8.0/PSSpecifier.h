/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSMutableDictionary, CNFRegAlias, IMAccount;

@interface PSSpecifier : NSObject {

	id target;
	SEL getter;
	SEL setter;
	SEL action;
	SEL cancel;
	Class detailControllerClass;
	int cellType;
	Class editPaneClass;
	UIKeyboardType keyboardType;
	int autoCapsType;
	int autoCorrectionType;
	unsigned textFieldType;
	NSString* _name;
	NSArray* _values;
	NSDictionary* _titleDict;
	NSDictionary* _shortTitleDict;
	id _userInfo;
	NSMutableDictionary* _properties;
	SEL _confirmationAction;
	SEL _confirmationCancelAction;
	SEL _buttonAction;
	SEL _controllerLoadAction;
	BOOL _showContentString;

}

@property (nonatomic,retain) CNFRegAlias * CNFRegAlias; 
@property (nonatomic,retain) CNFRegAlias * CNFRegCallerIdAlias; 
@property (nonatomic,retain) IMAccount * CNFRegAccount; 
@property (nonatomic,retain) NSArray * values;                                 //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id userInfo;                                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * titleDictionary;                   //@synthesize titleDict=_titleDict - In the implementation block
@property (nonatomic,retain) NSDictionary * shortTitleDictionary;              //@synthesize shortTitleDict=_shortTitleDict - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) id target; 
@property (assign,nonatomic) Class detailControllerClass; 
@property (assign,nonatomic) int cellType; 
@property (assign,nonatomic) Class editPaneClass; 
@property (assign,nonatomic) SEL confirmationAction;                           //@synthesize confirmationAction=_confirmationAction - In the implementation block
@property (assign,nonatomic) SEL confirmationCancelAction;                     //@synthesize confirmationCancelAction=_confirmationCancelAction - In the implementation block
@property (assign,nonatomic) SEL buttonAction;                                 //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,nonatomic) SEL controllerLoadAction;                         //@synthesize controllerLoadAction=_controllerLoadAction - In the implementation block
@property (assign,nonatomic) BOOL showContentString;                           //@synthesize showContentString=_showContentString - In the implementation block
+(void)updateSpecifiers:(id)arg1 withTarget:(id)arg2 ;
+(id)emptySpecifier;
+(id)switchSpecifierWithTitle:(id)arg1 target:(id)arg2 setter:(SEL)arg3 getter:(SEL)arg4 key:(id)arg5 ;
+(id)buttonSpecifierWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 confirmationInfo:(id)arg4 ;
+(id)_dataclassIconCache;
+(id)_iconForDataclass:(id)arg1 ;
+(id)acui_specifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 ;
+(id)acui_linkListCellSpecifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 ;
+(id)acui_specifierForAppWithBundleID:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 ;
+(id)_bundle;
+(id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 linkButtons:(id)arg3 ;
+(id)groupSpecifierWithFooterText:(id)arg1 linkButton:(id)arg2 ;
+(id)groupSpecifierWithFooterText:(id)arg1 linkButtons:(id)arg2 ;
+(id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 ;
+(id)groupSpecifierWithFooterLinkButton:(id)arg1 ;
+(id)emptyGroupSpecifier;
+(id)groupSpecifierWithName:(id)arg1 ;
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(int)arg6 edit:(Class)arg7 ;
+(id)groupSpecifierWithID:(id)arg1 name:(id)arg2 ;
+(id)groupSpecifierWithID:(id)arg1 ;
+(id)specifierWithSpecifier:(id)arg1 ;
+(int)autoCorrectionTypeForNumber:(id)arg1 ;
+(int)autoCapsTypeForString:(id)arg1 ;
+(int)keyboardTypeForString:(id)arg1 ;
+(id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)domain;
-(void)setUsage:(unsigned long long)arg1 ;
-(unsigned long long)diskUsage;
-(CNFRegAlias *)CNFRegAlias;
-(IMAccount *)CNFRegAccount;
-(void)setCNFRegAccount:(IMAccount *)arg1 ;
-(void)setCNFRegAlias:(CNFRegAlias *)arg1 ;
-(CNFRegAlias *)CNFRegCallerIdAlias;
-(void)setCNFRegCallerIdAlias:(CNFRegAlias *)arg1 ;
-(id)acui_dataclass;
-(id)acui_appBundleID;
-(void)removePropertyForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)identifier;
-(void)setTarget:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)target;
-(NSString *)name;
-(id)userInfo;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(void)setButtonAction:(SEL)arg1 ;
-(SEL)buttonAction;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setValues:(id)arg1 titles:(id)arg2 ;
-(void)setKeyboardType:(UIKeyboardType)arg1 autoCaps:(int)arg2 autoCorrection:(int)arg3 ;
-(BOOL)showContentString;
-(int)cellType;
-(SEL)controllerLoadAction;
-(SEL)confirmationAction;
-(SEL)confirmationCancelAction;
-(void)setControllerLoadAction:(SEL)arg1 ;
-(void)setupIconImageWithPath:(id)arg1 ;
-(Class)detailControllerClass;
-(void)setDetailControllerClass:(Class)arg1 ;
-(void)setCellType:(int)arg1 ;
-(Class)editPaneClass;
-(void)setEditPaneClass:(Class)arg1 ;
-(void)setConfirmationAction:(SEL)arg1 ;
-(void)setConfirmationCancelAction:(SEL)arg1 ;
-(void)setShowContentString:(BOOL)arg1 ;
-(NSDictionary *)titleDictionary;
-(void)setTitleDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)shortTitleDictionary;
-(void)setShortTitleDictionary:(NSDictionary *)arg1 ;
-(void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 ;
-(void)loadValuesAndTitlesFromDataSource;
-(void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(BOOL)arg4 ;
-(void)setupIconImageWithBundle:(id)arg1 ;
-(int)titleCompare:(id)arg1 ;
-(BOOL)isEqualToSpecifier:(id)arg1 ;
@end

