//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMLogItem.h"

@interface CMOnBodyStatus : CMLogItem
{
    int fResult;
    int fConfidence;
}

- (id)description;
@property(readonly, nonatomic) long long confidence;
@property(readonly, nonatomic) long long result;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3;

@end

