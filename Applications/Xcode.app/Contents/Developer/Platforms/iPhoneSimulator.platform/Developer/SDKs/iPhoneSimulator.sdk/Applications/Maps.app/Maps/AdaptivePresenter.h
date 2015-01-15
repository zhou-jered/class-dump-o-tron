//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Presenter.h"

@class AdaptivePresenterChoice, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AdaptivePresenter : Presenter
{
    AdaptivePresenterChoice *_defaultChoice;
    NSMutableArray *_overrides;
    id <TraitsChangeObserving> _traitsObservingSource;
    AdaptivePresenterChoice *_currentChoice;
    _Bool _mustRepresentForTraitsChange;
    CDUnknownBlockType _pendingPresentationCompletion;
    Presenter *_currentChildPresenter;
    CDUnknownBlockType _willMoveToNewPresenterHandler;
}

+ (id)modalFormSheetWhenPossibleForViewController:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
+ (id)modalOrPopoverPresenterForViewController:(id)arg1 modalPresentationStyle:(long long)arg2 adaptivePresentationStyle:(long long)arg3 dismissalBlock:(CDUnknownBlockType)arg4;
+ (id)modalOrPopoverPresenterForViewController:(id)arg1 modalPresentationStyle:(long long)arg2 dismissalBlock:(CDUnknownBlockType)arg3;
+ (id)modalOrPopoverPresenterForViewController:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
+ (id)placeCardPresenterForContentViewController:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType willMoveToNewPresenterHandler; // @synthesize willMoveToNewPresenterHandler=_willMoveToNewPresenterHandler;
@property(readonly, nonatomic) Presenter *currentChildPresenter; // @synthesize currentChildPresenter=_currentChildPresenter;
- (void).cxx_destruct;
- (_Bool)isPresentingUsingPresenterOfClass:(Class)arg1;
- (id)currentChildPresenterIfOfClass:(Class)arg1;
- (void)_performDismissalAnimated:(_Bool)arg1;
- (void)_didDismiss;
- (void)_didDismissChildPresenter:(id)arg1;
- (void)_representIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performPresentationOfViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_newChildPresenterFromChoice:(id)arg1;
- (id)_choiceMatchingTraitsForSource:(id)arg1;
- (id)_choiceMatchingCurrentTraits;
- (_Bool)_traitsConditionIsMatching:(id)arg1 fromTraitsSource:(id)arg2;
- (id)choiceForPresentingFromViewController:(id)arg1;
- (_Bool)presentationFromViewController:(id)arg1 matchesOrWillMatchChoice:(id)arg2;
- (_Bool)presentationMatchesChoice:(id)arg1;
- (void)removeOverrideForCondition:(id)arg1;
- (id)defaultChoice;
- (id)when:(id)arg1 usePresenterOfClass:(Class)arg2;
- (id)when:(id)arg1 usePresenterCreatedFromBlock:(CDUnknownBlockType)arg2 opaque:(_Bool)arg3;
- (id)when:(id)arg1 usePresenterCreatedFromBlock:(CDUnknownBlockType)arg2;
- (id)initWithPresentedViewController:(id)arg1 defaultPresenterClass:(Class)arg2 dismissalBlock:(CDUnknownBlockType)arg3;
- (id)initWithPresentedViewController:(id)arg1 defaultPresenterCreationBlock:(CDUnknownBlockType)arg2 opaque:(_Bool)arg3 dismissalBlock:(CDUnknownBlockType)arg4;
- (id)initWithPresentedViewController:(id)arg1 defaultPresenterCreationBlock:(CDUnknownBlockType)arg2 dismissalBlock:(CDUnknownBlockType)arg3;

@end
