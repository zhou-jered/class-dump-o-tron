//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class TSULinkedPointerSetEntry;

__attribute__((visibility("hidden")))
@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration>
{
    struct __CFDictionary *mDictionary;
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mTail;
}

- (id)array;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)insertFirstObject:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)hasObjects;
- (_Bool)containsObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)firstObject;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectEnumeratorAfterObject:(id)arg1;
- (id)reverseObjectEnumerator;
- (id)objectEnumerator;
- (void)dealloc;
- (id)init;
- (void)encodeToOwnedReferenceMessage:(RepeatedPtrField_a0d2dbe7 *)arg1 archiver:(id)arg2;
- (void)encodeToReferenceMessage:(RepeatedPtrField_a0d2dbe7 *)arg1 archiver:(id)arg2;

@end
