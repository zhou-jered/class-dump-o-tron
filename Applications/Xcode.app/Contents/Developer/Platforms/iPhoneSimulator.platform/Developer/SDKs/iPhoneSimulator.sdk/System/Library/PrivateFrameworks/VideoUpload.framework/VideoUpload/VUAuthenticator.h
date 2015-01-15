//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JSONHTTPRequestDelegate.h"

@class JSONHTTPRequest, NSString;

@interface VUAuthenticator : NSObject <JSONHTTPRequestDelegate>
{
    long long _authenticatorState;
    NSString *_accountName;
    JSONHTTPRequest *_authenticationRequest;
}

+ (id)sharedAuthenticator;
@property(readonly, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(readonly, nonatomic) long long authenticatorState; // @synthesize authenticatorState=_authenticatorState;
- (void).cxx_destruct;
- (void)_notifyFailure;
- (void)_notifyStateChange;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveObject:(id)arg2;
- (void)invalidateAuthentication;
- (id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2;
- (void)loadCredentials;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
