//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSDate, UIDatePicker, UISegmentedControl, UITableViewCell;

__attribute__((visibility("hidden")))
@interface DirectionsSearchDepartureArrivalSelectionViewController : UITableViewController
{
    UITableViewCell *_selectorCell;
    UITableViewCell *_datePickerCell;
    UISegmentedControl *_selector;
    UIDatePicker *_datePicker;
    unsigned long long _suspendedViewUpdatesCount;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    CDUnknownBlockType _didChangeValues;
}

@property(copy, nonatomic) CDUnknownBlockType didChangeValues; // @synthesize didChangeValues=_didChangeValues;
@property(copy, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(copy, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_datePickerDidChangeValue;
- (void)_selectorDidChangeValue;
- (void)_invokeChangeHandler;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_datePicker;
- (id)_selector;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_updateViews;
- (void)_performPreventingViewUpdates:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (id)init;

@end
