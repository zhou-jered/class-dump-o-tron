//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityElement.h"

@interface UIAccessibilityElementKBEmoji : UIAccessibilityElement
{
    id _emoji;
    unsigned long long _emojiIndex;
    id _emojiPage;
}

@property(retain, nonatomic) id emojiPage; // @synthesize emojiPage=_emojiPage;
@property(nonatomic) unsigned long long emojiIndex; // @synthesize emojiIndex=_emojiIndex;
@property(retain, nonatomic) id emoji; // @synthesize emoji=_emoji;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;

@end
