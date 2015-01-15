//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLPlatformObject.h"

#import "CPLEngineStoreImplementation.h"

@class CPLPrequeliteVariable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL, PQLConnection;

@interface CPLPrequeliteStore : CPLPlatformObject <CPLEngineStoreImplementation>
{
    NSObject<OS_dispatch_queue> *_queue;
    PQLConnection *_db;
    NSURL *_dbURL;
    _Bool _configuringDB;
    NSMutableSet *_modifiedVariables;
    CPLPrequeliteVariable *_libraryVersionVar;
    CPLPrequeliteVariable *_userIdentifierVar;
    CPLPrequeliteVariable *_clientCacheIdentifierVar;
    CPLPrequeliteVariable *_clientCacheIdentifierAsKnownByClient;
    NSObject<OS_dispatch_queue> *_isClientInSyncWithClientCacheQueue;
    _Bool _isClientInSyncWithClientCache;
    _Bool _reentrencyGuard;
}

- (void).cxx_destruct;
- (id)status;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (_Bool)isClientInSyncWithClientCache;
- (_Bool)storeClientIsNotInSyncWithClientCacheWithError:(id *)arg1;
- (_Bool)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;
- (id)createNewClientCacheIdentifier;
- (_Bool)storeClientCacheIdentifier:(id)arg1 error:(id *)arg2;
- (id)clientCacheIdentifier;
- (_Bool)storeUserIdentifier:(id)arg1 error:(id *)arg2;
- (id)userIdentifier;
- (id)valueForGlobalVariable:(id)arg1;
- (_Bool)setValue:(id)arg1 forGlobalVariable:(id)arg2 error:(id *)arg3;
- (_Bool)addGlobalVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;
- (void)_cacheValue:(id)arg1 forVariable:(id)arg2;
- (id)pqlConnection;
- (id)createNewLibraryVersion;
- (_Bool)storeLibraryVersion:(id)arg1 withError:(id *)arg2;
- (id)libraryVersion;
- (void)performBarrierTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)closeWithError:(id *)arg1;
- (void)performWriteTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performReadTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)openWithError:(id *)arg1;
- (_Bool)_openWithError:(id *)arg1;
- (_Bool)_setupDBIfNeeded;
- (_Bool)_upgradeDB:(long long)arg1;
- (_Bool)_upgradeToVersion:(long long)arg1;
- (_Bool)_initializeDB;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
