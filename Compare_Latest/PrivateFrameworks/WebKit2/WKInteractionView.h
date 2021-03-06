/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextInputPrivate-Protocol.h"
#import "UIWKInteractionViewProtocol-Protocol.h"
#import "UIWebFormAccessoryDelegate-Protocol.h"
#import "UIWebTouchEventsGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, UIColor, UIImage, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIWKTextInteractionAssistant, UIWebFormAccessory, UIWebScrollView;

@interface WKInteractionView : UIView <UIGestureRecognizerDelegate, UIWebTouchEventsGestureRecognizerDelegate, UITextInputPrivate, UIWebFormAccessoryDelegate, UIWKInteractionViewProtocol>
{
    struct RetainPtr<UIWebTouchEventsGestureRecognizer> _touchEventGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> _singleTapGestureRecognizer;
    struct RetainPtr<_UIWebHighlightLongPressGestureRecognizer> _highlightLongPressGestureRecognizer;
    UIWKTextInteractionAssistant *_textSelectionAssistant;
    UITextInputTraits *_traits;
    BOOL _canBeFirstResponder;
    UIWebFormAccessory *_accessory;
    id <UITextInputDelegate> _inputDelegate;
    BOOL _showingTextStyleOptions;
    UIWebScrollView *_scrollView;
    struct RefPtr<WebKit::WebPageProxy> _page;
    struct RetainPtr<_UIHighlightView> _highlightView;
    unsigned long long _latestTapHighlightID;
    BOOL _isTapHighlightIDValid;
}

@property(nonatomic) id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isAnyTouchOverActiveArea:(id)arg1;
- (BOOL)shouldIgnoreWebTouch;
- (void)_selectionChanged;
- (void)_stopAssistingNode;
- (void)_startAssistingNode;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingKeyboard;
- (void)takeTraitsFrom:(id)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)hasSelection;
- (id)fontForCaretSelection;
- (id)textColorForCaretSelection;
- (void)selectAll;
- (BOOL)hasContent;
- (void)setMarkedText:(id)arg1;
- (id)markedText;
- (id)wordRangeContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (void)moveForward:(unsigned int)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
@property(nonatomic) int selectionGranularity;
- (id)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(float)arg1;
- (BOOL)requiresKeyEvents;
- (struct CGRect)rectContainingCaretSelection;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (id)selectedDOMRange;
- (struct _NSRange)_markedTextNSRange;
- (struct CGRect)rectForNSRange:(struct _NSRange)arg1;
- (struct _NSRange)selectionRange;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)textInputTraits;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (void)_updateAccessory;
- (void)accessoryClear;
- (void)accessoryAutoFill;
- (void)accessoryTab:(BOOL)arg1;
- (void)accessoryDone;
- (void)changeSelectionWithGesture:(struct CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)inputAccessoryView;
- (void)_attemptClickAtLocation:(struct CGPoint)arg1;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (void)_singleTapRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_cancelInteraction;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_requiresKeyboardResetOnReload;
- (void)_didScroll;
- (void)_cancelLongPressGestureRecognizer;
- (void)_didGetTapHighlightForRequest:(unsigned long long)arg1 color:(const struct Color *)arg2 quads:(const Vector_59222031 *)arg3 topLeftRadius:(const struct IntSize *)arg4 topRightRadius:(const struct IntSize *)arg5 bottomLeftRadius:(const struct IntSize *)arg6 bottomRightRadius:(const struct IntSize *)arg7;
- (void)_webTouchEventsRecognized:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)setPage:(PassRefPtr_fd58944e)arg1;
- (void)setScrollView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) BOOL acceptsEmoji;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue;
@property(nonatomic) BOOL deferBecomingResponder;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) BOOL forceEnableDictation;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) int spellCheckingType;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;

@end

