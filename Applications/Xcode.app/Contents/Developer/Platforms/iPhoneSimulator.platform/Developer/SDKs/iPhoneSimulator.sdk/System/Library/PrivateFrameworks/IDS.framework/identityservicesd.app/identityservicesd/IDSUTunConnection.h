//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSSocketPairConnectionDelegate.h"

@class IDSLocalDeliveryQueue, IDSSocketPairConnection, IMTimer, NSDate, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSUTunConnection : NSObject <IDSSocketPairConnectionDelegate>
{
    NSHashTable *_delegates;
    NSMutableArray *_sendingMessages;
    NSMutableDictionary *_statistics;
    IDSSocketPairConnection *_socketConnection;
    _Bool _openSocketCalled;
    _Bool _connectionSuspended;
    IMTimer *_timeoutTimer;
    IMTimer *_fallbackTimer;
    NSString *_identifier;
    IDSLocalDeliveryQueue *_deliveryQueue;
    double _rtt;
    unsigned long long _maxQueueSize;
    long long _priority;
    NSString *_cbuuid;
    NSString *_uniqueID;
    NSDate *_lastFallback;
    _Bool _isPeerAwake;
    _Bool _enabled;
    _Bool _needsHandshake;
    _Bool _isAlwaysConnected;
}

@property(nonatomic) _Bool isAlwaysConnected; // @synthesize isAlwaysConnected=_isAlwaysConnected;
@property(nonatomic) _Bool isPeerAwake; // @synthesize isPeerAwake=_isPeerAwake;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(nonatomic) unsigned long long maxQueueSize; // @synthesize maxQueueSize=_maxQueueSize;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)connectionBecameEmpty:(id)arg1;
- (void)connection:(id)arg1 didReceiveDataMessage:(id)arg2;
- (void)connectionDidClose:(id)arg1;
- (void)_dumpLogs;
- (void)_processIncomingDataMessage:(id)arg1;
- (void)_processMessage:(id)arg1 withSequenceNumberBlock:(CDUnknownBlockType)arg2;
- (void)_sendAckForMessage:(id)arg1;
- (long long)_socketToNiceCommand:(unsigned char)arg1;
- (void)flushAllMessages;
- (_Bool)_messageHasValidEncryptionStatus:(id)arg1;
- (id)_optionallyDecryptMessage:(id)arg1;
- (id)_encryptedMessageForMessage:(id)arg1;
- (void)_removeMessageFromStatistics:(id)arg1;
- (void)_addMessageToStatistics:(id)arg1;
- (void)_sendSocketMessage:(id)arg1 ignoreSequenceNumber:(_Bool)arg2;
- (void)_sendSocketMessage:(id)arg1;
- (void)_dequeueMessage;
- (void)_removeSocketPairMessage:(id)arg1 localMessage:(id)arg2;
- (void)_messageTimedOut:(id)arg1 localMessage:(id)arg2;
- (void)_timeoutTimerFired;
- (void)_resetTimeout;
- (void)_fallbackTimerFired;
- (void)_resetFallbackTimeout;
- (void)_performFallbackIfNecessary:(id)arg1;
- (double)_fallbackTimeout;
- (void)_clearLastFallbackWithReason:(id)arg1;
- (void)_connectivityChanged;
- (void)_calloutForIsEmpty;
- (void)_calloutForHasSpace;
@property(readonly, nonatomic) _Bool isConnected;
- (void)cancelMessageID:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)_startConnection;
- (id)_socketOptions;
- (_Bool)_isMagnetConnection;
- (void)_stopConnection;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)setDeviceBTUUID:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *queueStatistics;
@property(readonly, retain, nonatomic) NSDictionary *sendingMessageStatistics;
@property(readonly, nonatomic) _Bool hasSpaceForMessages;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)_isWiProxPeer;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 socketPriority:(long long)arg2 btUUID:(id)arg3 uniqueID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
