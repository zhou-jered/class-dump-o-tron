//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADBannerViewDelegate.h"

@class ADBannerView, UIViewController;

@protocol ADBannerViewInternalDelegate <ADBannerViewDelegate>

@optional
- (void)bannerViewShouldResumeMedia:(ADBannerView *)arg1;
- (void)bannerViewShouldPauseMedia:(ADBannerView *)arg1;
- (UIViewController *)viewControllerForStoryboardPresentationFromBannerView:(ADBannerView *)arg1;
@end
