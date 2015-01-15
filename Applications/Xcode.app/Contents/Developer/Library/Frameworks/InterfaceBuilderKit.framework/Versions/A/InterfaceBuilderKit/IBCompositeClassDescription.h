//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSString;

@interface IBCompositeClassDescription : NSObject <NSCopying, NSMutableCopying>
{
    NSDictionary *descriptions;
    NSString *className;
}

+ (id)compositeDescriptionOfClassNamed:(id)arg1;
- (long long)numberOfPartialClassDescriptions;
- (id)partialDescriptionDescribingToOneOutlet:(id)arg1;
- (id)partialDescriptionDescribingAction:(id)arg1;
- (BOOL)describesAction:(id)arg1;
- (BOOL)describesToOneOutlet:(id)arg1;
- (id)typeForAction:(id)arg1;
- (id)typeForToOneOutlet:(id)arg1;
- (id)toOneOutletNames;
- (id)actionNames;
- (id)relationshipInfosOfRelationshipType:(long long)arg1;
- (id)namedRelationsOfRelationshipType:(long long)arg1;
- (BOOL)describesNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (id)typeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (long long)minimumUserVisibilityLevel;
- (id)description;
- (id)superclassName;
- (id)className;
- (id)partialClassDescriptionsEnumeratorOrderedForDefinitionContention;
- (id)partialClassDescriptions;
- (id)documentLocalDescription;
- (id)partialClassDescriptionWithSource:(id)arg1;
- (id)partialDescriptionDescribingNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (id)compositedPartialDescription;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClassName:(id)arg1;
- (id)initWithClassName:(id)arg1 andDescriptions:(id)arg2;

@end
