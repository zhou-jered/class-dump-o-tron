//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HKSource, NSDate, NSDictionary, NSString, NSUUID;

@interface HKObject : NSObject <NSSecureCoding>
{
    NSUUID *_UUID;
    HKSource *_source;
    NSDictionary *_metadata;
    NSString *_sourceBundleIdentifier;
    NSDate *_creationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)_newDataObjectWithMetadata:(id)arg1 config:(CDUnknownBlockType)arg2;
@property(copy, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
- (void).cxx_destruct;
- (void)_setSource:(id)arg1;
@property(readonly) HKSource *source;
- (void)_setMetadata:(id)arg1;
@property(readonly, copy) NSDictionary *metadata;
- (void)_setUUID:(id)arg1;
@property(readonly) NSUUID *UUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_valueDescription;
- (id)description;
- (id)_validateConfiguration;
- (_Bool)validateForSaving:(id *)arg1;
- (void)_validateForCreation;
- (id)_init;
- (id)init;

@end
