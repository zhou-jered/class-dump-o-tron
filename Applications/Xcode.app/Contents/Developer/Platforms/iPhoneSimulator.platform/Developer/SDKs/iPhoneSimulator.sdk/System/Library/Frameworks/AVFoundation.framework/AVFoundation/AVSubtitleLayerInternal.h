//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVSubtitleLayerInternal : NSObject
{
    AVPlayer *player;
    struct OpaqueFigSubtitleRenderer *renderer;
    NSDictionary *currentSubtitleSample;
    _Bool currentSubtitleSampleIsForced;
    _Bool nonForcedSubtitleDisplayEnabled;
    _Bool shouldObservePlayer;
    _Bool isObservingPlayer;
    _Bool hasPlayerToObserve;
    NSObject<OS_dispatch_queue> *serialQueue;
    _Bool isPresentationLayer;
    _Bool isOverscanSubtitleSupportEnabled;
    id delegate;
}

@end
