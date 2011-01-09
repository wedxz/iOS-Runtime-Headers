/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODDFillColorList;



@interface ODDColorTransformStyleLabel : NSObject 
{
    ODDFillColorList *mFillColors;
    ODDFillColorList *mLineColors;
    ODDFillColorList *mEffectColors;
    ODDFillColorList *mTextLineColors;
    ODDFillColorList *mTextFillColors;
    ODDFillColorList *mTextEffectColors;
}


- (void)dealloc;
- (void)setLineColors:(id)arg1;
- (void)setTextLineColors:(id)arg1;
- (void)setTextEffectColors:(id)arg1;
- (id)fillColors;
- (void)setFillColors:(id)arg1;
- (id)lineColors;
- (id)effectColors;
- (void)setEffectColors:(id)arg1;
- (id)textLineColors;
- (id)textFillColors;
- (void)setTextFillColors:(id)arg1;
- (id)textEffectColors;
- (void)applyToShapeStyle:(id)arg1 index:(NSUInteger)arg2 count:(NSUInteger)arg3 state:(id)arg4;

@end