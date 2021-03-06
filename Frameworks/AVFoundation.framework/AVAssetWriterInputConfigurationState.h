/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, NSDictionary, AVOutputSettings;

@interface AVAssetWriterInputConfigurationState : NSObject  {
    NSString *_mediaType;
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription { } *_sampleBufferFormatHint;
    NSDictionary *_sourcePixelBufferAttributes;
    BOOL _attachedToPixelBufferAdaptor;
    NSArray *_metadataItems;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _transform;
    int _mediaTimeScale;
    BOOL _expectsMediaDataInRealTime;
}

@property(copy) NSString * mediaType;
@property(copy) AVOutputSettings * outputSettings;
@property(retain) struct opaqueCMFormatDescription { }* sampleBufferFormatHint;
@property(copy) NSDictionary * sourcePixelBufferAttributes;
@property BOOL attachedToPixelBufferAdaptor;
@property(copy) NSArray * metadataItems;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property int mediaTimeScale;
@property BOOL expectsMediaDataInRealTime;


- (void)dealloc;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (void)setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (BOOL)attachedToPixelBufferAdaptor;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (id)sourcePixelBufferAttributes;
- (void)setSampleBufferFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (struct opaqueCMFormatDescription { }*)sampleBufferFormatHint;
- (void)setOutputSettings:(id)arg1;
- (BOOL)expectsMediaDataInRealTime;
- (void)setMetadataItems:(id)arg1;
- (id)metadataItems;
- (id)outputSettings;
- (void)setMediaType:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (id)mediaType;

@end
