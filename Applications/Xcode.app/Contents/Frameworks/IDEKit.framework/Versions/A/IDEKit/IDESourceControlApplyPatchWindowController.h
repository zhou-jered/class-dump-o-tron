//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDESourceControlReviewFilesWindowController.h>

#import "IDEReviewFilesViewControllerDelegate.h"

@class DVTBorderedView, DVTObservingToken, IDESourceControlPatch, IDESourceControlPatchDataSource, NSArray, NSButton, NSSegmentedControl, NSString;

@interface IDESourceControlApplyPatchWindowController : IDESourceControlReviewFilesWindowController <IDEReviewFilesViewControllerDelegate>
{
    IDESourceControlPatch *_patch;
    DVTBorderedView *_reviewFilesView;
    NSButton *_applyButton;
    NSSegmentedControl *_perDiffSegmentedControl;
    IDESourceControlPatchDataSource *_workspaceDataSource;
    IDESourceControlPatchDataSource *_flatDataSource;
    IDESourceControlPatchDataSource *_fileSystemDataSource;
    NSArray *_operationInfos;
    DVTObservingToken *_diffDescriptorsObservationToken;
    DVTObservingToken *_mergeDirectionObservationToken;
    DVTObservingToken *_descriptorResolvedObservationToken;
    DVTObservingToken *_conflictCountObservationToken;
    BOOL _inProgress;
    NSArray *_rootFilePaths;
}

@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(retain) NSArray *rootFilePaths; // @synthesize rootFilePaths=_rootFilePaths;
@property(retain) IDESourceControlPatch *patch; // @synthesize patch=_patch;
@property(retain) NSArray *operationInfos; // @synthesize operationInfos=_operationInfos;
- (void).cxx_destruct;
- (void)overwriteOriginalDocumentsWithMergeDocumentsForWorkingTree:(id)arg1;
- (void)overwriteOriginalDocumentsWithMergeDocuments;
- (void)apply:(id)arg1;
- (void)cancel:(id)arg1;
- (void)selectMergeStrategyForSelectedDiff:(id)arg1;
- (id)selectedMergeDescriptor;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)updatePerDiffSegmentedControl;
- (id)workingTreeItemFilterPredicate;
- (id)workspaceItemFilterPredicate;
- (unsigned long long)totalConflictCount;
- (id)flatDataSource;
- (id)fileSystemDataSource;
- (id)workspaceDataSource;
- (void)beginSheetForWindow:(id)arg1;
- (BOOL)shouldEnableApplyButton;
- (void)reviewFilesViewController:(id)arg1 didInstallComparisonEditor:(id)arg2;
- (id)operationInfoForRootFilePath:(id)arg1;
- (void)setupConflictResolutionSupport;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
