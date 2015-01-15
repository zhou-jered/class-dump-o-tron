//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardAbstractTriggeredSegue.h>

#import "NSCoding.h"

@class NSString;

@interface IBCocoaTouchStoryboardCustomSegue : IBUIStoryboardAbstractTriggeredSegue <NSCoding>
{
    NSString *_customSegueClassName;
    NSString *_customSegueClassModuleProvider;
}

+ (void)populatePrototypes:(id)arg1 inStoryboard:(id)arg2 forSegueFromObject:(id)arg3 toObject:(id)arg4 withTrigger:(id)arg5;
+ (id)prototypeTriggeredSeguesForDestination:(id)arg1 inStoryboard:(id)arg2;
+ (id)customSegueSubclassesForDocument:(id)arg1;
+ (id)builtInSegueClasses;
+ (id)ibDefaultImageForInstance:(id)arg1;
+ (id)classIdentifier;
+ (id)menuLabelForConnection:(id)arg1;
+ (id)ibKeyPathsAcceptingModuleNameBackfill;
+ (double)displayOrderPriority;
@property(copy) NSString *customSegueClassModuleProvider; // @synthesize customSegueClassModuleProvider=_customSegueClassModuleProvider;
@property(copy) NSString *customSegueClassName; // @synthesize customSegueClassName=_customSegueClassName;
- (void).cxx_destruct;
- (id)missingComponents;
- (id)badgeImage;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (id)instantiateSegueTemplate;
- (id)displayDescriptionInDocument:(id)arg1;
@property(copy) NSString *customSegueClassModule;
- (id)keyPathsAffectingCustomSegueClassModule;
- (void)setCustomSegueFormattedClassSymbol:(id)arg1;
- (id)customSegueFormattedClassSymbol;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEqualToPrototype:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
