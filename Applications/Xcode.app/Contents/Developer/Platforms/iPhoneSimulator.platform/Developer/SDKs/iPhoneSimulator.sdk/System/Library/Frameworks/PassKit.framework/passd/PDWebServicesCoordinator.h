//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDDatabaseManagerWebServicesDelegate.h"
#import "PDNetworkTaskDelegate.h"
#import "PDPushNotificationConsumer.h"

@class NSMutableDictionary, NSSet, NSString, PDCardFileManager, PDDatabaseManager, PDNetworkTaskManager, PDPushNotificationManager;

@interface PDWebServicesCoordinator : NSObject <PDNetworkTaskDelegate, PDDatabaseManagerWebServicesDelegate, PDPushNotificationConsumer>
{
    id <PDWebServicesCoordinatorDelegate> _delegate;
    NSSet *_pushTopics;
    PDCardFileManager *_cardFileManager;
    PDDatabaseManager *_databaseManager;
    PDPushNotificationManager *_pushNotificationManager;
    PDNetworkTaskManager *_taskManager;
    NSMutableDictionary *_taskToHandlerMap;
}

+ (void)initialize;
+ (void)initializeConfigurationDefaults;
@property(readonly, nonatomic) PDNetworkTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (void)_updatePassTypeID:(id)arg1;
- (void)_scheduleUpdateForPassTypeID:(id)arg1 afterDate:(id)arg2;
- (void)_cancelWhatChangedTasksForPassTypeID:(id)arg1;
- (void)_cancelAutomaticUpdateTasksForPassTypeID:(id)arg1 serialNumber:(id)arg2;
- (void)_cancelAllTasksForPassTypeID:(id)arg1 serialNumber:(id)arg2;
- (void)_getPassTask:(id)arg1 gotResult:(id)arg2;
- (void)_getSerialNumbersTask:(id)arg1 gotResult:(id)arg2;
- (void)_whatChangedTaskSucceeded:(id)arg1;
- (void)_registrationTaskSucceeded:(id)arg1;
- (void)_registerWithSerialNumber:(id)arg1 authToken:(id)arg2 webService:(id)arg3;
- (void)_recalculatePushTopics;
- (void)_invokeAndClearHandlerForTask:(id)arg1 withResult:(_Bool)arg2;
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;
- (void)task:(id)arg1 encounteredError:(id)arg2;
- (void)taskFailed:(id)arg1;
- (void)taskSucceeded:(id)arg1;
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;
- (void)task:(id)arg1 gotResult:(id)arg2;
- (id)pushNotificationTopics;
- (void)handlePushNotificationForTopic:(id)arg1;
- (void)applyPushNotificationToken:(id)arg1;
- (void)handlePushDisabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3;
- (void)handlePushEnabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3;
- (void)handleModification:(id)arg1 webService:(id)arg2 pushEnabled:(_Bool)arg3 source:(long long)arg4;
- (void)handleDeletion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(_Bool)arg4;
- (void)handleInsertion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(_Bool)arg4 source:(long long)arg5;
- (void)nukeTasks;
- (void)updateCardWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)connect;
- (void)dealloc;
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 cardFileManager:(id)arg3 delegate:(id)arg4;
- (id)_nextUpdateDateWithLastUpdateDate:(id)arg1 rateLimitLevel:(long long)arg2;
- (long long)_rateLimitLevelForFrequencyScore:(double)arg1;
- (double)_updatedFrequencyScoreForScore:(double)arg1 lastPushDate:(id)arg2 zeroInterval:(double)arg3;
- (double)_zeroIntervalForPassTypeID:(id)arg1;
- (id)_userNotificationParametersForPassTypeID:(id)arg1;
- (void)_unregisterPassesOfType:(id)arg1;
- (void)_presentUnregistrationAlertForPassTypeID:(id)arg1;
- (void)_aggdLogWebServiceErrorCode:(long long)arg1 passTypeID:(id)arg2;
- (void)_aggdLogTaskErrorCode:(long long)arg1 passTypeID:(id)arg2;
- (void)_aggdLogTaskWarningCode:(long long)arg1 passTypeID:(id)arg2;
- (void)reportWarnings:(id)arg1 webService:(id)arg2 logToService:(_Bool)arg3;
- (void)reportError:(id)arg1 webService:(id)arg2 logToService:(_Bool)arg3;
- (void)reportAbandonedTask:(id)arg1 passTypeID:(id)arg2;
- (void)reportMissingLastModifiedForSerialNumber:(id)arg1 webService:(id)arg2;
- (void)reportIgnoredIfModifiedSince:(id)arg1 forSerialNumber:(id)arg2 webService:(id)arg3;
- (void)reportUnchangedPassForServerRequestedUpdateTask:(id)arg1;
- (void)reportPushWithNoSerialNumbersFromTasks:(id)arg1;
- (void)reportUnmodifiedTag:(id)arg1 withRequestedSerialNumbers:(id)arg2 forWebService:(id)arg3;
- (void)reportMissingTagWithRequestedSerialNumbers:(id)arg1 forWebService:(id)arg2;
- (void)reportUpdateRequestForNonPushEnabledSerialNumber:(id)arg1 forWebService:(id)arg2;
- (void)reportPushRateLimitLevel:(long long)arg1 forPassTypeID:(id)arg2;
- (void)resetPushFrequencyStateForPassTypeID:(id)arg1;
- (void)adjustStateForIncomingPushNotification:(id)arg1 andComputeNextUpdateDate:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
