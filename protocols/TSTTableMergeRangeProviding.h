/* Generated by RuntimeBrowser.
 */

@protocol TSTTableMergeRangeProviding <NSObject>

@required

- (TSTMergeRegionMap *)allMergeRanges;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })expandCellRangeToCoverMergedCells:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (TSTCellRegion *)expandCellRegionToCoverMergedCells:(TSTCellRegion *)arg1;
- (TSTMergeRegionMap *)mergeRangesForCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (TSTMergeRegionMap *)mergeRangesForCellRegion:(TSTCellRegion *)arg1;

@end
