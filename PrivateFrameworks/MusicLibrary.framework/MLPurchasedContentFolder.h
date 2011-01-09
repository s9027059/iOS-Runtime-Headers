/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableSet, NSString, <MLPurchasedContentFolderDelegate>, RunLoopContinuation, NSMutableDictionary;



@interface MLPurchasedContentFolder : NSObject 
{
    NSMutableSet *_purchasedContentXMLFilesLoaded;
    NSMutableDictionary *_purchasedContentInfo;
    NSString *_basePath;
    <MLPurchasedContentFolderDelegate> *_delegate;
    RunLoopContinuation *_loadPurchasesContinuation;
    double _lastPurchaseNotificationTime;
}

@property(readonly) NSString *basePath;

+ (void)_createParentFolderIfNecessary:(id)arg1;
+ (void)setShouldImportPurchasesSynchronously:(BOOL)arg1;

- (void)clearWeakReference:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)_storePurchasesInfoFilePath;
- (id)_mobileDBTrackInfoPath;
- (void)_loadSavedPurchaseDB;
- (void)_savePurchaseDBInfo;
- (void)_removeXMLFilenameFromPurchasedConent:(id)arg1;
- (BOOL)_updatePurchasedContentInfoWithXMLFilename:(id)arg1 didInsertBlock:(id)arg2;
- (BOOL)_reloadPurchasedContentData;
- (BOOL)_continueUpdatingPurchasedContent:(id)arg1;
- (void)_finishUpdatingPurchasedContent:(id)arg1;
- (void)removeReferencesToAssetFilename:(id)arg1;
- (id)initWithBasePath:(id)arg1 delegate:(id)arg2;
- (BOOL)reloadPurchasedContentData;
- (id)basePath;
- (NSUInteger)countOfPurchasedContent;
- (id)purchasedContentXMLFilenames;

@end