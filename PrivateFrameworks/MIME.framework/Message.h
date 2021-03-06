/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSArray, MessageStore, NSString;

@interface Message : NSObject  {
    MessageStore *_store;
    unsigned int _preferredEncoding;
    NSString *_senderAddressComment;
    unsigned int _dateSentInterval;
    unsigned int _dateReceivedInterval;
    unsigned long long _generationNumber;
    NSString *_subject;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSArray *_sender;
    NSString *_contentType;
    long long _messageIDHeaderHash;
    long long _conversationID;
    NSString *_summary;
    NSString *_externalID;
    unsigned int _calculatedAttachmentInfo : 1;
    unsigned short _numberOfAttachments;
}

+ (void)setMessageClassForStore:(id)arg1;
+ (Class)dataMessageStoreToUse;
+ (id)messageWithRFC822Data:(id)arg1;

- (id)dataForMimePart:(id)arg1;
- (void)setMessageInfoFromMessage:(id)arg1;
- (int)generationCompare:(id)arg1;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)messageIDHeaderInFortyBytesOrLess;
- (id)cc;
- (long long)conversationID;
- (id)messageDataIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)setGenerationNumber:(unsigned long long)arg1;
- (id)sendersIfCached;
- (id)toIfCached;
- (id)ccIfCached;
- (id)bccIfCached;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10;
- (void)setContentType:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setConversationID:(long long)arg1;
- (id)externalID;
- (id)messageIDHeader;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (void)setMessageIDHash:(long long)arg1;
- (id)dateSent;
- (id)dateReceived;
- (void)setMessageStore:(id)arg1;
- (unsigned long long)generationNumber;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)refreshedMessage;
- (id)persistentID;
- (id)dataPathForMimePart:(id)arg1;
- (id)preferredEmailAddressToReplyWith;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (id)dataConsumerForMimePart:(id)arg1;
- (BOOL)canBeDeleted;
- (BOOL)isLibraryMessage;
- (id)messageID;
- (id)remoteID;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (id)subject;
- (id)senders;
- (id)headersIfAvailable;
- (id)bodyData;
- (id)messageStore;
- (id)messageBody;
- (id)messageBodyIfAvailable;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageData;
- (double)dateReceivedAsTimeIntervalSince1970;
- (double)dateSentAsTimeIntervalSince1970;
- (id)senderAddressComment;
- (BOOL)isMessageContentsLocallyAvailable;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (void)setSubject:(id)arg1;
- (BOOL)calculatedNumberOfAttachments;
- (void)calculateAttachmentInfoFromBody:(id)arg1;
- (unsigned short)numberOfAttachments;
- (unsigned int)messageSize;
- (void)setSender:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)needsDateReceived;
- (id)bodyDataIsComplete:(BOOL*)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3;
- (void)setNumberOfAttachments:(unsigned int)arg1;
- (id)cachedAttributes;
- (long long)messageIDHash;
- (BOOL)_doesDateAppearToBeSane:(id)arg1;
- (id)_copyDateFromReceivedHeadersInHeaders:(id)arg1;
- (id)_copyDateFromDateHeaderInHeaders:(id)arg1;
- (void)setBcc:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)_setDateSentFromHeaders:(id)arg1;
- (id)firstSender;
- (id)uniqueArray:(id)arg1 withStore:(id)arg2;
- (id)bcc;
- (long long)_messageIDHeaderHashIvar;
- (id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (id)additionalHeadersForReply;
- (id)additionalHeadersForForward;
- (id)bestAlternativeInPart:(id)arg1;
- (id)defaultAlternativeInPart:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
- (id)headerData;
- (unsigned long)uid;
- (id)path;
- (id)summary;
- (id)headers;
- (id)contentType;
- (id)to;
- (void)setTo:(id)arg1;
- (void)setCc:(id)arg1;

@end
