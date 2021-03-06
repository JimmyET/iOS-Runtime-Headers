/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSString, SSNetworkConstraints, NSURL;

@interface MPItemDownloadProperties : NSObject <NSCopying> {
    long long _assetFileSize;
    NSURL *_destinationURL;
    BOOL _downloadExists;
    NSString *_downloadIdentifier;
    SSNetworkConstraints *_networkConstraints;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(readonly) long long assetFileSize;
@property(readonly) NSURL * destinationURL;
@property(readonly) BOOL downloadExists;
@property(readonly) NSString * downloadIdentifier;
@property(readonly) SSNetworkConstraints * networkConstraints;
@property(readonly) NSURL * sourceURL;


- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)_reloadNetworkConstraints;
- (id)networkConstraints;
- (long long)assetFileSize;
- (id)newAVAssetOptionsWithDownloadStyle:(int)arg1;
- (id)downloadIdentifier;
- (BOOL)downloadExists;
- (id)initWithDownloadIdentifier:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithDownload:(id)arg1;
- (id)destinationURL;
- (id)sourceURL;

@end
