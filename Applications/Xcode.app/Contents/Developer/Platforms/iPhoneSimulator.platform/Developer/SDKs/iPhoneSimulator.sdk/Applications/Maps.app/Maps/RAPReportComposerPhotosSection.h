//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RAPTablePartSection.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableArray, NSString, RAPPhotoPickerController;

__attribute__((visibility("hidden")))
@interface RAPReportComposerPhotosSection : RAPTablePartSection <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSMutableArray *_photos;
    id <RAPReportComposerCommentPartOutput> _question;
    RAPPhotoPickerController *_picker;
}

- (void).cxx_destruct;
- (double)heightForRowAtIndex:(long long)arg1;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;
- (void)_startPickingPhotoFromView:(id)arg1;
- (id)cellForRowAtIndex:(long long)arg1;
- (long long)_appearance;
- (long long)rowsCount;
- (id)initWithOutput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
