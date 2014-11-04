/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 2, 2014 at 7:50:09 PM Central European Standard Time
* Operating System: Version 8.1 (Build 12B410)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>
#import <Preferences/PSSpecifierObserver.h>
#import <Preferences/PSViewControllerOffsetProtocol.h>

@protocol PSSpecifierDataSource;
@class NSMutableArray, NSMutableDictionary, UIView, UITableView, NSArray, NSString, UIActionSheet, UIAlertView, UIKeyboard, UIPopoverController, NSIndexPath, NSDictionary;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol> {

	NSMutableArray* _prequeuedReusablePSTableCells;
	NSMutableDictionary* _cells;
	BOOL _cachesCells;
	BOOL _reusesCells;
	BOOL _forceSynchronousIconLoadForCreatedCells;
	UIView* _containerView;
	UITableView* _table;
	NSArray* _specifiers;
	NSMutableDictionary* _specifiersByID;
	NSMutableArray* _groups;
	NSString* _specifierID;
	NSMutableArray* _bundleControllers;
	BOOL _bundlesLoaded;
	BOOL _showingSetupController;
	UIActionSheet* _actionSheet;
	UIAlertView* _alertView;
	BOOL _swapAlertButtons;
	BOOL _keyboardWasVisible;
	UIKeyboard* _keyboard;
	UIPopoverController* _popupStylePopoverController;
	BOOL _popupStylePopoverShouldRePresent;
	BOOL _popupIsModal;
	BOOL _popupIsDismissing;
	BOOL _hasAppeared;
	float _verticalContentOffset;
	NSString* _offsetItemName;
	CGPoint _contentOffsetWithKeyboard;
	NSString* _highlightItemName;
	BOOL _isVisible;
	id<PSSpecifierDataSource> _dataSource;
	BOOL _requestingSpecifiersFromDataSource;
	NSIndexPath* _savedSelectedIndexPath;
	BOOL _edgeToEdgeCells;
	NSDictionary* _pendingURLResourceDictionary;
	NSString* _specifierIDPendingPush;

}

