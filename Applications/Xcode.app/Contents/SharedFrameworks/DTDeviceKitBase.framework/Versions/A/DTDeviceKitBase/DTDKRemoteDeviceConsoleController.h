//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTDKRemoteDeviceToken, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface DTDKRemoteDeviceConsoleController : NSObject
{
    DTDKRemoteDeviceToken *_device;
    struct _AMDServiceConnection *_serviceRef;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_socketQueue;
    NSObject<OS_dispatch_source> *_consoleSource;
    unsigned long long _changeCount;
    _Bool _isInvalidating;
    struct DTDKCircularBuffer *_circularBuffer;
}

+ (id)controllerForDevice:(id)arg1;
@property(readonly) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
- (void).cxx_destruct;
@property(readonly, copy) NSString *consoleString;
- (void)clear;
- (void)reload;
- (void)invalidate;
- (void)dealloc;

@end

