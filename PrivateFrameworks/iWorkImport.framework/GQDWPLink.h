/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStyle;



@interface GQDWPLink : GQDWPInlineList 
{
    GQDSStyle *mCharStyle;
    struct __CFString { } *mHref;
}


- (void)dealloc;
- (id)characterStyle;
- (NSInteger)readStyleFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct __CFString { }*)href;

@end