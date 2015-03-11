/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSIndexPath, NSIndexSet;

@interface PUTransitionSectionInfo : NSObject {
    struct PUGridCoordinates { 
        long long row; 
        long long column; 
    NSIndexPath *_anchorRealPath;
    } _anchorShiftOffset;
    long long _contiguousRows;
    long long _transitionSection;
    NSArray *_visualRowStartMarkers;
    NSIndexSet *_visualSections;
}

@property(retain) NSIndexPath * anchorRealPath;
@property struct PUGridCoordinates { long long x1; long long x2; } anchorShiftOffset;
@property long long contiguousRows;
@property long long transitionSection;
@property(retain) NSArray * visualRowStartMarkers;
@property(retain) NSIndexSet * visualSections;

- (void).cxx_destruct;
- (id)anchorRealPath;
- (struct PUGridCoordinates { long long x1; long long x2; })anchorShiftOffset;
- (long long)contiguousRows;
- (id)description;
- (id)init;
- (void)setAnchorRealPath:(id)arg1;
- (void)setAnchorShiftOffset:(struct PUGridCoordinates { long long x1; long long x2; })arg1;
- (void)setContiguousRows:(long long)arg1;
- (void)setTransitionSection:(long long)arg1;
- (void)setVisualRowStartMarkers:(id)arg1;
- (void)setVisualSections:(id)arg1;
- (long long)transitionSection;
- (id)visualRowStartMarkers;
- (id)visualSections;

@end