//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DYMobileAppIconCache : NSObject
{
    struct dispatch_queue_s *_fetchQueue;
    struct dispatch_queue_s *_accessQueue;
    NSMutableDictionary *_identifierToMasterIconMap;
    NSMutableDictionary *_identifierToSmallIconMap;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)smallDefaultMobileAppIcon;
+ (id)defaultMobileAppIcon;
+ (id)sharedMobileAppIconCache;
- (void).cxx_destruct;
- (id)smallIconForIdentifier:(id)arg1;
- (id)iconForIdentifier:(id)arg1;
- (id)cacheIconsForIdentifiers:(id)arg1 device:(id)arg2 force:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end
