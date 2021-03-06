/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CISqueeze : CIFilter  {
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputAmount;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputPoint;
@property(copy) NSNumber * inputAmount;

+ (id)customAttributes;

- (void)setInputPoint:(id)arg1;
- (id)inputPoint;
- (id)inputAmount;
- (void)setInputAmount:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
