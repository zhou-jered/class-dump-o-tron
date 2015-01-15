//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenField.h"

#import "NSTokenFieldDelegate.h"

@class NSButton, NSCharacterSet, NSMenuItem, NSSegmentedControl, NSString, XRInstrument;

@interface PFTLegacySearchTokenTextField : NSTokenField <NSTokenFieldDelegate>
{
    XRInstrument *_instrument;
    NSMenuItem *_selectedMenuItem;
    NSSegmentedControl *_buttonWithMenu;
    NSButton *_clearSearchControl;
    BOOL _matchesAny;
    NSCharacterSet *_invalidCharacters;
}

+ (void)initialize;
- (id)tokenField:(id)arg1 shouldUseDrawingAttributes:(id)arg2 forRepresentedObject:(id)arg3;
- (void)setObjectValue:(id)arg1;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (void)_clearSearchField:(id)arg1;
- (void)_searchFieldChanged:(id)arg1;
- (void)_handleSearchFieldChanged;
- (void)_updateInstrumentForSearchFieldChanges;
- (void)viewDidMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)filterInstrument;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchMenuSelect:(id)arg1;
- (void)updateMenuAndFilterInstrument;
- (void)_setInstrument:(id)arg1;
- (void)_instrumentSearchContextRefresh:(id)arg1;
- (void)resetCursorRects;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)_setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
