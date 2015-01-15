//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <lwawt/CMenuItem.h>

@class NSMenu;

@interface CMenu : CMenuItem
{
    NSMenu *fMenu;
}

- (id)initWithPeer:(struct _jobject *)arg1;
- (void)dealloc;
- (void)addJavaSubmenu:(id)arg1;
- (void)addJavaMenuItem:(id)arg1;
- (void)addNativeItem_OnAppKitThread:(id)arg1;
- (void)setJavaMenuTitle:(id)arg1;
- (void)setNativeMenuTitle_OnAppKitThread:(id)arg1;
- (void)addSeparator;
- (void)deleteJavaItem:(int)arg1;
- (void)deleteNativeJavaItem_OnAppKitThread:(id)arg1;
- (void)addNSMenuItemToMenu:(id)arg1;
- (id)menu;
- (void)setNativeEnabled_OnAppKitThread:(id)arg1;
- (id)description;

@end
