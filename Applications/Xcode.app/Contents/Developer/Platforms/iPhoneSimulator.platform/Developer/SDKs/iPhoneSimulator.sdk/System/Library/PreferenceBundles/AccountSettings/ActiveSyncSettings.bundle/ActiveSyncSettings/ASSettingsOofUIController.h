//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACUIViewController.h"

#import "UITextContentViewDelegate.h"

@class DAOofParams, NSDate, NSString, PSSpecifier, UIBarButtonItem;

@interface ASSettingsOofUIController : ACUIViewController <UITextContentViewDelegate>
{
    _Bool _datePickerShowing;
    _Bool _oooEnabled;
    _Bool _oooEnabledWithDates;
    _Bool _autoReplyMessageIsDirty;
    _Bool _endDateIsDirty;
    _Bool _ONorOFFStateIsDirty;
    UIBarButtonItem *_saveButton;
    PSSpecifier *_currentTimeSpecifier;
    PSSpecifier *_outOfOfficeSpecifier;
    PSSpecifier *_outOfOfficeMessageSpecifier;
    NSDate *_previousUserSelectedAutoReplyEndDate;
    NSDate *_userSelectedAutoReplyEndDate;
    NSDate *_autoReplyStartDate;
    NSString *_autoReplyMessage;
    DAOofParams *_serverData;
}

@property(retain, nonatomic) DAOofParams *serverData; // @synthesize serverData=_serverData;
@property(nonatomic) _Bool ONorOFFStateIsDirty; // @synthesize ONorOFFStateIsDirty=_ONorOFFStateIsDirty;
@property(nonatomic) _Bool endDateIsDirty; // @synthesize endDateIsDirty=_endDateIsDirty;
@property(nonatomic) _Bool autoReplyMessageIsDirty; // @synthesize autoReplyMessageIsDirty=_autoReplyMessageIsDirty;
@property(retain, nonatomic) NSString *autoReplyMessage; // @synthesize autoReplyMessage=_autoReplyMessage;
@property(retain, nonatomic) NSDate *autoReplyStartDate; // @synthesize autoReplyStartDate=_autoReplyStartDate;
@property(retain, nonatomic) NSDate *userSelectedAutoReplyEndDate; // @synthesize userSelectedAutoReplyEndDate=_userSelectedAutoReplyEndDate;
@property(retain, nonatomic) NSDate *previousUserSelectedAutoReplyEndDate; // @synthesize previousUserSelectedAutoReplyEndDate=_previousUserSelectedAutoReplyEndDate;
@property(nonatomic) _Bool oooEnabledWithDates; // @synthesize oooEnabledWithDates=_oooEnabledWithDates;
@property(nonatomic) _Bool oooEnabled; // @synthesize oooEnabled=_oooEnabled;
@property(nonatomic) _Bool datePickerShowing; // @synthesize datePickerShowing=_datePickerShowing;
@property(retain, nonatomic) PSSpecifier *outOfOfficeMessageSpecifier; // @synthesize outOfOfficeMessageSpecifier=_outOfOfficeMessageSpecifier;
@property(retain, nonatomic) PSSpecifier *outOfOfficeSpecifier; // @synthesize outOfOfficeSpecifier=_outOfOfficeSpecifier;
@property(retain, nonatomic) PSSpecifier *currentTimeSpecifier; // @synthesize currentTimeSpecifier=_currentTimeSpecifier;
@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
- (void).cxx_destruct;
- (id)trimWhitespaceAndNewlinesFromString:(id)arg1;
- (void)showKeyboard;
- (void)dismissKeyboard;
- (void)textContentViewDidChange:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)_resetAllOutOfOfficeLocalValueToServerValue:(_Bool)arg1;
- (id)currentDateString:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)enableSaveButton;
- (void)cancelButtonTapped:(id)arg1;
- (void)saveButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)_updateAutoReplyMessageWithDate:(id)arg1;
- (id)_composeNewAutoReplyStringWithDate:(id)arg1;
- (id)_stringFormatOfDate:(id)arg1;
- (void)setAutoReplyText:(id)arg1 withSpecifier:(id)arg2;
- (id)autoReplyTextWithSpecifier:(id)arg1;
- (void)setOofState:(id)arg1 withSpecifier:(id)arg2;
- (id)oofStateWithSpecifier:(id)arg1;
- (id)autoReplyTextCellSpecifier;
- (id)timePickerSpecifier;
- (id)outOfOfficeEndDateDisplaySpecifier;
- (void)_removeAdditionalOOOSpecifiersAnimated:(_Bool)arg1;
- (void)_insertAdditionalOOOSpecifiersAnimated:(_Bool)arg1;
- (id)specifiers;

// Remaining properties
@property(retain, nonatomic) UIBarButtonItem *cancelButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
