/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSPredicate, NSDate, GKGame, GKLeaderboardSection, GKPlayer, GKLeaderboardControlSection, NSString, GKGameDetailHeaderSection, NSArray;

@interface GKLeaderboardDataSource : GKSectionArrayDataSource <GKSearchableSectionDataSource> {
    GKLeaderboardSection *_globalSection;
    GKLeaderboardSection *_friendSection;
    GKLeaderboardControlSection *_controlSection;
    NSString *_categoryID;
    GKPlayer *_player;
    GKGame *_game;
    GKGameDetailHeaderSection *_gameDetailHeaderSection;
    int _timeScope;
    BOOL _allowsFriendSelection;
    BOOL _showRatingControl;
    BOOL _loaded;
    NSArray *_items;
    NSArray *_visibleItems;
    NSArray *_searchableSections;
    NSArray *_sortDescriptors;
    NSPredicate *_filterPredicate;
}

@property(retain) GKLeaderboardSection * globalSection;
@property(retain) GKLeaderboardSection * friendSection;
@property(retain) GKLeaderboardControlSection * controlSection;
@property(retain) NSString * categoryID;
@property(retain) GKPlayer * player;
@property(retain) GKGame * game;
@property(retain) GKGameDetailHeaderSection * gameDetailHeaderSection;
@property int timeScope;
@property BOOL allowsFriendSelection;
@property BOOL showRatingControl;
@property BOOL loaded;
@property BOOL showControlSection;
@property(retain) NSArray * searchableSections;
@property(retain) NSArray * sortDescriptors;
@property(retain) NSPredicate * filterPredicate;
@property(retain) NSDate * expirationDate;
@property(retain) NSArray * items;
@property(retain) NSArray * visibleItems;


- (id)sortDescriptors;
- (void)setSortDescriptors:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)showControlSection;
- (Class)sectionClass;
- (void)setFilterPredicate:(id)arg1;
- (id)filterPredicate;
- (id)searchableSections;
- (void)setLoaded:(BOOL)arg1;
- (id)friendSection;
- (void)setSearchableSections:(id)arg1;
- (void)setGameDetailHeaderSection:(id)arg1;
- (void)setControlSection:(id)arg1;
- (void)setGlobalSection:(id)arg1;
- (void)setFriendSection:(id)arg1;
- (id)controlSection;
- (void)setShowControlSection:(BOOL)arg1;
- (void)purgeCachedData;
- (void)setLoadingState:(int)arg1;
- (void)tableView:(id)arg1 updateStatusForLeaderboard:(id)arg2;
- (id)globalSection;
- (void)prepareSections;
- (id)gameDetailHeaderSection;
- (void)setAllowsFriendSelection:(BOOL)arg1;
- (BOOL)allowsFriendSelection;
- (void)tableView:(id)arg1 updateStatusViewAfterLoading:(id)arg2 withError:(id)arg3;
- (void)setShowRatingControl:(BOOL)arg1;
- (BOOL)showRatingControl;
- (id)visibleItems;
- (void)setVisibleItems:(id)arg1;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)player;
- (void)setLeaderboardDelegate:(id)arg1;
- (id)game;
- (void)setCategoryID:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setGame:(id)arg1;
- (int)timeScope;
- (void)setTimeScope:(int)arg1;
- (id)categoryID;
- (void)setItems:(id)arg1;
- (id)items;
- (BOOL)loaded;

@end
