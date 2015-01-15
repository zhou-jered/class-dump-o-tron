//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerInteractiveTransitioning.h"

@class NSIndexPath, NSString, PUMomentsZoomLevelManager, UICollectionView, UICollectionViewTransitionLayout;

@interface PUZoomableGridTransition : NSObject <UIViewControllerInteractiveTransitioning>
{
    UICollectionView *_collectionView;
    _Bool _interactive;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    unsigned long long _originZoomLevel;
    unsigned long long _targetZoomLevel;
    unsigned long long _transitionState;
    NSIndexPath *_anchorItemIndexPath;
    double _currentInteractiveProgress;
    UICollectionViewTransitionLayout *__transitionLayout;
    id <UIViewControllerContextTransitioning> _transitionContext;
    struct CGSize _currentInteractiveCenterOffset;
}

@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewTransitionLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
- (void)_setCurrentInteractiveCenterOffset:(struct CGSize)arg1;
@property(nonatomic) struct CGSize currentInteractiveCenterOffset; // @synthesize currentInteractiveCenterOffset=_currentInteractiveCenterOffset;
- (void)_setCurrentInteractiveProgress:(double)arg1;
@property(nonatomic) double currentInteractiveProgress; // @synthesize currentInteractiveProgress=_currentInteractiveProgress;
@property(retain, nonatomic) NSIndexPath *anchorItemIndexPath; // @synthesize anchorItemIndexPath=_anchorItemIndexPath;
@property(nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;
- (void)_setTargetZoomLevel:(unsigned long long)arg1;
@property(nonatomic) unsigned long long targetZoomLevel; // @synthesize targetZoomLevel=_targetZoomLevel;
- (void)_setOriginZoomLevel:(unsigned long long)arg1;
@property(nonatomic) unsigned long long originZoomLevel; // @synthesize originZoomLevel=_originZoomLevel;
@property(readonly, nonatomic) __weak PUMomentsZoomLevelManager *zoomLevelManager; // @synthesize zoomLevelManager=_zoomLevelManager;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
- (void).cxx_destruct;
- (void)_setTransitionState:(unsigned long long)arg1;
- (void)cancelInteractiveTransitionAnimated;
- (void)finishInteractiveTransitionAnimated;
- (void)updateInteractiveTransitionForProgress:(double)arg1 centerOffset:(struct CGSize)arg2;
- (void)startInteractiveTransition:(id)arg1;
- (id)initWithOriginLevel:(unsigned long long)arg1 targetLevel:(unsigned long long)arg2 zoomLevelManager:(id)arg3 interactive:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
