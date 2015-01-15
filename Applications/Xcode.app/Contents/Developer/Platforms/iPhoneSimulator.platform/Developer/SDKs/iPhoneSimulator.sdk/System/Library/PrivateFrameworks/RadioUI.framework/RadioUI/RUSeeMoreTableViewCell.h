//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RadioUI/RUTableViewCell.h>

@class SKUICircleProgressIndicator, UILabel;

@interface RUSeeMoreTableViewCell : RUTableViewCell
{
    SKUICircleProgressIndicator *_activityIndicator;
    UILabel *_detailLabel;
    long long _seeMoreState;
}

+ (id)_detailLabelFontForSeeMoreState:(long long)arg1;
+ (double)defaultHeightForTraitCollection:(id)arg1;
@property(nonatomic) long long seeMoreState; // @synthesize seeMoreState=_seeMoreState;
- (void).cxx_destruct;
- (void)_updateForChangedState;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
