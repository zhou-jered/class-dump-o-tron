//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMapTable;

@interface GEOSearchRequester : NSObject
{
    NSMapTable *_pendingSearches;
    NSLock *_pendingSearchesLock;
}

+ (id)sharedSearchRequester;
- (void)cancelSearch:(id)arg1;
- (void)search:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(_Bool)arg3 finished:(CDUnknownBlockType)arg4 refinement:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7 isCompletions:(_Bool)arg8;
- (void)search:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(_Bool)arg3 finished:(CDUnknownBlockType)arg4 refinement:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (void)completions:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(_Bool)arg3 finished:(CDUnknownBlockType)arg4 refinement:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (void)search:(id)arg1 useBackgroundConnection:(_Bool)arg2 finished:(CDUnknownBlockType)arg3 refinement:(CDUnknownBlockType)arg4 networkActivity:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)search:(id)arg1 finished:(CDUnknownBlockType)arg2 refinement:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end
