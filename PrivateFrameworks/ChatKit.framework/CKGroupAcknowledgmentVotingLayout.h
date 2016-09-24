/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout {
    NSArray * _ballotItems;
    int  _expandedSection;
    NSArray * _fromBallotItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _fromContentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _fromContentSize;
    BOOL  _isAnimatedLayoutChange;
    unsigned int  _layoutMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousCollapsedContentOffset;
}

@property (nonatomic, copy) NSArray *ballotItems;
@property (nonatomic) int expandedSection;
@property (nonatomic, retain) NSArray *fromBallotItems;
@property (nonatomic) struct CGPoint { double x1; double x2; } fromContentOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } fromContentSize;
@property (nonatomic) BOOL isAnimatedLayoutChange;
@property (nonatomic) unsigned int layoutMode;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousCollapsedContentOffset;

- (void).cxx_destruct;
- (void)_initializeBallotItems;
- (int)_numberOfBallots;
- (void)_setupAnimatedCollapsedLayout;
- (void)_setupCollapsedLayout;
- (void)_setupExpandedLayout;
- (BOOL)_shouldFillInFromCenter;
- (float)_totalBallotContainersWidth;
- (id)ballotItems;
- (void)cleanupAnimationCache;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (int)expandedSection;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (id)fromBallotItems;
- (struct CGPoint { double x1; double x2; })fromContentOffset;
- (struct CGSize { double x1; double x2; })fromContentSize;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)isAnimatedLayoutChange;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (unsigned int)layoutMode;
- (void)preapareForLayoutAnimationAroundSection:(int)arg1;
- (void)prepareLayout;
- (struct CGPoint { double x1; double x2; })previousCollapsedContentOffset;
- (void)setBallotItems:(id)arg1;
- (void)setExpandedSection:(int)arg1;
- (void)setFromBallotItems:(id)arg1;
- (void)setFromContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFromContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsAnimatedLayoutChange:(BOOL)arg1;
- (void)setLayoutMode:(unsigned int)arg1;
- (void)setPreviousCollapsedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end