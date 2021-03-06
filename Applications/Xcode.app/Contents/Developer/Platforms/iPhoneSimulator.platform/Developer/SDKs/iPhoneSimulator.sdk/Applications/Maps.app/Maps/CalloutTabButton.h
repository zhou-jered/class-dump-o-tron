//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSString, UIColor, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CalloutTabButton : UIControl
{
    UIView *_highlightView;
    UIColor *_cutoutColor;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    NSArray *_lastConstraints;
    _Bool _initialLabelPositioning;
    _Bool _needsLargerBottomMarginBelowTitle;
}

+ (id)button;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (void)setHighlighted:(_Bool)arg1;
- (void)setAttributedTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *title;
- (void)tintColorDidChange;
- (void)sizeToFit;
- (struct CGSize)intrinsicContentSize;
- (id)viewForBaselineLayout;
- (void)_mapkit_setCalloutAlignedToDetailView:(_Bool)arg1;
- (_Bool)_mapkit_calloutShouldAlignToDetailBaseline;
- (_Bool)_mapkit_calloutShouldUseIntrinsicContentSize;
- (_Bool)_mapkit_shouldFillCalloutHeight;
- (void)_mapkit_setCalloutBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

