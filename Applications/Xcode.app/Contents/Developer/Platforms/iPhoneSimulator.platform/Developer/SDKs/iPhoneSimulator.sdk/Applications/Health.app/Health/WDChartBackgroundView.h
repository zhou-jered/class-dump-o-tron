//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSNumber;

@interface WDChartBackgroundView : UIView
{
    _Bool _hideAverageLine;
    _Bool _hideMinMaxLabels;
    NSNumber *_maxValue;
    NSNumber *_minValue;
    NSNumber *_averageValue;
}

@property(nonatomic) _Bool hideMinMaxLabels; // @synthesize hideMinMaxLabels=_hideMinMaxLabels;
@property(nonatomic) _Bool hideAverageLine; // @synthesize hideAverageLine=_hideAverageLine;
@property(readonly, nonatomic) NSNumber *averageValue; // @synthesize averageValue=_averageValue;
@property(readonly, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(readonly, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
- (void).cxx_destruct;
- (void)setMinValue:(id)arg1 maxValue:(id)arg2 averageValue:(id)arg3;
- (id)init;

@end
