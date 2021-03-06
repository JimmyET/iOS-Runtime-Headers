/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString, OADGraphicProperties, CHDTrendlineLabel;

@interface CHDTrendline : NSObject  {
    boolmDisplayEquation;
    boolmDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    int mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;

- (void)setName:(id)arg1;
- (id)init;
- (void)dealloc;
- (int)type;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)name;
- (void)setType:(int)arg1;
- (bool)isDisplayEquation;
- (bool)isDisplayRSquaredValue;
- (double)backward;
- (double)forward;
- (double)interceptYAxis;
- (int)polynomialOrder;
- (int)movingAveragePeriod;
- (id)defaultNameWithSeriesName:(id)arg1;
- (void)setDisplayEquation:(bool)arg1;
- (void)setDisplayRSquaredValue:(bool)arg1;
- (void)setBackward:(double)arg1;
- (void)setForward:(double)arg1;
- (void)setInterceptYAxis:(double)arg1;
- (void)setPolynomialOrder:(int)arg1;
- (void)setMovingAveragePeriod:(int)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;

@end
