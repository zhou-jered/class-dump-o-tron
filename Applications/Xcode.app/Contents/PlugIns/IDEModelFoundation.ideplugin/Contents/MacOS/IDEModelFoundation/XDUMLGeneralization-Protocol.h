//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XDUMLDirectedRelationship.h"

@protocol XDUMLGeneralization <XDUMLDirectedRelationship>
- (void)setSpecific:(id <XDUMLClassifier>)arg1;
- (void)setGeneral:(id <XDUMLClassifier>)arg1;
- (void)remove;
- (id <XDUMLClassifier>)specific;
- (id <XDUMLClassifier>)general;
@end
