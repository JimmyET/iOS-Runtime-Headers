/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <StepByStepUIDelegate>, NSDictionary;

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {
    struct StepByStepContext { } *_stepByStepContext;
    id _delegate;
    NSDictionary *_restoreRecommendation;
}

@property <StepByStepUIDelegate> * delegate;
@property(retain) NSDictionary * restoreRecommendation;

+ (id)stepByStepController;

- (id)init;
- (void)dealloc;
- (id)restoreRecommendation;
- (void)stepByStepNextStepResult:(long)arg1 withOptions:(id)arg2;
- (void)setRestoreRecommendation:(id)arg1;
- (long)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext { struct AssistantContext {} *x1; int x2; struct __CFDictionary {} *x3; int x4; struct dispatch_semaphore_s {} *x5; struct dispatch_source_s {} *x6; void *x7; }*)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
