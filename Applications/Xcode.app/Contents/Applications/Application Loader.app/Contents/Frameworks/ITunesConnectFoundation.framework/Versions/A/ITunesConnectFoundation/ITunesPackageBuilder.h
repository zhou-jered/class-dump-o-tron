//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZAbstractWorker.h>

#import "ITunesPackageSource.h"

@class NSData, NSString;

@interface ITunesPackageBuilder : MZAbstractWorker <ITunesPackageSource>
{
    NSString *_username;
    NSString *_password;
    NSString *_providerShortName;
    NSString *_packagePath;
    NSString *_transport;
    NSData *_token;
}

@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void)setProviderShortName:(id)arg1;
- (id)providerShortName;
- (void)setTransport:(id)arg1;
- (id)transport;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)setPackagePath:(id)arg1;
- (id)packagePath;
- (void)dealloc;
- (id)init;

@end
