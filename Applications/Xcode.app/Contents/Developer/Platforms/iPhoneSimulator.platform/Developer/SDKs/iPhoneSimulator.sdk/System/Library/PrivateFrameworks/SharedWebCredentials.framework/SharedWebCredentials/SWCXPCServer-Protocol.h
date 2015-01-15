//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SWCXPCServer <NSObject>
- (void)show:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)logControl:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)addAllAppsWithReply:(void (^)(int))arg1;
- (void)setService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 mask:(unsigned int)arg4 flags:(unsigned int)arg5 reply:(void (^)(int, unsigned int))arg6;
- (void)removeService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 reply:(void (^)(int))arg4;
- (void)addService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 reply:(void (^)(int))arg4;
- (void)getInfoForService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)checkService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 reply:(void (^)(int, unsigned int, NSDictionary *))arg4;
@end
