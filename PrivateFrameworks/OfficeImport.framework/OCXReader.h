/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCPZipPackage;

@interface OCXReader : NSObject <OCDReader> {
    OCPZipPackage *mZipPackage;
}

+ (id)readerWithZipPackage:(id)arg1;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (id)readFromData:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;

- (void)dealloc;
- (id)zipPackage;
- (bool)isBinaryReader;
- (id)initWithZipPackage:(id)arg1;

@end