@property (assign,nonatomic) BOOL forceSynchronousIconLoadForCreatedCells;              //@synthesize forceSynchronousIconLoadForCreatedCells=_forceSynchronousIconLoadForCreatedCells - In the implementation block
@property (assign,nonatomic) BOOL edgeToEdgeCells;                                      //@synthesize edgeToEdgeCells=_edgeToEdgeCells - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingURLResourceDictionary;               //@synthesize pendingURLResourceDictionary=_pendingURLResourceDictionary - In the implementation block
@property (nonatomic,copy) NSString * specifierIDPendingPush;                           //@synthesize specifierIDPendingPush=_specifierIDPendingPush - In the implementation block
@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int observerType; 
+(BOOL)displaysButtonBar;
-(void)showVolumeLockFromIPodSettings:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(int)indexOfGroup:(int)arg1 ;
-(id)specifier;
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 detailTextForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(void)beginUpdates;
-(void)endUpdates;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_setContentInset:(float)arg1 ;
-(id)table;
-(id)bundle;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(int)arg2 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(int)indexForIndexPath:(id)arg1 ;
-(void)clearCache;
-(void)reloadSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)setCachesCells:(BOOL)arg1 ;
-(void)setReusesCells:(BOOL)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3 ;
-(void)setSpecifierID:(id)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(int)indexOfSpecifier:(id)arg1 ;
-(void)prepareSpecifiersMetadata;
-(BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 ;
-(id)indexPathForIndex:(int)arg1 ;
-(void)createGroupIndices;
-(id)specifiersInGroup:(int)arg1 ;
-(void)reloadSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2 ;
-(void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(id)specifierForID:(id)arg1 ;
-(void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifier:(id)arg3 ;
-(BOOL)_getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 groups:(id)arg4 ;
-(int)rowsForGroup:(int)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3 ;
-(void)_addIdentifierForSpecifier:(id)arg1 ;
-(void)_insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3 ;
-(void)addSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2 ;
-(void)removeLastSpecifierAnimated:(BOOL)arg1 ;
-(void)_removeIdentifierForSpecifier:(id)arg1 ;
-(void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateSpecifiersInRange:(NSRange)arg1 withSpecifiers:(id)arg2 ;
-(int)_nextGroupInSpecifiersAfterIndex:(int)arg1 inArray:(id)arg2 ;
-(void)dismissConfirmationViewForSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)_unloadBundleControllers;
-(void)_returnKeyPressed:(id)arg1 ;
-(void)contentSizeDidChange:(id)arg1 ;
-(void)contentSizeChangedNotificationPosted:(id)arg1 ;
-(BOOL)edgeToEdgeCells;
-(BOOL)_isRegularWidth;
-(Class)tableViewClass;
-(id)_createGroupIndices:(id)arg1 ;
-(id)specifierAtIndex:(int)arg1 ;
-(void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2 ;
-(void)setForceSynchronousIconLoadForCreatedCells:(BOOL)arg1 ;
-(id)cachedCellForSpecifier:(id)arg1 ;
-(id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3 ;
-(float)_tableView:(id)arg1 heightForCustomInSection:(int)arg2 isHeader:(BOOL)arg3 ;
-(id)_tableView:(id)arg1 viewForCustomInSection:(int)arg2 isHeader:(BOOL)arg3 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)findFirstVisibleResponder;
-(void)_scrollToSpecifierNamed:(id)arg1 ;
-(void)_loadBundleControllers;
-(float)_getKeyboardIntersectionHeight;
-(void)_performHighlightForSpecifierWithID:(id)arg1 tryAgainIfFailed:(BOOL)arg2 ;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)returnPressedAtEnd;
-(void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3 ;
-(BOOL)performConfirmationActionForSpecifier:(id)arg1 ;
-(BOOL)performConfirmationCancelActionForSpecifier:(id)arg1 ;
-(void)confirmationViewAcceptedForSpecifier:(id)arg1 ;
-(void)confirmationViewCancelledForSpecifier:(id)arg1 ;
-(void)_handleActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(BOOL)performActionForSpecifier:(id)arg1 ;
-(BOOL)performButtonActionForSpecifier:(id)arg1 ;
-(BOOL)performLoadActionForSpecifier:(id)arg1 ;
-(id)indexPathForSpecifier:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 ;
-(void)showController:(id)arg1 ;
-(void)setEdgeToEdgeCells:(BOOL)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(void)setPendingURLResourceDictionary:(NSDictionary *)arg1 ;
-(void)setSpecifierIDPendingPush:(NSString *)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)setDesiredVerticalContentOffset:(float)arg1 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg1 ;
-(float)verticalContentOffset;
-(void)highlightSpecifierWithID:(id)arg1 ;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 ;
-(void)reloadIconForSpecifierForBundle:(id)arg1 ;
-(int)indexOfSpecifierID:(id)arg1 ;
-(void)_performHighlightForSpecifierWithID:(id)arg1 ;
-(void)performSpecifierUpdates:(id)arg1 ;
-(void)_moveSpecifierAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 animated:(BOOL)arg3 ;
-(void)dataSource:(id)arg1 performUpdates:(id)arg2 ;
-(void)invalidateSpecifiersForDataSource:(id)arg1 ;
-(int)observerType;
-(void)setSpecifiers:(id)arg1 ;
-(void)reloadSpecifierAtIndex:(int)arg1 ;
-(void)reloadSpecifierID:(id)arg1 ;
-(BOOL)containsSpecifier:(id)arg1 ;
-(int)numberOfGroups;
-(BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierID:(id)arg3 ;
-(int)indexForRow:(int)arg1 inGroup:(int)arg2 ;
-(void)insertSpecifier:(id)arg1 atIndex:(int)arg2 ;
-(void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 ;
-(void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 ;
-(void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 ;
-(void)addSpecifier:(id)arg1 ;
-(void)addSpecifiersFromArray:(id)arg1 ;
-(void)removeSpecifier:(id)arg1 ;
-(void)removeSpecifierID:(id)arg1 ;
-(void)removeSpecifierAtIndex:(int)arg1 ;
-(void)removeLastSpecifier;
-(void)removeContiguousSpecifiers:(id)arg1 ;
-(void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 ;
-(void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2 ;
-(id)initForContentSize:(CGSize)arg1 ;
-(void)loseFocus;
-(id)specifierID;
-(id)cachedCellForSpecifierID:(id)arg1 ;
-(void)createPrequeuedPSTableCells:(unsigned)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 ;
-(void)lazyLoadBundle:(id)arg1 ;
-(id)controllerForRowAtIndexPath:(id)arg1 ;
-(id)specifiersForIDs:(id)arg1 ;
-(void)dismissPopover;
-(BOOL)handlePendingURL;
-(void)selectRowForSpecifier:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)_setNotShowingSetupController;
-(id)specifierDataSource;
-(BOOL)forceSynchronousIconLoadForCreatedCells;
-(NSDictionary *)pendingURLResourceDictionary;
-(NSString *)specifierIDPendingPush;
-(void)showPINSheet:(id)arg1 ;
-(id)popupStylePopoverController;
@end

