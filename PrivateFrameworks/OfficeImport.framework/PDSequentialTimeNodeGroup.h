/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, PDAnimationTargetElement;

@interface PDSequentialTimeNodeGroup : PDCommonTimeNodeData  {
}

@property(retain) PDAnimationTargetElement * targetElement;
@property int presetClass;
@property int presetId;
@property int triggerType;
@property int iterateType;
@property double delay;
@property double direction;
@property(retain) NSString * groupId;

+ (id)createSequentialTimeNodeGroupForAnimationInfo;

- (double)direction;
- (void)setDelay:(double)arg1;
- (double)delay;
- (void)setDirection:(double)arg1;
- (int)triggerType;
- (id)level1ParallelTimeNodeGroup;
- (id)level2ParallelTimeNodeGroup;
- (id)level3SetBehavior;
- (void)setTriggerType:(int)arg1;
- (void)setTargetElement:(id)arg1;
- (int)iterateType;
- (void)setPresetClass:(int)arg1;
- (void)setIterateType:(int)arg1;
- (id)targetElement;
- (int)presetClass;
- (int)presetId;
- (void)setPresetId:(int)arg1;
- (void)setGroupId:(id)arg1;
- (id)groupId;

@end
