/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTableLayoutSwipeActionPullView : UIView {
    NSArray * _actions;
    UIView * _backgroundView;
    NSMutableArray * _buttons;
    unsigned int  _cellEdge;
    float  _confirmationThreshold;
    float  _currentOffset;
    <UICollectionViewTableLayoutSwipeActionPullViewDelegate> * _delegate;
    _UIFeedbackStatesBehavior * _feedbackBehavior;
    float  _openThreshold;
    float  _progressToConfirm;
    unsigned int  _state;
    BOOL  _swipeActionsDidChange;
}

@property (nonatomic, readonly) unsigned int cellEdge;
@property (nonatomic, readonly) float confirmationThreshold;
@property (nonatomic, readonly) float currentOffset;
@property (nonatomic) <UICollectionViewTableLayoutSwipeActionPullViewDelegate> *delegate;
@property (nonatomic) _UIFeedbackStatesBehavior *feedbackBehavior;
@property (nonatomic, readonly) BOOL hasActions;
@property (nonatomic, readonly) float openThreshold;
@property (nonatomic, readonly) UIColor *primaryActionColor;
@property (nonatomic, readonly) BOOL primaryActionIsDestructive;
@property (nonatomic, readonly) BOOL primaryActionResetsSwipedRow;
@property (nonatomic, readonly) UICollectionViewTableLayoutSwipeAction *primarySwipeAction;
@property (nonatomic) float progressToConfirm;
@property (nonatomic) unsigned int state;

- (void).cxx_destruct;
- (float)_directionalMultiplier;
- (unsigned int)_nextStateForPullView;
- (BOOL)_offsetMeetsConfirmationThreshold:(float)arg1 progress:(float*)arg2;
- (float)_progressToState:(unsigned int)arg1;
- (void)_rebuildButtons;
- (unsigned int)_swipeActionCount;
- (void)_tappedButton:(id)arg1;
- (unsigned int)cellEdge;
- (void)configureWithSwipeActions:(id)arg1;
- (float)confirmationThreshold;
- (float)currentOffset;
- (id)delegate;
- (id)description;
- (id)feedbackBehavior;
- (BOOL)hasActions;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithCellEdge:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)moveToOffset:(float)arg1 animated:(BOOL)arg2 usingSpringWithStiffnessFactor:(float)arg3 initialVelocity:(float)arg4;
- (float)openThreshold;
- (id)primaryActionColor;
- (BOOL)primaryActionIsDestructive;
- (BOOL)primaryActionResetsSwipedRow;
- (id)primarySwipeAction;
- (float)progressToConfirm;
- (void)resetView;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackBehavior:(id)arg1;
- (void)setProgressToConfirm:(float)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;

@end
