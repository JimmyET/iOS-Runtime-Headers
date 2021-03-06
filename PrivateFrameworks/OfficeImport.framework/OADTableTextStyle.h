/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject  {
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (id)defaultStyle;
+ (id)defaultColor;
+ (id)defaultFontReference;
+ (int)defaultBold;
+ (int)defaultItalic;

- (id)init;
- (void)dealloc;
- (id)color;
- (void)setColor:(id)arg1;
- (void)applyOverridesFrom:(id)arg1;
- (id)fontReference;
- (void)setFontReference:(id)arg1;
- (int)bold;
- (int)italic;
- (id)shallowCopy;
- (void)setBold:(int)arg1;
- (void)setItalic:(int)arg1;

@end
