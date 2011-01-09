/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUCryptor, <SFUOutputStream>;



@interface SFUCryptoOutputStream : NSObject <SFUOutputStream>
{
    <SFUOutputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    BOOL mIsClosed;
    BOOL mComputeCrc32;
    NSUInteger mCrc32;
}

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;

- (long long)offset;
- (void)dealloc;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1 whence:(NSInteger)arg2;
- (BOOL)canCreateInputStream;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3;
- (NSUInteger)crc32;
- (id)closeLocalStream;
- (id)inputStream;
- (void)close;

@end