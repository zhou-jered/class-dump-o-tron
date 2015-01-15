//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRPowerStreamDefinition.h"

@class NSFormatter;

@interface XRStateStreamDefinition : XRPowerStreamDefinition
{
    struct XRMeasurementStreamColumnLabel *_stateLabels;
    unsigned char _stateLabelCount;
    NSFormatter *_formatter;
}

- (void).cxx_destruct;
- (unsigned long long)columnsInDataStreamCount;
- (id)formatterForColumn:(unsigned long long)arg1;
- (id)labelForColumn:(unsigned long long)arg1;
- (id)labelForFloatValue:(double)arg1 forColumnIndex:(unsigned long long)arg2;
- (id)initWithDefinition:(id)arg1;

@end
