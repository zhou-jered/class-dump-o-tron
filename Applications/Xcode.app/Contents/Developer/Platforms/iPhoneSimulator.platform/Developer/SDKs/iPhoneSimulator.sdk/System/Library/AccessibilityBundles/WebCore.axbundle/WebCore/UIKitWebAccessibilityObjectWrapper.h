//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/__UIKitWebAccessibilityObjectWrapper_super.h>

@interface UIKitWebAccessibilityObjectWrapper : __UIKitWebAccessibilityObjectWrapper_super
{
}

+ (void)initialize;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_axSelectedTrait;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axAdjustableTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axWebContentTrait;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByTableTrait;
- (unsigned long long)_axContainedByListTrait;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axLinkTrait;
- (struct CGRect)bounds;
- (void)postFocusChangeNotification;
- (void)_repostFocusChangeNotification;
- (_Bool)_accessibilityIsScrollable;
- (struct CGPoint)accessibilityActivationPoint;
- (struct _NSRange)_accessibilitySelectedNSRangeForObject;
- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;
- (id)_accessibilityApplication;
- (struct CGRect)accessibilityFrame;
- (struct CGRect)accessibilityFrameForScrolling;
- (_Bool)_accessibilityVisiblePointHonorsScreenBounds;
- (id)_wk2AccessibilityParent;
- (void)_accessibilityUnregister;
- (_Bool)_accessibilityShouldReleaseAfterUnregistration;
- (id)screenReaderVersion;
- (_Bool)isScreenReaderRunning;
- (void)postValueChangedNotification;
- (void)postScreenChangeNotification;
- (void)postLayoutChangeNotification;
- (void)postChildrenChangedNotification;
- (void)postInvalidStatusChangedNotification;
- (void)postLoadCompleteNotification;
- (void)_repostLoadCompleteNotification;
- (void)postSelectedTextChangeNotification;
- (void)_repostWebSelectionChange;
- (void)_repostWebNotificaton:(id)arg1;
- (void)postLiveRegionCreatedNotification;
- (void)postLiveRegionChangeNotification;
- (void)postScrollStatusChangeNotification;
- (id)_accessibilityMakeScrollStatus:(struct CGRect)arg1 scrollPosition:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (id)_accessibilityScrollStatus;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)_performPostScrollStatus:(id)arg1;
- (id)accessibilityIdentifier;
- (void)_performLiveRegionUpdate;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (void)_accessibilityModifySelection:(id)arg1 increase:(_Bool)arg2;
- (unsigned long long)accessibilityTraits;
- (_Bool)_accessibilityShouldSpeakMathEquationTrait;
- (id)accessibilityMathEquation;
- (id)_accessibilityProcessRootEquation;
- (id)accessibilityLabel;
- (_Bool)_accessibilityUsesParentLinkLabel;
- (void)_accessibilityDetermineIfShouldUseParentLinkLabel;
- (long long)_accessibilityChildElementCount;
- (id)ariaLandmarkRoleDescription;
- (id)description;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilitySpeechHint;
- (id)accessibilityMathType;
- (_Bool)accessibilityIsMathTopObject;
- (id)accessibilityMathPrescripts;
- (id)accessibilityMathPostscripts;
- (id)accessibilityMathFencedCloseString;
- (id)accessibilityMathFencedOpenString;
- (id)accessibilityMathOverObject;
- (id)accessibilityMathUnderObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathRootIndexObject;
- (id)accessibilityURL;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (id)accessibilityPlaceholderValue;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)accessibilityPostProcessHitTest:(struct CGPoint)arg1;
- (id)_accessibilityMathEquationRootObject;
- (_Bool)accessibilityCanFuzzyHitTest;
- (struct _NSRange)accessibilityRowRange;
- (struct _NSRange)_accessibilityCheckRowRangeForTrait:(unsigned long long)arg1;
- (_Bool)_accessibilityScrollToVisible;
- (_Bool)_accessibilityAlwaysSpeakTableHeaders;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityDOMAttributes;
- (id)_accessibilityUserTestingElementBaseType;
- (_Bool)_accessibilitySpeakThisCanBeHighlighted;
- (id)_accessibilitySpeakThisString;
- (_Bool)_accessibilityIsSpeakThisElement;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityTextMarkerForPosition:(long long)arg1;
- (_Bool)_isIBooks;
- (id)accessibilityLanguage;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (_Bool)accessibilityActivate;
- (id)accessibilityPath;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)_isCheckBox;
- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityLinePosition:(_Bool)arg1 withMarker:(id)arg2;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityMarkerPosition:(_Bool)arg1 withMarker:(id)arg2;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)_accessibilityConvertTextMarkersToDataArray:(id)arg1;
- (id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1;
- (_Bool)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;
- (_Bool)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;
- (_Bool)_accessibilityIsLastSibling;
- (_Bool)_accessibilityIsFirstSibling;
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1;
- (_Bool)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3;
- (_Bool)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3 sawAXElement:(_Bool *)arg4;
- (_Bool)isAccessibilityElement;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1 originalElement:(id)arg2;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (id)accessibilityContainer;
- (_Bool)_accessibilityIsFrameOutOfBounds;
- (id)_accessibilityWebDocumentView;
- (id)_accessibilityWebPageObject;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (id)_accessibilityRoleDescription;
- (unsigned int)_accessibilityContextId;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (id)_accessibilityWebPageParent;
- (_Bool)_axIsWebKit2;
- (id)_accessibilityParentView;
- (_Bool)_prepareAccessibilityCall;

@end
