/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPSearchMatcher : NSObject {
    NSArray *_asciiComponents;
    NSArray *_components;
    NSData *_context;
    int _options;
    NSData *_wholeSearchStringData;
}

- (void)dealloc;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3;
- (id)initWithSearchString:(id)arg1 options:(int)arg2;
- (BOOL)matches:(id)arg1;
- (BOOL)matches:(id)arg1 matchType:(int)arg2;
- (BOOL)matchesASCIIString:(const char *)arg1 matchType:(int)arg2;
- (BOOL)matchesUTF8String:(const char *)arg1;
- (BOOL)matchesUTF8String:(const char *)arg1 matchType:(int)arg2;

@end
