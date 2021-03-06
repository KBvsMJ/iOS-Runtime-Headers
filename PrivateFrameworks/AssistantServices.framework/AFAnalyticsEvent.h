/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_context;
    unsigned long long _machAbsoluteTime;
    int _type;
}

@property (nonatomic, readonly) NSDictionary *context;
@property (nonatomic, readonly) unsigned long long machAbsoluteTime;
@property (nonatomic, readonly) int type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)machAbsoluteTime;
- (int)type;

@end
