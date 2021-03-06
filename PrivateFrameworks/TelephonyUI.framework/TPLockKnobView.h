/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIAlphaAnimation, TPBottomLockBar;

@interface TPLockKnobView : UIImageView  {
    TPBottomLockBar *_track;
    UIAlphaAnimation *_animation;
    float _centerDelta;
    BOOL _tracking;
    BOOL _isSecondaryKnob;
}


- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)isTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1 isSecondaryKnob:(BOOL)arg2;
- (BOOL)shouldBeginTracking:(id)arg1;
- (void)beginTracking:(id)arg1;
- (void)setLockView:(id)arg1;
- (BOOL)isSecondaryKnob;
- (float)currentProgress;

@end
