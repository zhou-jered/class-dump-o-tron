//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, SBVoiceOverTouchRotorKnob, UILabel, _UIBackdropView;

@interface SBVoiceOverTouchRotorDisplay : UIView
{
    SBVoiceOverTouchRotorKnob *_rotorKnob;
    UILabel *_titleLabel;
    UILabel *_stagingTitleLabel;
    NSTimer *_fadeTimer;
    _Bool _wasRotorMovementClockwise;
    _UIBackdropView *_backdropView;
}

- (void)hide;
- (void)show;
- (void)setTitle:(id)arg1;
- (void)updateRotorPosition:(_Bool)arg1;
- (void)setRotorItemCount:(long long)arg1;
- (void)resetRotorPosition;
- (void)reorientHUDIfNeeded:(_Bool)arg1;
- (void)orientationChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
