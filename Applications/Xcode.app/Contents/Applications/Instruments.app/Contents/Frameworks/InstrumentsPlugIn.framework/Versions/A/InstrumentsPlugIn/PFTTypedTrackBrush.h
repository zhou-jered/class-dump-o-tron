//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/PFTPointTrackBrush.h>

@class NSArray;

@interface PFTTypedTrackBrush : PFTPointTrackBrush
{
    NSArray *_types;
}

- (void)drawAboveRun:(id)arg1 forInstrument:(id)arg2 inRect:(struct CGRect)arg3 visibleRect:(struct CGRect)arg4 usingScale:(struct CGSize)arg5 recordingHeadLocation:(double)arg6 inspectionHead:(double)arg7;
- (void)drawTrackSegment:(id)arg1 eventRange:(struct _NSRange)arg2 inRect:(struct CGRect)arg3;
- (void)dealloc;
- (id)initWithTypes:(id)arg1;

@end
