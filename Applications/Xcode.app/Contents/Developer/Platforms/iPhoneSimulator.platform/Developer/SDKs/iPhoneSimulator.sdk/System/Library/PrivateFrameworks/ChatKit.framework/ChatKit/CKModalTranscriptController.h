//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKTranscriptController.h>

@class NSMutableArray;

@interface CKModalTranscriptController : CKTranscriptController
{
    _Bool _mimeType;
    _Bool _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    int _entryViewInvisible;
    _Bool _cameraSelectionDisabled;
    _Bool _forceMMS;
}

@property(nonatomic) _Bool forceMMS; // @synthesize forceMMS=_forceMMS;
@property(nonatomic) _Bool mimeType; // @synthesize mimeType=_mimeType;
- (_Bool)_shouldUseExistingConversations;
- (_Bool)_shouldUseDefaultFirstResponder;
- (void)_conversationListDidFinishLoading:(id)arg1;
- (void)registerForNotifications;
- (void)viewServiceWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_setConversation:(id)arg1;
- (void)transitionFromNewMessageToConversation;
- (_Bool)shouldDismissAfterSend;
- (void)setTextEntryContentsVisible:(_Bool)arg1;
- (_Bool)_shouldAllowCameraAttachments;
- (void)disableCameraAttachments;
- (void)setCanEditRecipients:(_Bool)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (_Bool)_insertMediaObject:(id)arg1;
- (void)dealloc;

@end
