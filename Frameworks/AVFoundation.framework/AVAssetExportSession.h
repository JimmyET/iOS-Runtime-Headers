/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVAsset, AVAudioMix, AVAssetExportSessionInternal, NSString, NSURL, AVVideoComposition, NSArray;

@interface AVAssetExportSession : NSObject  {
    AVAssetExportSessionInternal *_exportSession;
}

@property(readonly) NSString * presetName;
@property(readonly) AVAsset * asset;
@property(readonly) NSArray * supportedFileTypes;
@property(copy) NSString * outputFileType;
@property(copy) NSURL * outputURL;
@property(readonly) int status;
@property(readonly) NSError * error;
@property(readonly) float progress;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxDuration;
@property(readonly) long long estimatedOutputFileLength;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(copy) NSArray * metadata;
@property long long fileLengthLimit;
@property(copy) AVAudioMix * audioMix;
@property(copy) AVVideoComposition * videoComposition;
@property BOOL shouldOptimizeForNetworkUse;

+ (id)_utTypesForAudioOnly;
+ (id)_figRemakerNotificationNames;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDurationForPreset:(id)arg1 properties:(id)arg2;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (id)_utTypesForPresets;
+ (id)_settingForPreset:(id)arg1;
+ (long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3;
+ (id)allExportPresets;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)_handleFigRemakerNotificationAsync:(id)arg1;
- (int)_getTrackCountOfType:(id)arg1 checkEnabled:(BOOL)arg2;
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (BOOL)_hasProtectedNonAudioVideoTracks;
- (BOOL)_canPassThroughAudio:(id)arg1 checkEnabled:(BOOL)arg2 checkProtected:(BOOL)arg3;
- (BOOL)_canPassThroughVideo:(id)arg1 checkEnabled:(BOOL)arg2 checkAll:(BOOL)arg3 checkProtected:(BOOL)arg4;
- (id)_settingForFigRemaker;
- (id)_actualSettingForPreset:(id)arg1;
- (void)_handleFigRemakerNotification:(id)arg1;
- (struct CGSize { float x1; float x2; })_getSourceDimension;
- (void)setFileLengthLimit:(long long)arg1;
- (long long)fileLengthLimit;
- (long long)estimatedOutputFileLength;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (void)cancelExport;
- (void)exportAsynchronouslyWithCompletionHandler:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setOutputFileType:(id)arg1;
- (void)_addListeners;
- (struct OpaqueFigRemaker { }*)_createFigRemaker;
- (void)_transitionToStatus:(int)arg1 error:(id)arg2;
- (void)_updateProgress;
- (id)supportedFileTypes;
- (id)_actualPresetName;
- (id)presetName;
- (void)_removeListeners;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (id)outputFileType;
- (id)outputURL;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setAudioMix:(id)arg1;
- (id)audioMix;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (int)status;
- (id)error;
- (id)asset;
- (float)progress;
- (void)finalize;
- (void)setMetadata:(id)arg1;
- (id)metadata;

@end
