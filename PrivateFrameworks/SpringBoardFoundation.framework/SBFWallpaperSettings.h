/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperSettings : _UISettings {
    int _blurReplacementMode;
    unsigned int _colorBoxSize;
    BOOL _replaceBlurs;
}

@property (nonatomic) int blurReplacementMode;
@property (nonatomic) unsigned int colorBoxSize;
@property (nonatomic) BOOL replaceBlurs;

+ (id)settingsControllerModule;

- (int)blurReplacementMode;
- (unsigned int)colorBoxSize;
- (BOOL)replaceBlurs;
- (void)setBlurReplacementMode:(int)arg1;
- (void)setColorBoxSize:(unsigned int)arg1;
- (void)setDefaultValues;
- (void)setReplaceBlurs:(BOOL)arg1;

@end
