/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UICollectionViewCell.h>

#import "UIKBCacheableView-Protocol.h"

@class NSString, UIKBThemedView, UILabel;

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView>
{
    BOOL _beginsFirstPage;
    BOOL _endsLastPage;
    BOOL _isAtLeftEdge;
    UIKBThemedView *_themedView;
    UILabel *_label;
    NSString *_candidateText;
}

+ (float)widthForCandidateText:(id)arg1;
+ (float)height;
+ (id)font;
+ (id)collectionViewKind;
+ (id)reuseIdentifier;
@property(nonatomic) BOOL isAtLeftEdge; // @synthesize isAtLeftEdge=_isAtLeftEdge;
@property(nonatomic) BOOL endsLastPage; // @synthesize endsLastPage=_endsLastPage;
@property(nonatomic) BOOL beginsFirstPage; // @synthesize beginsFirstPage=_beginsFirstPage;
@property(copy, nonatomic) NSString *candidateText; // @synthesize candidateText=_candidateText;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL keepNonPersistent;
@property(readonly, nonatomic) float cachedWidth;
@property(readonly, nonatomic) BOOL cacheDeferable;
- (void)displayLayer:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)updateIsAtLeftEdgeState;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setCandidate:(id)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

