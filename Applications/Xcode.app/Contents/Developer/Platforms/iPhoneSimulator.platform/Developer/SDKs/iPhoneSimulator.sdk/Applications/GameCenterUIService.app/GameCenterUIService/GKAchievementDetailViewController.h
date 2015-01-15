//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBubbleDetailViewController.h"

@class GKAchievement, GKAchievementIconView, GKHorizontalBubbleControlsView, GKLabel, GKTextBubbleControl, NSArray;

@interface GKAchievementDetailViewController : GKBubbleDetailViewController
{
    _Bool _hasEligibleFriends;
    _Bool _didFloatInBubbles;
    _Bool _didTransition;
    id <GKAchievementDetailDelegate> _delegate;
    GKAchievementIconView *_iconView;
    GKLabel *_titleLabel;
    GKLabel *_descriptionLabel;
    GKLabel *_progressLabel;
    GKHorizontalBubbleControlsView *_bubblesView;
    GKTextBubbleControl *_shareBubble;
    GKTextBubbleControl *_challengeBubble;
    GKLabel *_infoLabel;
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
    NSArray *_portraitConstraints;
    NSArray *_landscapeConstraints;
}

+ (id)achievementDetailWithAchievement:(id)arg1 localPlayerAchievement:(id)arg2 hasEligibleFriends:(_Bool)arg3;
+ (id)achievementDetailWithLocalAchievement:(id)arg1 hasEligibleFriends:(_Bool)arg2;
@property(nonatomic) _Bool didTransition; // @synthesize didTransition=_didTransition;
@property(nonatomic) _Bool didFloatInBubbles; // @synthesize didFloatInBubbles=_didFloatInBubbles;
@property(nonatomic) _Bool hasEligibleFriends; // @synthesize hasEligibleFriends=_hasEligibleFriends;
@property(retain, nonatomic) NSArray *landscapeConstraints; // @synthesize landscapeConstraints=_landscapeConstraints;
@property(retain, nonatomic) NSArray *portraitConstraints; // @synthesize portraitConstraints=_portraitConstraints;
@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(retain, nonatomic) GKLabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) GKTextBubbleControl *challengeBubble; // @synthesize challengeBubble=_challengeBubble;
@property(retain, nonatomic) GKTextBubbleControl *shareBubble; // @synthesize shareBubble=_shareBubble;
@property(retain, nonatomic) GKHorizontalBubbleControlsView *bubblesView; // @synthesize bubblesView=_bubblesView;
@property(retain, nonatomic) GKLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) GKLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
@property id <GKAchievementDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pushLeftBubble;
- (void)pushRightBubble;
- (void)didTouchShareBubble;
- (void)didTouchChallengeBubble;
- (void)animateOutBubbleWithFocus:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willAnimateAppearingWithBubbleFlow;
- (void)floatInBubbles;
- (void)hideBubbles;
- (void)configureForAchievements;
- (long long)desiredBubbles;
- (_Bool)shouldUseLandscapeConstraintsForViewSize:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithAchievement:(id)arg1 localAchievement:(id)arg2 hasEligibleFriends:(_Bool)arg3;

@end
