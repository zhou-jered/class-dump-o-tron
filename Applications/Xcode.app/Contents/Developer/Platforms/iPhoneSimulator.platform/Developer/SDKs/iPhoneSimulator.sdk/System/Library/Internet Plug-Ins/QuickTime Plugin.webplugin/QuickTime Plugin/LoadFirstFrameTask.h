//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickTime Plugin/FPVTask.h>

@class AVAsset, AVAssetImageGenerator, UIImage;

@interface LoadFirstFrameTask : FPVTask
{
    AVAsset *_avAsset;
    AVAssetImageGenerator *_generator;
    UIImage *_resultImage;
}

@property(readonly) UIImage *resultImage; // @synthesize resultImage=_resultImage;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (void)cleanupGenerator;
- (id)initWithAsset:(id)arg1;

@end
