//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOStateTransitionFeedback : PBCodable <NSCopying>
{
    int _newValue;
    int _oldValue;
    int _stateType;
    struct {
        unsigned int newValue:1;
        unsigned int oldValue:1;
        unsigned int stateType:1;
    } _has;
}

@property(nonatomic) int newValue; // @synthesize newValue=_newValue;
@property(nonatomic) int oldValue; // @synthesize oldValue=_oldValue;
@property(nonatomic) int stateType; // @synthesize stateType=_stateType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNewValue;
@property(nonatomic) _Bool hasOldValue;
@property(nonatomic) _Bool hasStateType;

@end
