//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "History.h"

@interface HistoryWK1 : History
{
}

- (void)populateVisitedLinksForWebView:(id)arg1;
- (void)webView:(id)arg1 updateHistoryTitle:(id)arg2 forURL:(id)arg3 inFrame:(id)arg4;
- (void)webView:(id)arg1 didPerformServerRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4;
- (void)webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4;
- (void)webView:(id)arg1 didNavigateWithNavigationData:(id)arg2 inFrame:(id)arg3;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_removeAllVisitedLinks;
- (void)_updateForWebView:(id)arg1 updates:(CDUnknownBlockType)arg2;
- (id)init;

@end
