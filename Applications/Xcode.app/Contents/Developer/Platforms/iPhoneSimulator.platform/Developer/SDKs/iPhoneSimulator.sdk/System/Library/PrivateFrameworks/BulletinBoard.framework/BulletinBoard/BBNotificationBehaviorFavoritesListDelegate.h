//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPredicateDelegate.h"

@class NSString;

@interface BBNotificationBehaviorFavoritesListDelegate : NSObject <ABPredicateDelegate>
{
    CDUnknownBlockType _handlerBlock;
}

- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (void)dealloc;
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
