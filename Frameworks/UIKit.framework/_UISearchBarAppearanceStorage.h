/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSValue;

@interface _UISearchBarAppearanceStorage : NSObject  {
    NSMutableDictionary *searchFieldBackgroundImages;
    NSValue *searchFieldPositionAdjustment;
    NSMutableDictionary *iconImages;
}

@property(retain) NSValue * searchFieldPositionAdjustment;


- (void)dealloc;
- (void)setSearchFieldPositionAdjustment:(id)arg1;
- (id)searchFieldPositionAdjustment;
- (id)imageForIcon:(int)arg1 state:(unsigned int)arg2;
- (void)setImage:(id)arg1 forIcon:(int)arg2 state:(unsigned int)arg3;
- (id)searchFieldBackgroundImageForState:(unsigned int)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned int)arg2;

@end
