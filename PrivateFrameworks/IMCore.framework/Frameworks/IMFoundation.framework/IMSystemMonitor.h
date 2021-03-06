/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSTimer, NSString, NSDate, NSMutableArray;

@interface IMSystemMonitor : NSObject  {
    BOOL _willSleep;
    BOOL _screenLocked;
    BOOL _screensaverActive;
    BOOL _active;
    BOOL _backingUp;
    BOOL _switchedOut;
    NSMutableArray *_listeners;
    NSDate *_idleStart;
    NSTimer *_timer;
    NSString *_userID;
    double _delayTime;
    NSMutableArray *_earlyListeners;
    BOOL _usesPowerNotifications;
    BOOL _usesSystemIdleState;
}

@property(setter=setActive:) BOOL isActive;
@property(setter=setUsesPowerNotifications:) BOOL usesPowerNotifications;
@property(setter=setUsesSystemIdleState:) BOOL usesSystemIdleState;
@property(readonly) BOOL systemIsSleeping;
@property(readonly) BOOL systemIsShuttingDown;
@property(readonly) BOOL isScreenSaverActive;
@property(readonly) BOOL isScreenLocked;
@property BOOL isFastUserSwitched;
@property(readonly) BOOL isBackingUp;
@property(readonly) BOOL isSetup;
@property(readonly) BOOL isSystemIdle;
@property(readonly) double systemIdleTime;
@property(retain) NSMutableArray * _listeners;
@property(retain) NSMutableArray * _earlyListeners;
@property(retain) NSDate * _idleStart;
@property(retain) NSTimer * _timer;
@property(retain) NSString * _userID;
@property double _delayTime;

+ (id)sharedInstance;
+ (id)sharedMonitor;

- (id)init;
- (void)dealloc;
- (void)_removeEarlyListener:(id)arg1;
- (void)_addEarlyListener:(id)arg1;
- (BOOL)systemIsShuttingDown;
- (BOOL)usesSystemIdleState;
- (void)set_earlyListeners:(id)arg1;
- (id)_earlyListeners;
- (void)set_delayTime:(double)arg1;
- (double)_delayTime;
- (void)set_userID:(id)arg1;
- (void)set_timer:(id)arg1;
- (id)_timer;
- (void)set_idleStart:(id)arg1;
- (id)_idleStart;
- (void)set_listeners:(id)arg1;
- (id)_listeners;
- (void)setIsFastUserSwitched:(BOOL)arg1;
- (BOOL)isBackingUp;
- (BOOL)isScreenSaverActive;
- (BOOL)isScreenLocked;
- (BOOL)systemIsSleeping;
- (void)_registerForLoginWindowNotifications;
- (void)_handleLoginWindowNotification:(id)arg1;
- (void)_setupStateChanged;
- (void)_restoreDidStop;
- (void)_restoreDidStart;
- (void)_checkRestoredFromBackup;
- (void)_systemWillShutdown;
- (double)systemIdleTime;
- (void)_setIdleState:(BOOL)arg1;
- (void)setUsesSystemIdleState:(BOOL)arg1;
- (void)_screenSaverStarted:(id)arg1;
- (void)_screenSaverStopped:(id)arg1;
- (void)_systemWillSleep;
- (void)_systemDidWake;
- (BOOL)isSystemIdle;
- (BOOL)usesPowerNotifications;
- (void)_postScreenSaverStarted;
- (void)_postScreenLocked;
- (void)_deliverNotificationSelector:(SEL)arg1;
- (void)_unregisterForLoginWindowNotifications;
- (void)_unregisterForRestoreNotifications;
- (void)_registerForRestoreNotifications;
- (void)_resumeEventsOnly:(id)arg1;
- (void)_suspendEventsOnly:(id)arg1;
- (void)_resume:(id)arg1;
- (void)_suspend:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (BOOL)isSetup;
- (id)_userID;
- (void)setUsesPowerNotifications:(BOOL)arg1;
- (BOOL)isFastUserSwitched;

@end
