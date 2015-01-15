//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "AAUICredentialRecoveryPresentationDelegate.h"
#import "UIApplicationDelegate.h"

@class AAUICredentialRecoveryController, NSString, NSXPCConnection, UIViewController, UIWindow;

@interface AAUICredentialRecoveryDialogAppDelegate : UIResponder <UIApplicationDelegate, AAUICredentialRecoveryPresentationDelegate>
{
    AAUICredentialRecoveryController *_credentialRecoveryController;
    long long _orientation;
    UIViewController *_rootViewController;
    NSXPCConnection *_listenerConnection;
    id <AACredentialRecoveryDialogDelegate> _authPluginProxy;
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_disconnectFromListener;
- (void)_connectToListener;
- (void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
- (void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;
- (void)_remoteSheetDidEnd;
- (void)_endRemoteSheetWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)hackCanShowAlertImplementationForApplication:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
