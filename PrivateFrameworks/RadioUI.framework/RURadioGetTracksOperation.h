/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioGetTracksOperation : NSOperation {
    ISDialogOperation *_dialogOperation;
    MPUserNotification *_explicitUserNotification;
    RadioGetTracksRequest *_getTracksRequest;
    NSLock *_lock;
    unsigned int _numberOfTracks;
    RadioPlaybackContext *_playbackContext;
    SSVPlaybackLease *_playbackLease;
    int _reasonType;
    RadioRequestContext *_requestContext;
    id /* block */ _responseBlock;
    BOOL _shouldIncludeStationInResponse;
    RadioStation *_station;
    RadioStationMatchContext *_stationMatchContext;
}

@property unsigned int numberOfTracks;
@property (copy) RadioPlaybackContext *playbackContext;
@property (retain) SSVPlaybackLease *playbackLease;
@property (readonly) int reasonType;
@property (retain) RadioRequestContext *requestContext;
@property (copy) id /* block */ responseBlock;
@property BOOL shouldIncludeStationInResponse;
@property (retain) RadioStation *station;
@property (retain) RadioStationMatchContext *stationMatchContext;

- (void).cxx_destruct;
- (id)_heartbeatTokenDataAllowingDelay:(BOOL)arg1 error:(id*)arg2;
- (id)_newGetTracksRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runFullGetTracksProcessAllowingNoAvailableVersionDialog:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithReasonType:(int)arg1;
- (void)main;
- (unsigned int)numberOfTracks;
- (id)playbackContext;
- (id)playbackLease;
- (int)reasonType;
- (id)requestContext;
- (id /* block */)responseBlock;
- (void)setNumberOfTracks:(unsigned int)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setPlaybackLease:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResponseBlock:(id /* block */)arg1;
- (void)setShouldIncludeStationInResponse:(BOOL)arg1;
- (void)setStation:(id)arg1;
- (void)setStationMatchContext:(id)arg1;
- (BOOL)shouldIncludeStationInResponse;
- (id)station;
- (id)stationMatchContext;

@end
