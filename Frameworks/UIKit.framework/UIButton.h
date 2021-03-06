/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel, UIColor, NSString, UIImage, UIFont;

@interface UIButton : UIControl <NSCoding> {
    struct __CFDictionary { } *_contentLookup;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentEdgeInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _titleEdgeInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageEdgeInsets;
    UIImageView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleView;
    BOOL _initialized;
    struct { 
        unsigned int reversesTitleShadowWhenHighlighted : 1; 
        unsigned int adjustsImageWhenHighlighted : 1; 
        unsigned int adjustsImageWhenDisabled : 1; 
        unsigned int autosizeToFit : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int showsTouchWhenHighlighted : 1; 
        unsigned int buttonType : 8; 
        unsigned int shouldHandleScrollerMouseEvent : 1; 
    } _buttonFlags;
}

@property(retain) UIFont * font;
@property int lineBreakMode;
@property struct CGSize { float x1; float x2; } titleShadowOffset;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentEdgeInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } titleEdgeInsets;
@property BOOL reversesTitleShadowWhenHighlighted;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageEdgeInsets;
@property BOOL adjustsImageWhenHighlighted;
@property BOOL adjustsImageWhenDisabled;
@property BOOL showsTouchWhenHighlighted;
@property(retain) UIColor * tintColor;
@property(readonly) int buttonType;
@property(readonly) NSString * currentTitle;
@property(readonly) UIColor * currentTitleColor;
@property(readonly) UIColor * currentTitleShadowColor;
@property(readonly) UIImage * currentImage;
@property(readonly) UIImage * currentBackgroundImage;
@property(readonly) UILabel * titleLabel;
@property(readonly) UIImageView * imageView;

+ (id)_defaultContentForType:(int)arg1 andState:(unsigned int)arg2;
+ (id)buttonWithType:(int)arg1;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultNormalTitleColor;
+ (id)buttonWithTitle:(id)arg1 theme:(id)arg2;

- (void)dealloc;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (void)crossfadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setBackground:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })titleShadowOffset;
- (struct CGSize { float x1; float x2; })_titleShadowOffset;
- (id)currentBackgroundImage;
- (id)currentTitleShadowColor;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setReversesTitleShadowWhenHighlighted:(BOOL)arg1;
- (BOOL)reversesTitleShadowWhenHighlighted;
- (BOOL)adjustsImageWhenDisabled;
- (BOOL)showsTouchWhenHighlighted;
- (BOOL)adjustsImageWhenHighlighted;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageEdgeInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleEdgeInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentEdgeInsets;
- (id)_backgroundForState:(unsigned int)arg1 usesBackgroundForNormalState:(BOOL*)arg2;
- (id)_imageForState:(unsigned int)arg1 usesImageForNormalState:(BOOL*)arg2;
- (id)_shadowColorForState:(unsigned int)arg1;
- (id)_titleColorForState:(unsigned int)arg1;
- (id)_titleForState:(unsigned int)arg1;
- (void)_setupImageView;
- (void)_setupTitleView;
- (BOOL)_canHaveTitle;
- (id)_archivableContent:(id*)arg1;
- (void)_takeContentFromArchivableContent:(id)arg1 overrides:(id)arg2;
- (void)_setButtonType:(int)arg1;
- (void)setShowsTouchWhenHighlighted:(BOOL)arg1;
- (id)_setupBackgroundView;
- (id)titleShadowColorForState:(unsigned int)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (int)buttonType;
- (int)_buttonType;
- (void)setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_titleAttributesChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_imageView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setContent:(id)arg1 forState:(unsigned int)arg2;
- (id)_contentForState:(unsigned int)arg1;
- (id)currentTitle;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageView;
- (void)setShowPressFeedback:(BOOL)arg1;
- (BOOL)autosizesToFit;
- (id)titleColorForState:(unsigned int)arg1;
- (id)currentTitleColor;
- (id)currentImage;
- (struct CGPoint { float x1; float x2; })pressFeedbackPosition;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)backgroundImageForState:(unsigned int)arg1;
- (id)imageForState:(unsigned int)arg1;
- (id)titleForState:(unsigned int)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (void)setContentHorizontalAlignment:(int)arg1;
- (void)setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setFont:(id)arg1;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setAdjustsImageWhenDisabled:(BOOL)arg1;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (void)_setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (id)image;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (id)_titleView;
- (id)title;
- (void)_setLineBreakMode:(int)arg1;
- (id)_scriptingInfo;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)setEnabled:(BOOL)arg1;
- (int)_lineBreakMode;
- (id)_font;
- (void)setLineBreakMode:(int)arg1;
- (int)lineBreakMode;
- (id)font;
- (void)setFont:(id)arg1;
- (id)_backgroundView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (id)titleLabel;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)ab_addConferenceIcon;
- (void)showActionSheet:(id)arg1 animated:(BOOL)arg2;
- (void)configureFromScriptButton:(id)arg1;

@end
