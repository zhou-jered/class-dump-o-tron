//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRStrataDataSource.h"

@class NSMutableArray, NSString;

@interface XRDTraceLibraryBrushDataSource : NSObject <XRStrataDataSource>
{
    NSMutableArray *_libraries;
}

- (double)widthOfBlockGraphForRun:(id)arg1 usingScale:(struct CGSize)arg2;
- (struct XRPathAttribute)run:(id)arg1 attributeForState:(unsigned long long)arg2 graphAtIndex:(long long)arg3;
- (void)run:(id)arg1 userFocusedOnPoint:(struct XRGraphPoint *)arg2 forInspectionTimeStamp:(unsigned long long)arg3;
- (id)run:(id)arg1 colorForGraphAtIndex:(long long)arg2;
- (void)run:(id)arg1 provideLabel:(id *)arg2 andLabelPosition:(struct XRGraphPoint *)arg3 forLabelIndex:(long long)arg4 forInspectionTimeStamp:(unsigned long long)arg5 graphAtIndex:(long long)arg6;
- (long long)run:(id)arg1 numberOfLabelsForPoint:(struct XRGraphPoint *)arg2 forInspectionTimeStamp:(unsigned long long)arg3 graphAtIndex:(long long)arg4;
- (struct XRStrataGroup *)run:(id)arg1 strataGroupForPoint:(struct XRGraphPoint *)arg2 graphAtIndex:(long long)arg3;
- (void)run:(id)arg1 providePoints:(struct XRGraphPoint **)arg2 count:(long long *)arg3 graphSequence:(id)arg4 forTimeRange:(struct XRTimeRange)arg5 minimumInterval:(unsigned long long)arg6 graphAtIndex:(long long)arg7;
- (id)run:(id)arg1 graphedDataKeypath:(id *)arg2;
- (unsigned long long)numberOfGraphsForRun:(id)arg1;
- (id)graphStyleForRun:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
