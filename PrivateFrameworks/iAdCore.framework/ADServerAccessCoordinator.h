/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString, NSTimer;

@interface ADServerAccessCoordinator : NSObject  {
    BOOL _allowsRequests;
    BOOL _networkAvailable;
    BOOL _serverReachable;
    double _currentBackoffIntervalExponent;
    NSString *_serverHost;
    NSTimer *_retryTimer;
    const struct __SCNetworkReachability { } *_reachability;
    double _lastReachabilityUpdateTime;
}

@property(readonly) double nextBackoffInterval;
@property BOOL allowsRequests;
@property(readonly) BOOL networkAvailable;
@property(readonly) BOOL serverReachable;
@property(readonly) double currentBackoffIntervalExponent;
@property(copy) NSString * serverHost;
@property(retain) NSTimer * retryTimer;
@property(readonly) struct __SCNetworkReachability { }* reachability;
@property double lastReachabilityUpdateTime;

+ (id)serverAccessCoordinatorForURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)setLastReachabilityUpdateTime:(double)arg1;
- (double)lastReachabilityUpdateTime;
- (struct __SCNetworkReachability { }*)reachability;
- (id)retryTimer;
- (id)serverHost;
- (BOOL)serverReachable;
- (BOOL)networkAvailable;
- (id)serverError;
- (void)setServerReachable:(BOOL)arg1;
- (void)setAllowsRequests:(BOOL)arg1;
- (void)_recalculate;
- (void)setRetryTimer:(id)arg1;
- (void)retryTimerDidFire:(id)arg1;
- (double)nextBackoffInterval;
- (void)startReachability;
- (void)stopReachability;
- (void)setServerHost:(id)arg1;
- (double)currentBackoffIntervalExponent;
- (void)errorDidOccur:(int)arg1;
- (void)connectionDidSucceed;
- (BOOL)allowsRequests;

@end
