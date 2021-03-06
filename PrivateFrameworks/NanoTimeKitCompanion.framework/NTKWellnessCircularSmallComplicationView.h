/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView {
    NSMutableArray * _ringsFillFractions;
    NTKRingsAndDotsView * _ringsView;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (float)_ringDiameter;
- (float)_ringGapWidth;
- (float)_ringStrokeWidth;
- (void)_setLayoutEmptyRingsNoDot;
- (void)_updateForTemplateChange;
- (BOOL)_wantsPlatter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;

@end
