/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSTimeZone, BBSound, BBAction, NSString, BBContent, NSDate, NSArray;

@interface BBBulletinRequest : BBBulletin  {
}

@property(copy) NSString * bulletinID;
@property(copy) NSString * sectionID;
@property(copy) NSString * recordID;
@property(copy) NSString * publisherBulletinID;
@property int addressBookRecordID;
@property int sectionSubtype;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(copy) NSString * message;
@property(retain) BBContent * modalAlertContent;
@property(retain) NSDate * date;
@property(retain) NSDate * endDate;
@property(retain) NSDate * recencyDate;
@property int dateFormatStyle;
@property BOOL dateIsAllDay;
@property(retain) NSTimeZone * timeZone;
@property int accessoryStyle;
@property BOOL clearable;
@property(retain) BBSound * sound;
@property int primaryAttachmentType;
@property(copy) BBAction * defaultAction;
@property(copy) BBAction * acknowledgeAction;
@property(copy) BBAction * replyAction;
@property(copy) NSArray * buttons;
@property(retain) NSDate * expirationDate;
@property(copy) BBAction * expireAction;
@property BOOL expiresOnPublisherDeath;
@property(copy) NSString * section;
@property unsigned int realertCount;
@property BOOL showsUnreadIndicator;
@property BOOL tentative;


- (void)publish;
- (BOOL)tentative;
- (void)setTentative:(BOOL)arg1;
- (void)generateNewBulletinID;
- (id)publisherMatchID;
- (BOOL)hasContentModificationsRelativeTo:(id)arg1;
- (BOOL)showsUnreadIndicator;
- (void)generateBulletinID;
- (void)addAlertSuppressionAppID:(id)arg1;
- (void)setRealertCount:(unsigned int)arg1;
- (unsigned int)realertCount;
- (void)setUnlockActionLabel:(id)arg1;
- (void)withdraw;
- (void)addButton:(id)arg1;
- (void)setPrimaryAttachmentType:(int)arg1;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)setShowsUnreadIndicator:(BOOL)arg1;
- (void)publish:(BOOL)arg1;
- (void)addAttachmentOfType:(int)arg1;

@end
