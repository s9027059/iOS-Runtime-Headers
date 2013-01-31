/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@class DPTextLayer, SKPowerController;

@interface SKBatteryLevel : SKLayer  {
    SKPowerController *_controller;
    DPTextLayer *_status;
    DPTextLayer *_percentage;
}


- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setHideStatus:(BOOL)arg1;
- (void)batteryStatusChanged:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end