/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNImager : TSDImager <TSDConnectedInfoReplacing> {
    BOOL mShouldShowInstructionalText;
    KNAbstractSlide *mSlide;
    unsigned int mSlideNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldShowInstructionalText;
@property (nonatomic) KNAbstractSlide *slide;
@property (nonatomic) unsigned int slideNumber;
@property (readonly) Class superclass;

- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;
- (void)setShouldShowInstructionalText:(BOOL)arg1;
- (void)setSlide:(id)arg1;
- (void)setSlideNumber:(unsigned int)arg1;
- (BOOL)shouldShowInstructionalText;
- (id)slide;
- (unsigned int)slideNumber;

@end
