//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTDownloadableOperation.h>

@class DVTDownloadableIndex, NSURL;

@interface DVTDownloadableOperationRefreshIndex : DVTDownloadableOperation
{
    NSURL *_url;
    DVTDownloadableIndex *_refreshedIndex;
}

@property(retain) DVTDownloadableIndex *refreshedIndex; // @synthesize refreshedIndex=_refreshedIndex;
- (void).cxx_destruct;
- (void)downloadableOperationMain;
- (id)initWithURL:(id)arg1;

@end
