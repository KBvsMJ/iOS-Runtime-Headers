/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject {
    id _retryAction;
    long long _retryCount;
    double _retryInterval;
    NSNumber *_sentAbsoluteTime;
    unsigned short _typeID;
}

@property(copy) id retryAction;
@property long long retryCount;
@property double retryInterval;
@property(retain) NSNumber * sentAbsoluteTime;
@property unsigned short typeID;

+ (id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3 withAction:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)retryAction;
- (long long)retryCount;
- (double)retryInterval;
- (id)sentAbsoluteTime;
- (void)setRetryAction:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setRetryInterval:(double)arg1;
- (void)setSentAbsoluteTime:(id)arg1;
- (void)setTypeID:(unsigned short)arg1;
- (unsigned short)typeID;

@end