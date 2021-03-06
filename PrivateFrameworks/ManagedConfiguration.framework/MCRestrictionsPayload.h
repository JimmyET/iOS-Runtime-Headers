/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionsPayload : MCPayload  {
    NSMutableDictionary *_restrictions;
}

@property(readonly) NSDictionary * restrictions;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)description;
- (void)dealloc;
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)_restrictedFeatureStrings;
- (id)_enforcedFeatureStrings;
- (id)_defaultMediaSettings;
- (id)restrictions;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;

@end
