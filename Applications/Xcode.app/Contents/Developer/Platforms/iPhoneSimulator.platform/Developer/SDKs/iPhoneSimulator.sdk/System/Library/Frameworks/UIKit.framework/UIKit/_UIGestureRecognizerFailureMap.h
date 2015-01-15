//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerFailureMap : NSObject
{
    NSMutableArray *_gestureRecognizers;
    char *_failureMap;
    int _unmetFailureRequirementCount;
    int _unmetFailureDependentCount;
}

+ (void)buildFailureMapForGestureRecognizer:(id)arg1;
+ (void)buildFailureMapForGestureRecognizers:(id)arg1;
- (_Bool)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1;
@property(readonly) _Bool hasUnmetFailureRequirementsOrDependents;
- (void)gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2;
- (void)_queueRecognizersForResetIfFinished;
- (void)_gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2;
- (void)gestureRecognizerBecameDirty:(id)arg1;
- (void)gestureRecognizerDeallocated:(id)arg1;
- (id)description;
- (void)_rebuildFailureMapDefferingRelease;
- (void)rebuildFailureMap;
- (void)reloadFailureMap;
- (void)dealloc;
- (id)initWithRelatedGestures:(id)arg1;

@end
