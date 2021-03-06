//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSEnvironment, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface APSTopicGroup : NSObject
{
    APSEnvironment *_environment;
    NSMutableDictionary *_hashesToEnabledTopics;
    NSMutableDictionary *_hashesToIgnoredTopics;
    NSMutableDictionary *_hashesToOpportunisticTopics;
    long long _category;
}

+ (void)populateHashDictionary:(id)arg1 withSet:(id)arg2;
@property(readonly, retain, nonatomic) NSString *logString;
@property(readonly, retain, nonatomic) NSDictionary *hashesToOpportunisticTopics;
@property(readonly, retain, nonatomic) NSDictionary *hashesToIgnoredTopics;
@property(readonly, retain, nonatomic) NSDictionary *hashesToEnabledTopics;
@property(readonly, retain, nonatomic) NSSet *opportunisticTopics;
@property(readonly, retain, nonatomic) NSSet *ignoredTopics;
@property(readonly, retain, nonatomic) NSSet *enabledTopics;
- (long long)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 pretend:(_Bool)arg4;
- (void)_logChangesFor:(id)arg1 oldTopics:(id)arg2 newTopics:(id)arg3;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1 category:(long long)arg2;

@end

