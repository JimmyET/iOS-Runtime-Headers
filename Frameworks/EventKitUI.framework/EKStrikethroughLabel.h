/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSIndexSet;

@interface EKStrikethroughLabel : UILabel  {
    BOOL _strikethroughEnabled;
    NSIndexSet *_textMetrics;
}

@property BOOL strikethroughEnabled;


- (void)dealloc;
- (BOOL)strikethroughEnabled;
- (id)_textMetrics;
- (void)_invalidateTextMetrics;
- (void)setStrikethroughEnabled:(BOOL)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
