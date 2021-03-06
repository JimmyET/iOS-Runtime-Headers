/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSNumber, NSString, NSMutableDictionary, CPExclusiveLock, NSManagedObjectContext, NoteAccountObject, NoteStoreObject, NSPersistentStoreCoordinator, NSPredicate, NSManagedObjectModel;

@interface NoteContext : NSObject  {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_searchPredicate;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    struct __CXIndex { } *__SharedNoteStoreSearchIndex;
    CPExclusiveLock *__SharedNoteStoreSearchIndexLock;
    int __SharedNoteStoreSearchIndexCount;
    BOOL _isIndexing;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    CPExclusiveLock *_objectCreationLock;
    unsigned int _notificationCount;
    BOOL _logChanges;
    BOOL _indexInBatches;
    BOOL _hasPriorityInSaveConflicts;
    BOOL _inMigrator;
    NSString *_testingFilePrefix;
    NSString *_testingFilePath;
    NSMutableDictionary *_notePropertyObjectsRealized;
}

@property(readonly) BOOL isIndexing;
@property(readonly) NSManagedObjectContext * managedObjectContext;

+ (BOOL)databaseIsCorrupt:(id)arg1;
+ (BOOL)shouldLogIndexing;

- (id)localAccount;
- (BOOL)deleteAccount:(id)arg1;
- (id)managedObjectContext;
- (BOOL)save:(id*)arg1;
- (id)managedObjectModel;
- (id)persistentStoreCoordinator;
- (id)init;
- (void)dealloc;
- (id)propertyValueForKey:(id)arg1;
- (id)rootDirectory;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)invalidate;
- (id)allAccounts;
- (id)accountForAccountId:(id)arg1;
- (id)newlyAddedAccount;
- (void)enableChangeLogging:(BOOL)arg1;
- (void)deleteChanges:(id)arg1;
- (BOOL)saveOutsideApp:(id*)arg1;
- (id)allNotesInCollection:(id)arg1;
- (void)deleteNote:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (unsigned int)countOfNotesInCollection:(id)arg1;
- (id)newlyAddedNote;
- (void).cxx_destruct;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (BOOL)deleteStore:(id)arg1;
- (id)newlyAddedStore;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (id)storeOptions;
- (void)clearCaches;
- (BOOL)isIndexing;
- (BOOL)deleteIndexFile;
- (BOOL)noteIsSafeToAccess:(id)arg1;
- (id)findNotesWithText:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3;
- (id)copyNotesForSearch:(void*)arg1 complete:(char *)arg2;
- (void)resetNotificationCount;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1;
- (void)indexInBatches:(BOOL)arg1;
- (void)resumeIndexing;
- (void)wrapUpIndexing;
- (void)setHasPriorityInSaveConflicts:(BOOL)arg1;
- (BOOL)hasMultipleEnabledStores;
- (BOOL)shouldDisableLocalStore;
- (id)defaultStoreForNewNote;
- (id)allStores;
- (id)collectionForInfo:(id)arg1;
- (id)noteForObjectID:(id)arg1;
- (unsigned int)countOfNotes;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNoteForObjectID:(id)arg1;
- (unsigned int)countOfVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1;
- (unsigned int)countOfVisibleNotes;
- (id)allVisibleNotes;
- (id)collectionForObjectID:(id)arg1;
- (void)sortNotes:(id)arg1;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)initForMigrator;
- (id)allNotes;
- (void*)newSearchContextWithText:(id)arg1;
- (id)copyNotesForSearch:(void*)arg1 predicate:(id)arg2 complete:(char *)arg3;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (void)cleanUpLocks;
- (struct __CXIndex { }*)searchIndex:(char *)arg1;
- (BOOL)shouldResumeIndexing;
- (void)destroySearchIndex;
- (void)indexNotes:(id)arg1;
- (void)saveNotesToResumeIndexing:(id)arg1;
- (id)notesToResumeIndexing;
- (id)getNextIdObject;
- (id)_notePropertyObjectForKey:(id)arg1;
- (unsigned int)countOfStores;
- (void)forceSetUpUniqueObjects;
- (id)liveNotesNeedingBodiesPredicate;
- (unsigned int)countOfNotesMatchingPredicate:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (unsigned int)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (BOOL)handleSaveErrors:(id)arg1;
- (id)localStore;
- (id)storeForObjectID:(id)arg1;
- (id)nextIndex;
- (id)visibleNotesPredicate;
- (id)newFetchRequestForNotes;
- (void)tearDownCoreDataStack;
- (id)initWithTestingFilePrefix:(id)arg1;
- (void)setUpCoreDataStack;
- (id)initWithTestingFilePrefix:(id)arg1 inMigrator:(BOOL)arg2;
- (id)initWithTestingFilePrefix:(id)arg1 atPath:(id)arg2 inMigrator:(BOOL)arg3;
- (void)trackChanges:(id)arg1;
- (void)updateSearchIndex:(id)arg1;
- (void)handleMigration;
- (void)removeConflictingSqliteAndIdxFiles;
- (void)removeSqliteAndIdxFiles;
- (id)pathForIndex;
- (id)pathForPersistentStore;
- (BOOL)saveSilently:(id*)arg1;
- (BOOL)setUpLastIndexTid;
- (BOOL)setUpLocalAccountAndStore;
- (void)setUpUniqueObjects;
- (id)urlForPersistentStore;
- (void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2;
- (BOOL)forceDeleteAccount:(id)arg1;

@end
