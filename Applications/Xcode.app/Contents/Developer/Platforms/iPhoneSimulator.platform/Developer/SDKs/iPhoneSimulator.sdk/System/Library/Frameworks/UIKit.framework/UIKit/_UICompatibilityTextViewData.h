//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMHTMLElement, UIColor, UIDelayedAction, UIFont, UITextInteractionAssistant, UIView, UIWebDocumentView, WebFrame;

__attribute__((visibility("hidden")))
@interface _UICompatibilityTextViewData : NSObject
{
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    int m_marginTop;
    UIDelayedAction *m_selectionTimer;
    UIDelayedAction *m_longPressAction;
    _Bool m_editable;
    _Bool m_editing;
    _Bool m_becomesEditableWithGestures;
    _Bool m_reentrancyGuard;
    _Bool m_readyForScroll;
    _Bool m_hasExplicitTextAlignment;
    _Bool m_hasExplicitLineHeight;
    UITextInteractionAssistant *m_interactionAssistant;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    long long m_textAlignment;
    UIView *m_inputView;
    UIView *m_inputAccessoryView;
    double m_lineHeight;
    _Bool m_skipScrollContainingView;
    _Bool m_allowsEditingTextAttributes;
    _Bool m_usesAttributedText;
    _Bool m_clearsOnInsertion;
}

@end
