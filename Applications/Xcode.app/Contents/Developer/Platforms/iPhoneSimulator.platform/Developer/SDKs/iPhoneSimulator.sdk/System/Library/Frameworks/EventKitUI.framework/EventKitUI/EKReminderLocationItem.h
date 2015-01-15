//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKStructuredLocation, NSDictionary;

@interface EKReminderLocationItem : NSObject
{
    _Bool _isLocationBeingDetermined;
    int _type;
    EKStructuredLocation *_location;
    NSDictionary *_addressDictionary;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool isLocationBeingDetermined; // @synthesize isLocationBeingDetermined=_isLocationBeingDetermined;
@property(retain, nonatomic) NSDictionary *addressDictionary; // @synthesize addressDictionary=_addressDictionary;
@property(retain, nonatomic) EKStructuredLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)reset;
- (id)stringForSubtitle;
- (id)label;
- (id)description;

@end
