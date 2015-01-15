//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PSUsageBundleApp, PSUsageBundleCategory;

@protocol PSStorageReporting <NSObject>
- (_Bool)allowDeletionForCategory:(PSUsageBundleCategory *)arg1;
- (NSArray *)usageBundleApps;

@optional
- (void)usageBundleApp:(PSUsageBundleApp *)arg1 willDisplaySpecifier:(id *)arg2;
- (_Bool)deleteDataForCategory:(PSUsageBundleCategory *)arg1 withError:(id *)arg2;
- (float)sizeForCategory:(PSUsageBundleCategory *)arg1;
- (Class)usageDetailControllerClassForUsageBundleApp:(PSUsageBundleApp *)arg1;
@end
