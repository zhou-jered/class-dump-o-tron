//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZITunesProducerServiceClient.h>

@class NSString;

@interface MZWebServiceReportUploadFailureToApple : MZITunesProducerServiceClient
{
    NSString *_failureLog;
    NSString *_userNote;
}

- (id)completedMessage;
- (id)runningMessage;
- (id)initialMessage;
- (id)operationMethod;
- (id)userNote;
- (void)setUserNote:(id)arg1;
- (id)failureLog;
- (void)setFailureLog:(id)arg1;
- (id)generateArguments;
- (void)dealloc;

@end
