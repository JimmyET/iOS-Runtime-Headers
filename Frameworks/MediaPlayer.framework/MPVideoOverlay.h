/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, MPDetailSlider, <MPVideoOverlayDelegate>, MPAVItem, MPVideoViewController, MPAVController, NSMutableDictionary;

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
    MPVideoViewController *_videoViewController;
    <MPVideoOverlayDelegate> *_delegate;
    MPAVItem *_item;
    MPAVController *_player;
    MPDetailSlider *_scrubControl;
    int _interfaceOrientation;
    BOOL _controlsAutohideDisabled;
    BOOL _wantsTick;
    unsigned int _desiredParts;
    unsigned int _visibleParts;
    unsigned int _disabledParts;
    NSMutableDictionary *_tickTimeEvents;
    double _lastTickTime;
}

@property MPVideoViewController * videoViewController;
@property BOOL allowsWirelessPlayback;
@property(retain) MPAVItem * item;
@property int interfaceOrientation;
@property unsigned int desiredParts;
@property unsigned int visibleParts;
@property unsigned int disabledParts;
@property(retain) MPAVController * player;
@property(readonly) UINavigationBar * navigationBar;
@property <MPVideoOverlayDelegate> * delegate;


- (void)dealloc;
- (double)_playableDuration;
- (void)_endSliderTracking;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1;
- (id)videoViewController;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (BOOL)updateTimeBasedValues;
- (void)showAlternateTracks;
- (void)hideAlternateTracks;
- (unsigned int)disabledParts;
- (unsigned int)desiredParts;
- (void)stopTicking;
- (void)startTicking;
- (void)setVideoViewController:(id)arg1;
- (void)setDisabledParts:(unsigned int)arg1;
- (void)setVisibleParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned int)arg1;
- (void)_tickNotification:(id)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setVisibleParts:(unsigned int)arg1;
- (unsigned int)visibleParts;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)item;
- (void)setInterfaceOrientation:(int)arg1;
- (id)navigationBar;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (int)interfaceOrientation;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)_duration;
- (void)setItem:(id)arg1;

@end
