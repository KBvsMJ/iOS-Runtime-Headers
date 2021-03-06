/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNowPlayingInfoUpdatePacketEvent : TRPacketEvent {
    NSDictionary *_nowPlayingInfo;
}

@property (nonatomic, readonly, copy) NSDictionary *nowPlayingInfo;

+ (unsigned int)_packetEventType;

- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithNowPlayingInfo:(id)arg1;
- (id)nowPlayingInfo;

@end
