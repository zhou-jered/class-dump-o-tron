//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTLocale;

@protocol IDELocalizationFileReference <NSObject>
- (void)addToTargetDefaultResourcesBuildPhase:(id <IDEBlueprint>)arg1;
- (void)wrapInVariantGroupForLocalization:(DVTLocale *)arg1 completionBlock:(void (^)(BOOL, NSError *, DVTFilePath *))arg2;
@end
