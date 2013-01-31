/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSOperationQueue, NSMutableDictionary, NSDictionary;

@interface TIResourcePathManager : NSObject  {
    void *_mobileAssetFrameworkFileHandle;
    NSMutableDictionary *_resourcePaths;
    NSOperationQueue *_operationQueue;
    NSDictionary *_inputModeAssets;
}

@property(readonly) NSOperationQueue * operationQueue;
@property(retain) NSDictionary * inputModeAssets;

+ (id)sharedInstance;

- (id)inputModeAssets;
- (id)mobileAssetConstant:(const char *)arg1;
- (void)clearPathsForType:(int)arg1;
- (void)pushPath:(id)arg1 forType:(int)arg2;
- (id)pathsOfType:(int)arg1;
- (oneway void)handleUninstalledAsset:(id)arg1 withError:(id)arg2 continuation:(id)arg3;
- (oneway void)fetchAssetsForQueryResults:(id)arg1 withError:(id)arg2 updatingArray:(id)arg3 continuation:(id)arg4;
- (id)assetQueryForType:(id)arg1;
- (oneway void)fetchAssetsWithName:(id)arg1 continuation:(id)arg2;
- (oneway void)fetchAssetsWithNames:(id)arg1 forInputModes:(id)arg2 updatingDictionary:(id)arg3 continuation:(id)arg4;
- (void)didFetchAssets;
- (void)setInputModeAssets:(id)arg1;
- (void)unloadMobileAssetLibrary;
- (BOOL)loadMobileAssetLibrary;
- (void)postNotificationForType:(int)arg1;
- (id)versionString;
- (void)postNotification:(id)arg1 forType:(int)arg2;
- (void)postNotification:(id)arg1;
- (void)resendNotification:(id)arg1;
- (void)fetchAssets;
- (void)setupMobileAssets;
- (void)setupNotifications;
- (id)operationQueue;
- (void)dealloc;
- (id)init;

@end