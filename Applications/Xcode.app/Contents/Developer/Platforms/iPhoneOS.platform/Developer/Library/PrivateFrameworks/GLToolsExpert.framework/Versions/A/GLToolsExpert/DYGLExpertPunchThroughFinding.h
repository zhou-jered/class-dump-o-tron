//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertFinding.h>

@interface DYGLExpertPunchThroughFinding : DYGLExpertFinding
{
    unsigned int _punchThroughReasons;
}

@property(readonly, nonatomic) unsigned int punchThroughReasons; // @synthesize punchThroughReasons=_punchThroughReasons;
- (void)generateRecommendation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPunchThroughReasons:(unsigned int)arg1 withConfidence:(float)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
