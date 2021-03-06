/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
 */

@interface ACXInstallOperation : NSObject <ACXIDSSocketManagerDelegateProtocol> {
    BOOL _acquiredSocket;
    NSDictionary *_appSettingsDict;
    NSString *_bundleID;
    BOOL _cancelled;
    id /* block */ _completion;
    BOOL _installPlaceholder;
    double _lastPercentComplete;
    unsigned int _lastPhase;
    unsigned char _lastSentMessageType;
    id /* block */ _progressBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_snapshotURL;
    ACXStreamingZipSocketSender *_streamingZipSender;
    NSURL *_tempDir;
}

@property BOOL acquiredSocket;
@property (retain) NSDictionary *appSettingsDict;
@property (readonly) NSString *bundleID;
@property BOOL cancelled;
@property (copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL installPlaceholder;
@property double lastPercentComplete;
@property unsigned int lastPhase;
@property unsigned char lastSentMessageType;
@property (copy) id /* block */ progressBlock;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSURL *snapshotURL;
@property (retain) ACXStreamingZipSocketSender *streamingZipSender;
@property (readonly) Class superclass;
@property (retain) NSURL *tempDir;

+ (id)installOperationForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_callCompletion:(id)arg1;
- (void)_callProgressBlockWithPhase:(unsigned int)arg1 percent:(double)arg2;
- (void)_doTransferAndInstallForWatchKitAppWithBundleID:(id)arg1 size:(id)arg2;
- (id)_makeTempDirectoryWithError:(id*)arg1;
- (void)_prepForTransferAndInstall;
- (id)_sendCancelMessage;
- (BOOL)acquiredSocket;
- (id)appSettingsDict;
- (void)beginWithCompletionBlock:(id /* block */)arg1;
- (id)bundleID;
- (void)cancel;
- (BOOL)cancelled;
- (id /* block */)completion;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;
- (BOOL)installPlaceholder;
- (double)lastPercentComplete;
- (unsigned int)lastPhase;
- (unsigned char)lastSentMessageType;
- (id /* block */)progressBlock;
- (id)queue;
- (void)receivedDictionaryOrData:(id)arg1;
- (void)setAcquiredSocket:(BOOL)arg1;
- (void)setAppSettingsDict:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setInstallPlaceholder:(BOOL)arg1;
- (void)setLastPercentComplete:(double)arg1;
- (void)setLastPhase:(unsigned int)arg1;
- (void)setLastSentMessageType:(unsigned char)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setSnapshotURL:(id)arg1;
- (void)setStreamingZipSender:(id)arg1;
- (void)setTempDir:(id)arg1;
- (id)snapshotURL;
- (void)socketDidCloseWithError:(id)arg1;
- (id)streamingZipSender;
- (id)tempDir;

@end
