/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSError, NSString, NSDictionary, NSHTTPURLResponse;

@interface AAResponse : NSObject  {
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_httpResponse;
    NSError *_error;
}

@property(readonly) NSDictionary * responseDictionary;
@property(retain) NSError * error;
@property(readonly) NSString * protocolVersion;


- (void)dealloc;
- (void)setError:(id)arg1;
- (id)protocolVersion;
- (id)error;
- (void)_parseResponse:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseDictionary;

@end
