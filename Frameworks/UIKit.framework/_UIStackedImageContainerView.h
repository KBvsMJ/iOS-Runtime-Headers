/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStackedImageContainerView : UIView {
    _UIStackedImageConfiguration *_config;
    NSObject<UINamedLayerStack> *_constructedStackImage;
    UIImage *_stackImage;
    UIMotionEffectGroup *_stackMotionEffects;
    struct CGPoint { 
        float x; 
        float y; 
    } _stackOffset;
}

@property (nonatomic, copy) _UIStackedImageConfiguration *config;
@property (nonatomic, retain) NSObject<UINamedLayerStack> *constructedStackImage;
@property (getter=isPressed, nonatomic) BOOL pressed;
@property (getter=isStackFocused, nonatomic) BOOL stackFocused;
@property (nonatomic, retain) UIImage *stackImage;
@property (nonatomic) struct CGPoint { float x1; float x2; } stackOffset;

+ (Class)layerClass;

- (void).cxx_destruct;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (id)_imageContainerLayer;
- (void)_installMotionEffects;
- (id)_preferredConfigurationForFocusAnimation:(int)arg1 inContext:(id)arg2;
- (void)_setStackFocused:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3;
- (void)_uninstallMotionEffects;
- (void)_updateContainerLayerImages;
- (id)config;
- (id)constructedStackImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isPressed;
- (BOOL)isStackFocused;
- (void)setConfig:(id)arg1;
- (void)setConstructedStackImage:(id)arg1;
- (void)setPressed:(BOOL)arg1;
- (void)setStackFocused:(BOOL)arg1;
- (void)setStackFocused:(BOOL)arg1 withFocusAnimationCoordinator:(id)arg2;
- (void)setStackImage:(id)arg1;
- (void)setStackOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)stackImage;
- (struct CGPoint { float x1; float x2; })stackOffset;

@end