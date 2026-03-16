#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmisskeyCoreAchievement, KmisskeyCoreAchievementCompanion, KmisskeyCoreAnnouncements, KmisskeyCoreAnnouncementsCompanion, KmisskeyCoreAnnouncementsRequest, KmisskeyCoreAnnouncementsRequestCompanion, KmisskeyCoreAntenna, KmisskeyCoreAntennaCompanion, KmisskeyCoreAntennasListRequest, KmisskeyCoreAntennasListRequestCompanion, KmisskeyCoreAntennasNotesRequest, KmisskeyCoreAntennasNotesRequestCompanion, KmisskeyCoreApShowRequest, KmisskeyCoreApShowRequestCompanion, KmisskeyCoreApShowResponse, KmisskeyCoreAvatarDecoration, KmisskeyCoreAvatarDecorationCompanion, KmisskeyCoreBadgeRole, KmisskeyCoreBadgeRoleCompanion, KmisskeyCoreBlock, KmisskeyCoreBlockCompanion, KmisskeyCoreBlocksCreateRequest, KmisskeyCoreBlocksCreateRequestCompanion, KmisskeyCoreBlocksDeleteRequest, KmisskeyCoreBlocksDeleteRequestCompanion, KmisskeyCoreBlocksListRequest, KmisskeyCoreBlocksListRequestCompanion, KmisskeyCoreChannel, KmisskeyCoreChannelCompanion, KmisskeyCoreChannelsFollowedRequest, KmisskeyCoreChannelsFollowedRequestCompanion, KmisskeyCoreChannelsMyFavoritesRequest, KmisskeyCoreChannelsMyFavoritesRequestCompanion, KmisskeyCoreChannelsOwnedRequest, KmisskeyCoreChannelsOwnedRequestCompanion, KmisskeyCoreChannelsShowRequest, KmisskeyCoreChannelsShowRequestCompanion, KmisskeyCoreChannelsTimelineRequest, KmisskeyCoreChannelsTimelineRequestCompanion, KmisskeyCoreChoice, KmisskeyCoreChoiceCompanion, KmisskeyCoreClip, KmisskeyCoreClipCompanion, KmisskeyCoreClipsAddNoteRequest, KmisskeyCoreClipsAddNoteRequestCompanion, KmisskeyCoreClipsCreateRequest, KmisskeyCoreClipsCreateRequestCompanion, KmisskeyCoreClipsDeleteRequest, KmisskeyCoreClipsDeleteRequestCompanion, KmisskeyCoreClipsListRequest, KmisskeyCoreClipsListRequestCompanion, KmisskeyCoreClipsNotesRequest, KmisskeyCoreClipsNotesRequestCompanion, KmisskeyCoreClipsRemoveNoteRequest, KmisskeyCoreClipsRemoveNoteRequestCompanion, KmisskeyCoreClipsShowRequest, KmisskeyCoreClipsShowRequestCompanion, KmisskeyCoreClipsUpdateRequest, KmisskeyCoreClipsUpdateRequestCompanion, KmisskeyCoreColor, KmisskeyCoreColorCompanion, KmisskeyCoreCreateAppRequest, KmisskeyCoreCreateAppRequestCompanion, KmisskeyCoreCreateAppResponse, KmisskeyCoreCreateAppResponseCompanion, KmisskeyCoreCreateGalleryPostRequest, KmisskeyCoreCreateGalleryPostRequestCompanion, KmisskeyCoreCreateWebhooksRequest, KmisskeyCoreCreateWebhooksRequestCompanion, KmisskeyCoreDeleteGalleryPostRequest, KmisskeyCoreDeleteGalleryPostRequestCompanion, KmisskeyCoreDeleteWebhooksRequest, KmisskeyCoreDeleteWebhooksRequestCompanion, KmisskeyCoreDeleteWebhooksResponse, KmisskeyCoreDeleteWebhooksResponseCompanion, KmisskeyCoreEmoji, KmisskeyCoreEmojiCompanion, KmisskeyCoreEmojis, KmisskeyCoreEmojisCompanion, KmisskeyCoreEmojisRequest, KmisskeyCoreEmojisRequestCompanion, KmisskeyCoreEmojisResponse, KmisskeyCoreEmojisResponseCompanion, KmisskeyCoreEmptyResponse, KmisskeyCoreFavoritesCreateRequest, KmisskeyCoreFavoritesCreateRequestCompanion, KmisskeyCoreFavoritesDeleteRequest, KmisskeyCoreFavoritesDeleteRequestCompanion, KmisskeyCoreFederationInstanceResponse, KmisskeyCoreFederationInstanceResponseCompanion, KmisskeyCoreField, KmisskeyCoreFieldCompanion, KmisskeyCoreFile, KmisskeyCoreFileCompanion, KmisskeyCoreFileProperties, KmisskeyCoreFilePropertiesCompanion, KmisskeyCoreFilesCreateRequest, KmisskeyCoreFilesCreateRequestCompanion, KmisskeyCoreFolder, KmisskeyCoreFolderCompanion, KmisskeyCoreFollow, KmisskeyCoreFollowCompanion, KmisskeyCoreFollowingCreateRequest, KmisskeyCoreFollowingCreateRequestCompanion, KmisskeyCoreFollowingDeleteRequest, KmisskeyCoreFollowingDeleteRequestCompanion, KmisskeyCoreFollowingRequestsAcceptRequest, KmisskeyCoreFollowingRequestsAcceptRequestCompanion, KmisskeyCoreFollowingRequestsListRequest, KmisskeyCoreFollowingRequestsListRequestCompanion, KmisskeyCoreFollowingRequestsListResponse, KmisskeyCoreFollowingRequestsListResponseCompanion, KmisskeyCoreFollowingRequestsRejectRequest, KmisskeyCoreFollowingRequestsRejectRequestCompanion, KmisskeyCoreFullPagingTokenRequest, KmisskeyCoreFullPagingTokenRequestCompanion, KmisskeyCoreGalleryPost, KmisskeyCoreGalleryPostCompanion, KmisskeyCoreGenerateAuthSessionRequest, KmisskeyCoreGenerateAuthSessionRequestCompanion, KmisskeyCoreGenerateAuthSessionResponse, KmisskeyCoreGenerateAuthSessionResponseCompanion, KmisskeyCoreGetMiAuthUriRequest, KmisskeyCoreGetMiAuthUriRequestCompanion, KmisskeyCoreGetOnlineUsersCountResponse, KmisskeyCoreGetOnlineUsersCountResponseCompanion, KmisskeyCoreGroup, KmisskeyCoreGroupCompanion, KmisskeyCoreHashtagsTrendRequest, KmisskeyCoreHashtagsTrendRequestCompanion, KmisskeyCoreIFavoritesRequest, KmisskeyCoreIFavoritesRequestCompanion, KmisskeyCoreIFavoritesResponse, KmisskeyCoreIFavoritesResponseCompanion, KmisskeyCoreIListGalleryPostsRequest, KmisskeyCoreIListGalleryPostsRequestCompanion, KmisskeyCoreINotificationsRequest, KmisskeyCoreINotificationsRequestCompanion, KmisskeyCoreIPinRequest, KmisskeyCoreIPinRequestCompanion, KmisskeyCoreIRequest, KmisskeyCoreIRequestCompanion, KmisskeyCoreIUnpinRequest, KmisskeyCoreIUnpinRequestCompanion, KmisskeyCoreIUpdateRequest, KmisskeyCoreIUpdateRequestCompanion, KmisskeyCoreInstance, KmisskeyCoreInstanceCompanion, KmisskeyCoreLikeGalleryPostRequest, KmisskeyCoreLikeGalleryPostRequestCompanion, KmisskeyCoreListGalleryPostsRequest, KmisskeyCoreListGalleryPostsRequestCompanion, KmisskeyCoreListUserGalleryPostsRequest, KmisskeyCoreListUserGalleryPostsRequestCompanion, KmisskeyCoreListWebhooksRequest, KmisskeyCoreListWebhooksRequestCompanion, KmisskeyCoreMeDetailed, KmisskeyCoreMeDetailedCompanion, KmisskeyCoreMessage, KmisskeyCoreMessageCompanion, KmisskeyCoreMessagingHistoryRequest, KmisskeyCoreMessagingHistoryRequestCompanion, KmisskeyCoreMessagingMessagesCreateRequest, KmisskeyCoreMessagingMessagesCreateRequestCompanion, KmisskeyCoreMessagingMessagesDeleteRequest, KmisskeyCoreMessagingMessagesDeleteRequestCompanion, KmisskeyCoreMessagingMessagesRequest, KmisskeyCoreMessagingMessagesRequestCompanion, KmisskeyCoreMeta, KmisskeyCoreMetaCompanion, KmisskeyCoreMetaFeatures, KmisskeyCoreMetaFeaturesCompanion, KmisskeyCoreMetaRequest, KmisskeyCoreMetaRequestCompanion, KmisskeyCoreMute, KmisskeyCoreMuteCompanion, KmisskeyCoreMutedWordItem, KmisskeyCoreMutedWordItemCompanion, KmisskeyCoreMutesCreateRequest, KmisskeyCoreMutesCreateRequestCompanion, KmisskeyCoreMutesDeleteRequest, KmisskeyCoreMutesDeleteRequestCompanion, KmisskeyCoreMutesListRequest, KmisskeyCoreMutesListRequestCompanion, KmisskeyCoreNote, KmisskeyCoreNoteCompanion, KmisskeyCoreNoteList, KmisskeyCoreNoteListCompanion, KmisskeyCoreNoteUnrenoteRequest, KmisskeyCoreNoteUnrenoteRequestCompanion, KmisskeyCoreNotesChildrenRequest, KmisskeyCoreNotesChildrenRequestCompanion, KmisskeyCoreNotesConversationRequest, KmisskeyCoreNotesConversationRequestCompanion, KmisskeyCoreNotesCreateRequest, KmisskeyCoreNotesCreateRequestCompanion, KmisskeyCoreNotesCreateResponse, KmisskeyCoreNotesCreateResponseCompanion, KmisskeyCoreNotesDeleteRequest, KmisskeyCoreNotesDeleteRequestCompanion, KmisskeyCoreNotesFeaturedRequest, KmisskeyCoreNotesFeaturedRequestCompanion, KmisskeyCoreNotesGlobalTimelineRequest, KmisskeyCoreNotesGlobalTimelineRequestCompanion, KmisskeyCoreNotesHybridTimelineRequest, KmisskeyCoreNotesHybridTimelineRequestCompanion, KmisskeyCoreNotesLocalTimelineRequest, KmisskeyCoreNotesLocalTimelineRequestCompanion, KmisskeyCoreNotesMentionsRequest, KmisskeyCoreNotesMentionsRequestCompanion, KmisskeyCoreNotesReactionsRequest, KmisskeyCoreNotesReactionsRequestCompanion, KmisskeyCoreNotesReactionsResponse, KmisskeyCoreNotesReactionsResponseCompanion, KmisskeyCoreNotesRenotesRequest, KmisskeyCoreNotesRenotesRequestCompanion, KmisskeyCoreNotesRepliesRequest, KmisskeyCoreNotesRepliesRequestCompanion, KmisskeyCoreNotesRequest, KmisskeyCoreNotesRequestCompanion, KmisskeyCoreNotesSearchByTagRequest, KmisskeyCoreNotesSearchByTagRequestCompanion, KmisskeyCoreNotesSearchRequest, KmisskeyCoreNotesSearchRequestCompanion, KmisskeyCoreNotesShowRequest, KmisskeyCoreNotesShowRequestCompanion, KmisskeyCoreNotesTimelineRequest, KmisskeyCoreNotesTimelineRequestCompanion, KmisskeyCoreNotesUserListTimelineRequest, KmisskeyCoreNotesUserListTimelineRequestCompanion, KmisskeyCoreNotification, KmisskeyCoreNotificationCompanion, KmisskeyCorePage, KmisskeyCorePageCompanion, KmisskeyCorePagingRequest, KmisskeyCorePagingRequestCompanion, KmisskeyCorePagingTokenRequest, KmisskeyCorePagingTokenRequestCompanion, KmisskeyCorePolicies, KmisskeyCorePoliciesCompanion, KmisskeyCorePoll, KmisskeyCorePollCompanion, KmisskeyCorePollRequest, KmisskeyCorePollRequestCompanion, KmisskeyCorePollsVoteRequest, KmisskeyCorePollsVoteRequestCompanion, KmisskeyCoreRateLimit, KmisskeyCoreRateLimitCompanion, KmisskeyCoreReactionsCreateRequest, KmisskeyCoreReactionsCreateRequestCompanion, KmisskeyCoreReactionsDeleteRequest, KmisskeyCoreReactionsDeleteRequestCompanion, KmisskeyCoreReadAnnouncementRequest, KmisskeyCoreReadAnnouncementRequestCompanion, KmisskeyCoreRelation, KmisskeyCoreRelationCompanion, KmisskeyCoreResponse<T>, KmisskeyCoreRole, KmisskeyCoreRoleCompanion, KmisskeyCoreServiceWorkerRegisterRequest, KmisskeyCoreServiceWorkerRegisterRequestCompanion, KmisskeyCoreServiceWorkerRegisterResponse, KmisskeyCoreServiceWorkerRegisterResponseCompanion, KmisskeyCoreShowGalleryPostRequest, KmisskeyCoreShowGalleryPostRequestCompanion, KmisskeyCoreShowInstanceRequest, KmisskeyCoreShowInstanceRequestCompanion, KmisskeyCoreShowWebhooksRequest, KmisskeyCoreShowWebhooksRequestCompanion, KmisskeyCoreTokenRequest, KmisskeyCoreTokenRequestCompanion, KmisskeyCoreTrend, KmisskeyCoreTrendCompanion, KmisskeyCoreUnlikeGalleryPostRequest, KmisskeyCoreUnlikeGalleryPostRequestCompanion, KmisskeyCoreUpdateGalleryPostRequest, KmisskeyCoreUpdateGalleryPostRequestCompanion, KmisskeyCoreUpdateWebhooksRequest, KmisskeyCoreUpdateWebhooksRequestCompanion, KmisskeyCoreUpdateWebhooksResponse, KmisskeyCoreUpdateWebhooksResponseCompanion, KmisskeyCoreUser, KmisskeyCoreUserCompanion, KmisskeyCoreUserDetailedNotMe, KmisskeyCoreUserDetailedNotMeCompanion, KmisskeyCoreUserKeyAuthSessionRequest, KmisskeyCoreUserKeyAuthSessionRequestCompanion, KmisskeyCoreUserKeyAuthSessionResponse, KmisskeyCoreUserKeyAuthSessionResponseCompanion, KmisskeyCoreUserLite, KmisskeyCoreUserLiteCompanion, KmisskeyCoreUserPolicies, KmisskeyCoreUserPoliciesCompanion, KmisskeyCoreUsersFollowersRequest, KmisskeyCoreUsersFollowersRequestCompanion, KmisskeyCoreUsersFollowingsRequest, KmisskeyCoreUsersFollowingsRequestCompanion, KmisskeyCoreUsersListsCreateRequest, KmisskeyCoreUsersListsCreateRequestCompanion, KmisskeyCoreUsersListsDeleteRequest, KmisskeyCoreUsersListsDeleteRequestCompanion, KmisskeyCoreUsersListsListRequest, KmisskeyCoreUsersListsListRequestCompanion, KmisskeyCoreUsersListsPullRequest, KmisskeyCoreUsersListsPullRequestCompanion, KmisskeyCoreUsersListsPushRequest, KmisskeyCoreUsersListsPushRequestCompanion, KmisskeyCoreUsersListsShowRequest, KmisskeyCoreUsersListsShowRequestCompanion, KmisskeyCoreUsersListsUpdateRequest, KmisskeyCoreUsersListsUpdateRequestCompanion, KmisskeyCoreUsersNotesRequest, KmisskeyCoreUsersNotesRequestCompanion, KmisskeyCoreUsersReactionsRequest, KmisskeyCoreUsersReactionsRequestCompanion, KmisskeyCoreUsersReactionsResponse, KmisskeyCoreUsersReactionsResponseCompanion, KmisskeyCoreUsersRecommendationRequest, KmisskeyCoreUsersRecommendationRequestCompanion, KmisskeyCoreUsersRelationRequest, KmisskeyCoreUsersRelationRequestCompanion, KmisskeyCoreUsersSearchByUsernameAndHostRequest, KmisskeyCoreUsersSearchByUsernameAndHostRequestCompanion, KmisskeyCoreUsersSearchRequest, KmisskeyCoreUsersSearchRequestCompanion, KmisskeyCoreUsersSearchWithAuthRequest, KmisskeyCoreUsersSearchWithAuthRequestCompanion, KmisskeyCoreUsersShowMultipleRequest, KmisskeyCoreUsersShowMultipleRequestCompanion, KmisskeyCoreUsersShowSingleRequest, KmisskeyCoreUsersShowSingleRequestCompanion, KmisskeyCoreWebhook, KmisskeyCoreWebhookCompanion, KmisskeyKmisskeyFactory, KmisskeyKotlinArray<T>, KmisskeyKotlinByteArray, KmisskeyKotlinByteIterator, KmisskeyKotlinException, KmisskeyKotlinIllegalStateException, KmisskeyKotlinNothing, KmisskeyKotlinRuntimeException, KmisskeyKotlinThrowable, KmisskeyKotlinx_serialization_coreSerialKind, KmisskeyKotlinx_serialization_coreSerializersModule;

@protocol KmisskeyCoreAccountsResource, KmisskeyCoreAnnouncementsResource, KmisskeyCoreAntennasResource, KmisskeyCoreApResource, KmisskeyCoreAppResource, KmisskeyCoreAuthResource, KmisskeyCoreBlocksResource, KmisskeyCoreChannelsResource, KmisskeyCoreClipsResource, KmisskeyCoreFavoritesResource, KmisskeyCoreFederationResource, KmisskeyCoreFilesResource, KmisskeyCoreFollowingResource, KmisskeyCoreGalleriesResource, KmisskeyCoreHashtagsResource, KmisskeyCoreListsResource, KmisskeyCoreMessagesResource, KmisskeyCoreMetaResource, KmisskeyCoreMisskey, KmisskeyCoreMutesResource, KmisskeyCoreNotesResource, KmisskeyCoreOtherResource, KmisskeyCorePollsResource, KmisskeyCoreReactionsResource, KmisskeyCoreUsersResource, KmisskeyCoreWebhooksResource, KmisskeyKotlinAnnotation, KmisskeyKotlinIterator, KmisskeyKotlinKAnnotatedElement, KmisskeyKotlinKClass, KmisskeyKotlinKClassifier, KmisskeyKotlinKDeclarationContainer, KmisskeyKotlinx_serialization_coreCompositeDecoder, KmisskeyKotlinx_serialization_coreCompositeEncoder, KmisskeyKotlinx_serialization_coreDecoder, KmisskeyKotlinx_serialization_coreDeserializationStrategy, KmisskeyKotlinx_serialization_coreEncoder, KmisskeyKotlinx_serialization_coreKSerializer, KmisskeyKotlinx_serialization_coreSerialDescriptor, KmisskeyKotlinx_serialization_coreSerializationStrategy, KmisskeyKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KmisskeyBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KmisskeyBase (KmisskeyBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KmisskeyMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmisskeyMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKmisskeyKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KmisskeyNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KmisskeyByte : KmisskeyNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KmisskeyUByte : KmisskeyNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KmisskeyShort : KmisskeyNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KmisskeyUShort : KmisskeyNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KmisskeyInt : KmisskeyNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KmisskeyUInt : KmisskeyNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KmisskeyLong : KmisskeyNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KmisskeyULong : KmisskeyNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KmisskeyFloat : KmisskeyNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KmisskeyDouble : KmisskeyNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KmisskeyBoolean : KmisskeyNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmisskeyFactory")))
@interface KmisskeyKmisskeyFactory : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmisskeyFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyKmisskeyFactory *shared __attribute__((swift_name("shared")));
- (id<KmisskeyCoreMisskey>)instanceUri:(NSString *)uri __attribute__((swift_name("instance(uri:)")));
- (id<KmisskeyCoreMisskey>)instanceUri:(NSString *)uri userAccessToken:(NSString *)userAccessToken __attribute__((swift_name("instance(uri:userAccessToken:)")));
- (id<KmisskeyCoreMisskey>)instanceUri:(NSString *)uri appSecret:(NSString *)appSecret userAccessToken:(NSString *)userAccessToken __attribute__((swift_name("instance(uri:appSecret:userAccessToken:)")));
@end

__attribute__((swift_name("CoreMisskey")))
@protocol KmisskeyCoreMisskey
@required
- (id<KmisskeyCoreAccountsResource>)accounts __attribute__((swift_name("accounts()")));
- (id<KmisskeyCoreAnnouncementsResource>)announcements __attribute__((swift_name("announcements()")));
- (id<KmisskeyCoreAntennasResource>)antennas __attribute__((swift_name("antennas()")));
- (id<KmisskeyCoreApResource>)ap __attribute__((swift_name("ap()")));
- (id<KmisskeyCoreAppResource>)app __attribute__((swift_name("app()")));
- (id<KmisskeyCoreAuthResource>)auth __attribute__((swift_name("auth()")));
- (id<KmisskeyCoreBlocksResource>)blocks __attribute__((swift_name("blocks()")));
- (id<KmisskeyCoreChannelsResource>)channels __attribute__((swift_name("channels()")));
- (id<KmisskeyCoreClipsResource>)clips __attribute__((swift_name("clips()")));
- (id<KmisskeyCoreFavoritesResource>)favorites __attribute__((swift_name("favorites()")));
- (id<KmisskeyCoreFederationResource>)federation __attribute__((swift_name("federation()")));
- (id<KmisskeyCoreFilesResource>)files __attribute__((swift_name("files()")));
- (id<KmisskeyCoreFollowingResource>)following __attribute__((swift_name("following()")));
- (id<KmisskeyCoreGalleriesResource>)gallery __attribute__((swift_name("gallery()")));
- (id<KmisskeyCoreHashtagsResource>)hashtags __attribute__((swift_name("hashtags()")));
- (id<KmisskeyCoreListsResource>)lists __attribute__((swift_name("lists()")));
- (id<KmisskeyCoreMessagesResource>)messages __attribute__((swift_name("messages()")));
- (id<KmisskeyCoreMetaResource>)meta __attribute__((swift_name("meta()")));
- (id<KmisskeyCoreMutesResource>)mutes __attribute__((swift_name("mutes()")));
- (id<KmisskeyCoreNotesResource>)notes __attribute__((swift_name("notes()")));
- (id<KmisskeyCoreOtherResource>)other __attribute__((swift_name("other()")));
- (id<KmisskeyCorePollsResource>)polls __attribute__((swift_name("polls()")));
- (id<KmisskeyCoreReactionsResource>)reactions __attribute__((swift_name("reactions()")));
- (id<KmisskeyCoreUsersResource>)users __attribute__((swift_name("users()")));
- (id<KmisskeyCoreWebhooksResource>)webhook __attribute__((swift_name("webhook()")));

/**
 * Get host to access.
 * (ex, misskey.io)
 */
@property (readonly) NSString *host __attribute__((swift_name("host")));

/**
 * Get authenticate token.
 * (called "i")
 */
@property (readonly) NSString * _Nullable i __attribute__((swift_name("i")));

/**
 * Get uri to access.
 * (ex, https://misskey.io/api)
 */
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end


/**
 * Account APIs.
 */
__attribute__((swift_name("CoreAccountsResource")))
@protocol KmisskeyCoreAccountsResource
@required

/**
 * 自分のアカウント情報を取得します。
 * https://misskey.io/api-doc#tag/account/operation/i
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)iRequest:(KmisskeyCoreIRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("i(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)iBlockingRequest:(KmisskeyCoreIRequest *)request __attribute__((swift_name("iBlocking(request:)")));

/**
 * お気に入りに登録した投稿一覧を取得します。
 * https://misskey.io/api-doc#tag/account/operation/i/favorites
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)iFavoritesRequest:(KmisskeyCoreIFavoritesRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreIFavoritesResponse *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("iFavorites(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreIFavoritesResponse *> *> *)iFavoritesBlockingRequest:(KmisskeyCoreIFavoritesRequest *)request __attribute__((swift_name("iFavoritesBlocking(request:)")));

/**
 * 通知一覧を取得します。
 * https://misskey.io/api-doc#operation/i/notifications
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)iNotificationsRequest:(KmisskeyCoreINotificationsRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotification *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("iNotifications(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotification *> *> *)iNotificationsBlockingRequest:(KmisskeyCoreINotificationsRequest *)request __attribute__((swift_name("iNotificationsBlocking(request:)")));

/**
 * ログイン中のユーザーのプロフィール・設定を更新します。パラメータの値を設定しなければ、その項目は変更されません。
 *
 * https://misskey.io/api-doc#tag/account/operation/i/update
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)iUpdateRequest:(KmisskeyCoreIUpdateRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("iUpdate(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)iUpdateBlockingRequest:(KmisskeyCoreIUpdateRequest *)request __attribute__((swift_name("iUpdateBlocking(request:)")));

/**
 * 指定したノートをピン留めに登録します。
 *
 * https://misskey.io/api-doc#tag/account/operation/i/pin
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pinNoteRequest:(KmisskeyCoreIPinRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pinNote(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)pinNoteBlockingRequest:(KmisskeyCoreIPinRequest *)request __attribute__((swift_name("pinNoteBlocking(request:)")));

/**
 * 指定したノートをピン留めから削除します。
 *
 * https://misskey.io/api-doc#tag/account/operation/i/unpin
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unpinNoteRequest:(KmisskeyCoreIUnpinRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unpinNote(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)unpinNoteBlockingRequest:(KmisskeyCoreIUnpinRequest *)request __attribute__((swift_name("unpinNoteBlocking(request:)")));
@end


/**
 * Announcements APIs.
 */
__attribute__((swift_name("CoreAnnouncementsResource")))
@protocol KmisskeyCoreAnnouncementsResource
@required

/**
 * サーバーからのお知らせを取得します。
 *
 * https://misskey.io/api-doc#tag/meta/operation/announcements
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)announcementsRequest:(KmisskeyCoreAnnouncementsRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreAnnouncements *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("announcements(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreAnnouncements *> *> *)announcementsBlockingRequest:(KmisskeyCoreAnnouncementsRequest *)request __attribute__((swift_name("announcementsBlocking(request:)")));

/**
 * お知らせを既読にします。
 *
 * https://misskey.io/api-doc#tag/account/operation/i/read-announcement
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAnnouncementRequest:(KmisskeyCoreReadAnnouncementRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAnnouncement(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)readAnnouncementBlockingRequest:(KmisskeyCoreReadAnnouncementRequest *)request __attribute__((swift_name("readAnnouncementBlocking(request:)")));
@end

__attribute__((swift_name("CoreAntennasResource")))
@protocol KmisskeyCoreAntennasResource
@required

/**
 * ログイン中のユーザーが作成したアンテナの一覧を取得します。
 *
 * https://misskey.io/api-doc#tag/antennas/operation/antennas/list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KmisskeyCoreAntennasListRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreAntenna *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreAntenna *> *> *)listBlockingRequest:(KmisskeyCoreAntennasListRequest *)request __attribute__((swift_name("listBlocking(request:)")));

/**
 * https://misskey.io/api-doc#tag/antennas/operation/antennas/notes
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notesRequest:(KmisskeyCoreAntennasNotesRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("notes(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)notesBlockingRequest:(KmisskeyCoreAntennasNotesRequest *)request __attribute__((swift_name("notesBlocking(request:)")));
@end

__attribute__((swift_name("CoreApResource")))
@protocol KmisskeyCoreApResource
@required

/**
 * 指定した uri の Note または User を取得します。
 * @see "https://misskey.io/api-doc.operation/ap/show"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreApShowRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreApShowResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreApShowResponse *> *)showBlockingRequest:(KmisskeyCoreApShowRequest *)request __attribute__((swift_name("showBlocking(request:)")));
@end


/**
 * App APIs.
 */
__attribute__((swift_name("CoreAppResource")))
@protocol KmisskeyCoreAppResource
@required

/**
 * アプリを作成します。
 * https://misskey.io/api-doc#operation/app/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createAppRequest:(KmisskeyCoreCreateAppRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreCreateAppResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createApp(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreCreateAppResponse *> *)createAppBlockingRequest:(KmisskeyCoreCreateAppRequest *)request __attribute__((swift_name("createAppBlocking(request:)")));
@end


/**
 * Auth APIs.
 */
__attribute__((swift_name("CoreAuthResource")))
@protocol KmisskeyCoreAuthResource
@required

/**
 * MiAuth の認証ページのアドレスを生成します。
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMiAuthUriRequest:(KmisskeyCoreGetMiAuthUriRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMiAuthUri(request:completionHandler:)")));
- (KmisskeyCoreResponse<NSString *> *)getMiAuthUriBlockingRequest:(KmisskeyCoreGetMiAuthUriRequest *)request __attribute__((swift_name("getMiAuthUriBlocking(request:)")));

/**
 * アプリを認証するためのトークンを作成します。
 * https://misskey.io/api-doc#operation/auth/session/generate
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sessionGenerateRequest:(KmisskeyCoreGenerateAuthSessionRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreGenerateAuthSessionResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sessionGenerate(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGenerateAuthSessionResponse *> *)sessionGenerateBlockingRequest:(KmisskeyCoreGenerateAuthSessionRequest *)request __attribute__((swift_name("sessionGenerateBlocking(request:)")));

/**
 * ユーザーのアクセストークンを発行します。
 * https://misskey.io/api-doc#operation/auth/session/userkey
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sessionUserKeyRequest:(KmisskeyCoreUserKeyAuthSessionRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreUserKeyAuthSessionResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sessionUserKey(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUserKeyAuthSessionResponse *> *)sessionUserKeyBlockingRequest:(KmisskeyCoreUserKeyAuthSessionRequest *)request __attribute__((swift_name("sessionUserKeyBlocking(request:)")));
@end

__attribute__((swift_name("CoreBlocksResource")))
@protocol KmisskeyCoreBlocksResource
@required

/**
 * 指定したユーザーをブロックします。
 * https://misskey.io/api-doc#operation/blocking/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreBlocksCreateRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)createBlockingRequest:(KmisskeyCoreBlocksCreateRequest *)request __attribute__((swift_name("createBlocking(request:)")));

/**
 * 指定したユーザーのブロックを解除します。
 * https://misskey.io/api-doc#operation/blocking/delete
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreBlocksDeleteRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)deleteBlockingRequest:(KmisskeyCoreBlocksDeleteRequest *)request __attribute__((swift_name("deleteBlocking(request:)")));

/**
 * ブロックしているユーザー一覧を取得します。
 * https://misskey.io/api-doc#operation/blocking/list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KmisskeyCoreBlocksListRequest *)request completionHandler_:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreBlock *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreBlock *> *> *)listBlockingRequest_:(KmisskeyCoreBlocksListRequest *)request __attribute__((swift_name("listBlocking(request_:)")));
@end

__attribute__((swift_name("CoreChannelsResource")))
@protocol KmisskeyCoreChannelsResource
@required

/**
 * フォローしているチャンネル一覧を取得します。
 * @see "https://misskey.io/api-doc.tag/channels/operation/channels/followed"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followedRequest:(KmisskeyCoreChannelsFollowedRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("followed(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannel *> *> *)followedBlockingRequest:(KmisskeyCoreChannelsFollowedRequest *)request __attribute__((swift_name("followedBlocking(request:)")));

/**
 * お気に入りのチャンネル一覧を取得します。
 * @see "https://misskey.io/api-doc.tag/channels/operation/channels/my-favorites"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)myFavoritesRequest:(KmisskeyCoreChannelsMyFavoritesRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("myFavorites(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannel *> *> *)myFavoritesBlockingRequest:(KmisskeyCoreChannelsMyFavoritesRequest *)request __attribute__((swift_name("myFavoritesBlocking(request:)")));

/**
 * 管理しているチャンネル一覧を取得します。
 * @see "https://misskey.io/api-doc.tag/channels/operation/channels/owned"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ownedRequest:(KmisskeyCoreChannelsOwnedRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("owned(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannel *> *> *)ownedBlockingRequest:(KmisskeyCoreChannelsOwnedRequest *)request __attribute__((swift_name("ownedBlocking(request:)")));

/**
 * 指定したチャンネルの情報を取得します。
 * @see "https://misskey.io/api-doc.tag/notes/operation/channels/show"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreChannelsShowRequest *)request completionHandler_:(void (^)(KmisskeyCoreResponse<KmisskeyCoreChannel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler_:)")));
- (KmisskeyCoreResponse<KmisskeyCoreChannel *> *)showBlockingRequest_:(KmisskeyCoreChannelsShowRequest *)request __attribute__((swift_name("showBlocking(request_:)")));

/**
 * 指定したチャンネルのタイムラインを取得します。
 * @see "https://misskey.io/api-doc.tag/notes/operation/channels/timeline"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)timelineRequest:(KmisskeyCoreChannelsTimelineRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("timeline(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)timelineBlockingRequest:(KmisskeyCoreChannelsTimelineRequest *)request __attribute__((swift_name("timelineBlocking(request:)")));
@end

__attribute__((swift_name("CoreClipsResource")))
@protocol KmisskeyCoreClipsResource
@required

/**
 * ノートをクリップに追加します。
 *
 * @see "https://misskey.io/api-doc.tag/account/operation/clips/add-note"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addNoteRequest:(KmisskeyCoreClipsAddNoteRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addNote(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)addNoteBlockingRequest:(KmisskeyCoreClipsAddNoteRequest *)request __attribute__((swift_name("addNoteBlocking(request:)")));

/**
 * クリップを作成します。
 *
 * @see "https://misskey.io/api-doc.tag/clips/operation/clips/create"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreClipsCreateRequest *)request completionHandler_:(void (^)(KmisskeyCoreResponse<KmisskeyCoreClip *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler_:)")));
- (KmisskeyCoreResponse<KmisskeyCoreClip *> *)createBlockingRequest_:(KmisskeyCoreClipsCreateRequest *)request __attribute__((swift_name("createBlocking(request_:)")));

/**
 * クリップを削除します。
 *
 * @see "https://misskey.io/api-doc.tag/clips/operation/clips/delete"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteClipRequest:(KmisskeyCoreClipsDeleteRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteClip(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)deleteClipBlockingRequest:(KmisskeyCoreClipsDeleteRequest *)request __attribute__((swift_name("deleteClipBlocking(request:)")));

/**
 * ログイン中のユーザーが作成したクリップの一覧を取得します。
 *
 * https://misskey.io/api-doc#tag/clips/operation/clips/list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KmisskeyCoreClipsListRequest *)request completionHandler__:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreClip *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler__:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreClip *> *> *)listBlockingRequest__:(KmisskeyCoreClipsListRequest *)request __attribute__((swift_name("listBlocking(request__:)")));

/**
 * クリップに含まれるノートを取得します。
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notesRequest:(KmisskeyCoreClipsNotesRequest *)request completionHandler_:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("notes(request:completionHandler_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)notesBlockingRequest_:(KmisskeyCoreClipsNotesRequest *)request __attribute__((swift_name("notesBlocking(request_:)")));

/**
 * ノートをクリップから削除します。
 *
 * @see "https://misskey.io/api-doc.tag/account/operation/clips/remove-note"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeNoteRequest:(KmisskeyCoreClipsRemoveNoteRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeNote(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)removeNoteBlockingRequest:(KmisskeyCoreClipsRemoveNoteRequest *)request __attribute__((swift_name("removeNoteBlocking(request:)")));

/**
 * クリップを取得します。
 *
 * @see "https://misskey.io/api-doc.tag/clips/operation/clips/show"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreClipsShowRequest *)request completionHandler__:(void (^)(KmisskeyCoreResponse<KmisskeyCoreClip *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler__:)")));
- (KmisskeyCoreResponse<KmisskeyCoreClip *> *)showBlockingRequest__:(KmisskeyCoreClipsShowRequest *)request __attribute__((swift_name("showBlocking(request__:)")));

/**
 * クリップの情報を更新します。
 *
 * @see "https://misskey.io/api-doc.tag/clips/operation/clips/update"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateRequest:(KmisskeyCoreClipsUpdateRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreClip *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreClip *> *)updateBlockingRequest:(KmisskeyCoreClipsUpdateRequest *)request __attribute__((swift_name("updateBlocking(request:)")));
@end

__attribute__((swift_name("CoreFavoritesResource")))
@protocol KmisskeyCoreFavoritesResource
@required

/**
 * 指定した投稿をお気に入りに登録します。
 * https://misskey.io/api-doc#operation/notes/favorites/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreFavoritesCreateRequest *)request completionHandler__:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler__:)")));
- (KmisskeyCoreEmptyResponse *)createBlockingRequest__:(KmisskeyCoreFavoritesCreateRequest *)request __attribute__((swift_name("createBlocking(request__:)")));

/**
 * 指定した投稿のお気に入りを解除します。
 * https://misskey.io/api-doc#operation/notes/favorites/delete
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreFavoritesDeleteRequest *)request completionHandler_:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler_:)")));
- (KmisskeyCoreEmptyResponse *)deleteBlockingRequest_:(KmisskeyCoreFavoritesDeleteRequest *)request __attribute__((swift_name("deleteBlocking(request_:)")));
@end


/**
 * Federation APIs.
 */
__attribute__((swift_name("CoreFederationResource")))
@protocol KmisskeyCoreFederationResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showInstanceRequest:(KmisskeyCoreShowInstanceRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreFederationInstanceResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("showInstance(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreFederationInstanceResponse *> *)showInstanceBlockingRequest:(KmisskeyCoreShowInstanceRequest *)request __attribute__((swift_name("showInstanceBlocking(request:)")));
@end

__attribute__((swift_name("CoreFilesResource")))
@protocol KmisskeyCoreFilesResource
@required

/**
 * ドライブにファイルをアップロードします。
 * https://misskey.io/api-doc#operation/drive/files/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreFilesCreateRequest *)request completionHandler___:(void (^)(KmisskeyCoreResponse<KmisskeyCoreFile *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler___:)")));
- (KmisskeyCoreResponse<KmisskeyCoreFile *> *)createBlockingRequest___:(KmisskeyCoreFilesCreateRequest *)request __attribute__((swift_name("createBlocking(request___:)")));
@end

__attribute__((swift_name("CoreFollowingResource")))
@protocol KmisskeyCoreFollowingResource
@required

/**
 * フォローを許可します。
 * https://misskey.io/api-doc#tag/following/operation/following/requests/accept
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acceptRequestRequest:(KmisskeyCoreFollowingRequestsAcceptRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("acceptRequest(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)acceptRequestBlockingRequest:(KmisskeyCoreFollowingRequestsAcceptRequest *)request __attribute__((swift_name("acceptRequestBlocking(request:)")));

/**
 * 指定したユーザーをフォローします。
 * https://misskey.io/api-doc#operation/following/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreFollowingCreateRequest *)request completionHandler____:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler____:)")));
- (KmisskeyCoreEmptyResponse *)createBlockingRequest____:(KmisskeyCoreFollowingCreateRequest *)request __attribute__((swift_name("createBlocking(request____:)")));

/**
 * 指定したユーザーのフォローを解除します。
 * https://misskey.io/api-doc#operation/following/delete
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreFollowingDeleteRequest *)request completionHandler__:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler__:)")));
- (KmisskeyCoreEmptyResponse *)deleteBlockingRequest__:(KmisskeyCoreFollowingDeleteRequest *)request __attribute__((swift_name("deleteBlocking(request__:)")));

/**
 * フォローを拒否します。
 * https://misskey.io/api-doc#tag/following/operation/following/requests/reject
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectRequestRequest:(KmisskeyCoreFollowingRequestsRejectRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectRequest(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)rejectRequestBlockingRequest:(KmisskeyCoreFollowingRequestsRejectRequest *)request __attribute__((swift_name("rejectRequestBlocking(request:)")));

/**
 * フォローリクエストの一覧を取得します。
 * https://misskey.io/api-doc#tag/following/operation/following/requests/list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestsListRequest:(KmisskeyCoreFollowingRequestsListRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreFollowingRequestsListResponse *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestsList(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreFollowingRequestsListResponse *> *> *)requestsListBlockingRequest:(KmisskeyCoreFollowingRequestsListRequest *)request __attribute__((swift_name("requestsListBlocking(request:)")));
@end

__attribute__((swift_name("CoreGalleriesResource")))
@protocol KmisskeyCoreGalleriesResource
@required

/**
 * Create a gallery post.
 * @see "https://misskey.io/api-doc.operation/gallery/posts/create"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreCreateGalleryPostRequest *)request completionHandler_____:(void (^)(KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler_____:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> *)createBlockingRequest_____:(KmisskeyCoreCreateGalleryPostRequest *)request __attribute__((swift_name("createBlocking(request_____:)")));

/**
 * Delete a gallery post.
 *
 * @see "https://misskey.io/api-doc.operation/gallery/posts/delete"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreDeleteGalleryPostRequest *)request completionHandler___:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler___:)")));
- (KmisskeyCoreEmptyResponse *)deleteBlockingRequest___:(KmisskeyCoreDeleteGalleryPostRequest *)request __attribute__((swift_name("deleteBlocking(request___:)")));

/**
 * Like a gallery post.
 * @see "https://misskey.io/api-doc.operation/gallery/posts/like"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)likeRequest:(KmisskeyCoreLikeGalleryPostRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("like(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)likeBlockingRequest:(KmisskeyCoreLikeGalleryPostRequest *)request __attribute__((swift_name("likeBlocking(request:)")));

/**
 * Get my gallery posts.
 * @see "https://misskey.io/api-doc.operation/i/gallery/posts"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)myPostsRequest:(KmisskeyCoreIListGalleryPostsRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreGalleryPost *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("myPosts(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreGalleryPost *> *> *)myPostsBlockingRequest:(KmisskeyCoreIListGalleryPostsRequest *)request __attribute__((swift_name("myPostsBlocking(request:)")));

/**
 * Get gallery posts.
 * @see "https://misskey.io/api-doc.operation/gallery/posts"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postsRequest:(KmisskeyCoreListGalleryPostsRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreGalleryPost *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("posts(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreGalleryPost *> *> *)postsBlockingRequest:(KmisskeyCoreListGalleryPostsRequest *)request __attribute__((swift_name("postsBlocking(request:)")));

/**
 * Show a gallery post.
 * @see "https://misskey.io/api-doc.operation/gallery/posts/show"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreShowGalleryPostRequest *)request completionHandler___:(void (^)(KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler___:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> *)showBlockingRequest___:(KmisskeyCoreShowGalleryPostRequest *)request __attribute__((swift_name("showBlocking(request___:)")));

/**
 * Unlike a gallery post.
 *
 * @see "https://misskey.io/api-doc.operation/gallery/posts/unlike"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unlikeRequest:(KmisskeyCoreUnlikeGalleryPostRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unlike(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)unlikeBlockingRequest:(KmisskeyCoreUnlikeGalleryPostRequest *)request __attribute__((swift_name("unlikeBlocking(request:)")));

/**
 * Update a gallery post.
 * @see "https://misskey.io/api-doc.operation/gallery/posts/delete"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateRequest:(KmisskeyCoreUpdateGalleryPostRequest *)request completionHandler_:(void (^)(KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(request:completionHandler_:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> *)updateBlockingRequest_:(KmisskeyCoreUpdateGalleryPostRequest *)request __attribute__((swift_name("updateBlocking(request_:)")));

/**
 * Get user's gallery posts.
 * @see "https://misskey.io/api-doc.operation/users/gallery/posts"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersPostsRequest:(KmisskeyCoreListUserGalleryPostsRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreGalleryPost *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersPosts(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreGalleryPost *> *> *)usersPostsBlockingRequest:(KmisskeyCoreListUserGalleryPostsRequest *)request __attribute__((swift_name("usersPostsBlocking(request:)")));
@end

__attribute__((swift_name("CoreHashtagsResource")))
@protocol KmisskeyCoreHashtagsResource
@required

/**
 * ハッシュタグのトレンドを取得します。
 * https://misskey.io/api-doc#operation/hashtags/trend
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)trendRequest:(KmisskeyCoreHashtagsTrendRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreTrend *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("trend(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreTrend *> *> *)trendBlockingRequest:(KmisskeyCoreHashtagsTrendRequest *)request __attribute__((swift_name("trendBlocking(request:)")));
@end

__attribute__((swift_name("CoreListsResource")))
@protocol KmisskeyCoreListsResource
@required

/**
 * リストを作成します。
 * @see "https://misskey.io/api-doc.tag/lists/operation/users/lists/create"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreUsersListsCreateRequest *)request completionHandler______:(void (^)(KmisskeyCoreResponse<KmisskeyCoreNoteList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler______:)")));
- (KmisskeyCoreResponse<KmisskeyCoreNoteList *> *)createBlockingRequest______:(KmisskeyCoreUsersListsCreateRequest *)request __attribute__((swift_name("createBlocking(request______:)")));

/**
 * リストを削除します。
 * @see "https://misskey.io/api-doc.tag/lists/operation/users/lists/delete"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreUsersListsDeleteRequest *)request completionHandler____:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler____:)")));
- (KmisskeyCoreEmptyResponse *)deleteBlockingRequest____:(KmisskeyCoreUsersListsDeleteRequest *)request __attribute__((swift_name("deleteBlocking(request____:)")));

/**
 * 認証ユーザーの作成したユーザーリスト一覧を取得します。
 * @see "https://misskey.io/api-doc.operation/users/lists/list"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KmisskeyCoreUsersListsListRequest *)request completionHandler___:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNoteList *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler___:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNoteList *> *> *)listBlockingRequest___:(KmisskeyCoreUsersListsListRequest *)request __attribute__((swift_name("listBlocking(request___:)")));

/**
 * 指定したユーザーをリストから削除します。
 * @see "https://misskey.io/api-doc.tag/lists/operation/users/lists/pull"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pullRequest:(KmisskeyCoreUsersListsPullRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pull(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)pullBlockingRequest:(KmisskeyCoreUsersListsPullRequest *)request __attribute__((swift_name("pullBlocking(request:)")));

/**
 * 指定したユーザーをリストに追加します。
 * @see "https://misskey.io/api-doc.tag/lists/operation/users/lists/push"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pushRequest:(KmisskeyCoreUsersListsPushRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("push(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)pushBlockingRequest:(KmisskeyCoreUsersListsPushRequest *)request __attribute__((swift_name("pushBlocking(request:)")));

/**
 * 指定したユーザーリストの情報を取得します。
 *
 * @see "https://misskey.io/api-doc.operation/users/lists/show"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreUsersListsShowRequest *)request completionHandler____:(void (^)(KmisskeyCoreResponse<KmisskeyCoreNoteList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler____:)")));
- (KmisskeyCoreResponse<KmisskeyCoreNoteList *> *)showBlockingRequest____:(KmisskeyCoreUsersListsShowRequest *)request __attribute__((swift_name("showBlocking(request____:)")));

/**
 * リストを更新します。
 * @see "https://misskey.io/api-doc.tag/lists/operation/users/lists/update"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateRequest:(KmisskeyCoreUsersListsUpdateRequest *)request completionHandler__:(void (^)(KmisskeyCoreResponse<KmisskeyCoreNoteList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(request:completionHandler__:)")));
- (KmisskeyCoreResponse<KmisskeyCoreNoteList *> *)updateBlockingRequest__:(KmisskeyCoreUsersListsUpdateRequest *)request __attribute__((swift_name("updateBlocking(request__:)")));
@end

__attribute__((swift_name("CoreMessagesResource")))
@protocol KmisskeyCoreMessagesResource
@required

/**
 * トークの履歴を取得します。
 * https://misskey.io/api-doc#operation/messaging/history
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)historyRequest:(KmisskeyCoreMessagingHistoryRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMessage *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("history(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMessage *> *> *)historyBlockingRequest:(KmisskeyCoreMessagingHistoryRequest *)request __attribute__((swift_name("historyBlocking(request:)")));

/**
 * トークメッセージ一覧を取得します。
 * https://misskey.io/api-doc#operation/messaging/messages
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)messagesRequest:(KmisskeyCoreMessagingMessagesRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMessage *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("messages(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMessage *> *> *)messagesBlockingRequest:(KmisskeyCoreMessagingMessagesRequest *)request __attribute__((swift_name("messagesBlocking(request:)")));

/**
 * トークメッセージを送信します。
 * https://misskey.io/api-doc#operation/messaging/messages/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)messagesCreateRequest:(KmisskeyCoreMessagingMessagesCreateRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("messagesCreate(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)messagesCreateBlockingRequest:(KmisskeyCoreMessagingMessagesCreateRequest *)request __attribute__((swift_name("messagesCreateBlocking(request:)")));

/**
 * 指定したトークメッセージを削除します。
 * https://misskey.io/api-doc#operation/messaging/messages/delete
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)messagesDeleteRequest:(KmisskeyCoreMessagingMessagesDeleteRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("messagesDelete(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)messagesDeleteBlockingRequest:(KmisskeyCoreMessagingMessagesDeleteRequest *)request __attribute__((swift_name("messagesDeleteBlocking(request:)")));
@end

__attribute__((swift_name("CoreMetaResource")))
@protocol KmisskeyCoreMetaResource
@required

/**
 * (from v13)
 * 絵文字情報を取得します。
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emojisRequest:(KmisskeyCoreEmojisRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreEmojisResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emojis(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreEmojisResponse *> *)emojisBlockingRequest:(KmisskeyCoreEmojisRequest *)request __attribute__((swift_name("emojisBlocking(request:)")));

/**
 * オンラインになっているユーザ数を取得します。
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOnlineUsersCountWithCompletionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreGetOnlineUsersCountResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOnlineUsersCount(completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGetOnlineUsersCountResponse *> *)getOnlineUsersCountBlocking __attribute__((swift_name("getOnlineUsersCountBlocking()")));

/**
 * インスタンス情報を取得します。
 * https://misskey.io/api-doc#operation/meta
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)metaRequest:(KmisskeyCoreMetaRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreMeta *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("meta(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreMeta *> *)metaBlockingRequest:(KmisskeyCoreMetaRequest *)request __attribute__((swift_name("metaBlocking(request:)")));
@end

__attribute__((swift_name("CoreMutesResource")))
@protocol KmisskeyCoreMutesResource
@required

/**
 * ユーザーをミュートします。
 * https://misskey.io/api-doc#operation/mute/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreMutesCreateRequest *)request completionHandler_______:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler_______:)")));
- (KmisskeyCoreEmptyResponse *)createBlockingRequest_______:(KmisskeyCoreMutesCreateRequest *)request __attribute__((swift_name("createBlocking(request_______:)")));

/**
 * ユーザーのミュートを解除します。
 * https://misskey.io/api-doc#operation/mute/delete
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreMutesDeleteRequest *)request completionHandler_____:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler_____:)")));
- (KmisskeyCoreEmptyResponse *)deleteBlockingRequest_____:(KmisskeyCoreMutesDeleteRequest *)request __attribute__((swift_name("deleteBlocking(request_____:)")));

/**
 * ミュートしているユーザー一覧を取得します。
 * https://misskey.io/api-doc#operation/mute/list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KmisskeyCoreMutesListRequest *)request completionHandler____:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMute *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler____:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMute *> *> *)listBlockingRequest____:(KmisskeyCoreMutesListRequest *)request __attribute__((swift_name("listBlocking(request____:)")));
@end

__attribute__((swift_name("CoreNotesResource")))
@protocol KmisskeyCoreNotesResource
@required

/**
 * 指定した投稿への返信/引用を取得します。
 * https://misskey.io/api-doc#operation/notes/children
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)childrenRequest:(KmisskeyCoreNotesChildrenRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("children(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)childrenBlockingRequest:(KmisskeyCoreNotesChildrenRequest *)request __attribute__((swift_name("childrenBlocking(request:)")));

/**
 * 指定した投稿の文脈を取得します。
 * https://misskey.io/api-doc#operation/notes/conversation
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationRequest:(KmisskeyCoreNotesConversationRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversation(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)conversationBlockingRequest:(KmisskeyCoreNotesConversationRequest *)request __attribute__((swift_name("conversationBlocking(request:)")));

/**
 * 投稿します。
 * https://misskey.io/api-doc#operation/notes/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreNotesCreateRequest *)request completionHandler________:(void (^)(KmisskeyCoreResponse<KmisskeyCoreNotesCreateResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler________:)")));
- (KmisskeyCoreResponse<KmisskeyCoreNotesCreateResponse *> *)createBlockingRequest________:(KmisskeyCoreNotesCreateRequest *)request __attribute__((swift_name("createBlocking(request________:)")));

/**
 * 指定した投稿を削除します。
 * https://misskey.io/api-doc#operation/notes/delete
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreNotesDeleteRequest *)request completionHandler______:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler______:)")));
- (KmisskeyCoreEmptyResponse *)deleteBlockingRequest______:(KmisskeyCoreNotesDeleteRequest *)request __attribute__((swift_name("deleteBlocking(request______:)")));

/**
 * Featured な投稿を取得します。
 * https://misskey.io/api-doc#operation/notes/featured
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)featuredRequest:(KmisskeyCoreNotesFeaturedRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("featured(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)featuredBlockingRequest:(KmisskeyCoreNotesFeaturedRequest *)request __attribute__((swift_name("featuredBlocking(request:)")));

/**
 * グローバルタイムラインを取得します。
 * https://misskey.io/api-doc#operation/notes/global-timeline
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)globalTimelineRequest:(KmisskeyCoreNotesGlobalTimelineRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("globalTimeline(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)globalTimelineBlockingRequest:(KmisskeyCoreNotesGlobalTimelineRequest *)request __attribute__((swift_name("globalTimelineBlocking(request:)")));

/**
 * ソーシャルタイムラインを取得します。
 * https://misskey.io/api-doc#operation/notes/hybrid-timeline
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hybridTimelineRequest:(KmisskeyCoreNotesHybridTimelineRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hybridTimeline(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)hybridTimelineBlockingRequest:(KmisskeyCoreNotesHybridTimelineRequest *)request __attribute__((swift_name("hybridTimelineBlocking(request:)")));

/**
 * ローカルタイムラインを取得します。
 * https://misskey.io/api-doc#operation/notes/local-timeline
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)localTimelineRequest:(KmisskeyCoreNotesLocalTimelineRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("localTimeline(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)localTimelineBlockingRequest:(KmisskeyCoreNotesLocalTimelineRequest *)request __attribute__((swift_name("localTimelineBlocking(request:)")));

/**
 * 自分に言及している投稿の一覧を取得します。
 * https://misskey.io/api-doc#operation/notes/mentions
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)mentionsRequest:(KmisskeyCoreNotesMentionsRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mentions(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)mentionsBlockingRequest:(KmisskeyCoreNotesMentionsRequest *)request __attribute__((swift_name("mentionsBlocking(request:)")));

/**
 * 投稿を取得します。
 * https://misskey.io/api-doc#operation/notes
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notesRequest:(KmisskeyCoreNotesRequest *)request completionHandler__:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("notes(request:completionHandler__:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)notesBlockingRequest__:(KmisskeyCoreNotesRequest *)request __attribute__((swift_name("notesBlocking(request__:)")));

/**
 * ノートのリアクションを取得します。
 * https://misskey.io/api-doc#tag/notes/operation/notes/reactions
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactionsRequest:(KmisskeyCoreNotesReactionsRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesReactionsResponse *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactions(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesReactionsResponse *> *> *)reactionsBlockingRequest:(KmisskeyCoreNotesReactionsRequest *)request __attribute__((swift_name("reactionsBlocking(request:)")));

/**
 * ノートに対するRenote一覧を取得します。
 * @see "https://misskey.io/api-doc.tag/notes/operation/notes/renotes"
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)renotesRequest:(KmisskeyCoreNotesRenotesRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("renotes(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)renotesBlockingRequest:(KmisskeyCoreNotesRenotesRequest *)request __attribute__((swift_name("renotesBlocking(request:)")));

/**
 * 指定した投稿への返信を取得します。
 * https://misskey.io/api-doc#operation/notes/replies
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)repliesRequest:(KmisskeyCoreNotesRepliesRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("replies(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)repliesBlockingRequest:(KmisskeyCoreNotesRepliesRequest *)request __attribute__((swift_name("repliesBlocking(request:)")));

/**
 * 投稿を検索します。
 * https://misskey.io/api-doc#operation/notes/search
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchRequest:(KmisskeyCoreNotesSearchRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)searchBlockingRequest:(KmisskeyCoreNotesSearchRequest *)request __attribute__((swift_name("searchBlocking(request:)")));

/**
 * 指定されたハッシュタグが付けられたノートを取得します。
 * https://misskey.io/api-doc#tag/notes/operation/notes/search-by-tag
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchByTagRequest:(KmisskeyCoreNotesSearchByTagRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchByTag(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)searchByTagBlockingRequest:(KmisskeyCoreNotesSearchByTagRequest *)request __attribute__((swift_name("searchByTagBlocking(request:)")));

/**
 * 指定した投稿を取得します。
 * https://misskey.io/api-doc#operation/notes/show
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreNotesShowRequest *)request completionHandler_____:(void (^)(KmisskeyCoreResponse<KmisskeyCoreNote *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler_____:)")));
- (KmisskeyCoreResponse<KmisskeyCoreNote *> *)showBlockingRequest_____:(KmisskeyCoreNotesShowRequest *)request __attribute__((swift_name("showBlocking(request_____:)")));

/**
 * タイムラインを取得します。
 * https://misskey.io/api-doc#operation/notes/timeline
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)timelineRequest:(KmisskeyCoreNotesTimelineRequest *)request completionHandler_:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("timeline(request:completionHandler_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)timelineBlockingRequest_:(KmisskeyCoreNotesTimelineRequest *)request __attribute__((swift_name("timelineBlocking(request_:)")));

/**
 * 指定した投稿のRenoteを解除します。
 * https://misskey.io/api-doc#operation/notes/unrenote
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unrenoteRequest:(KmisskeyCoreNoteUnrenoteRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unrenote(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)unrenoteBlockingRequest:(KmisskeyCoreNoteUnrenoteRequest *)request __attribute__((swift_name("unrenoteBlocking(request:)")));

/**
 * 指定したユーザーリストのタイムラインを取得します。
 * https://misskey.io/api-doc#operation/notes/user-list-timeline
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)userListTimelineRequest:(KmisskeyCoreNotesUserListTimelineRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("userListTimeline(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)userListTimelineBlockingRequest:(KmisskeyCoreNotesUserListTimelineRequest *)request __attribute__((swift_name("userListTimelineBlocking(request:)")));

/**
 * 指定したユーザーのタイムラインを取得します。
 * https://misskey.io/api-doc#operation/users/notes
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersRequest:(KmisskeyCoreUsersNotesRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("users(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)usersBlockingRequest:(KmisskeyCoreUsersNotesRequest *)request __attribute__((swift_name("usersBlocking(request:)")));
@end

__attribute__((swift_name("CoreOtherResource")))
@protocol KmisskeyCoreOtherResource
@required

/**
 * サービスワーカーの通知先を登録します
 * https://misskey.io/api-doc#operation/sw/register
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)serviceWorkerRegisterRequest:(KmisskeyCoreServiceWorkerRegisterRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyCoreServiceWorkerRegisterResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("serviceWorkerRegister(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyCoreServiceWorkerRegisterResponse *> *)serviceWorkerRegisterBlockingRequest:(KmisskeyCoreServiceWorkerRegisterRequest *)request __attribute__((swift_name("serviceWorkerRegisterBlocking(request:)")));
@end

__attribute__((swift_name("CorePollsResource")))
@protocol KmisskeyCorePollsResource
@required

/**
 * 指定した投稿のアンケートに投票します。
 * (注釈：複数回答が可能な投票については回答毎にこの API をコールする)
 * https://misskey.io/api-doc#operation/notes/polls/vote
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pollsVoteRequest:(KmisskeyCorePollsVoteRequest *)request completionHandler:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pollsVote(request:completionHandler:)")));
- (KmisskeyCoreEmptyResponse *)pollsVoteBlockingRequest:(KmisskeyCorePollsVoteRequest *)request __attribute__((swift_name("pollsVoteBlocking(request:)")));
@end

__attribute__((swift_name("CoreReactionsResource")))
@protocol KmisskeyCoreReactionsResource
@required

/**
 * 指定した投稿にリアクションします。
 * https://misskey.io/api-doc#operation/notes/reactions/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreReactionsCreateRequest *)request completionHandler_________:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler_________:)")));
- (KmisskeyCoreEmptyResponse *)createBlockingRequest_________:(KmisskeyCoreReactionsCreateRequest *)request __attribute__((swift_name("createBlocking(request_________:)")));

/**
 * 指定した投稿へのリアクションを取り消します。
 * https://misskey.io/api-doc#operation/notes/reactions/delete
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreReactionsDeleteRequest *)request completionHandler_______:(void (^)(KmisskeyCoreEmptyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler_______:)")));
- (KmisskeyCoreEmptyResponse *)deleteBlockingRequest_______:(KmisskeyCoreReactionsDeleteRequest *)request __attribute__((swift_name("deleteBlocking(request_______:)")));
@end

__attribute__((swift_name("CoreUsersResource")))
@protocol KmisskeyCoreUsersResource
@required

/**
 * 指定したユーザーのフォロワー一覧を取得します。
 * https://misskey.io/api-doc#operation/users/followers
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followersRequest:(KmisskeyCoreUsersFollowersRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreFollow *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("followers(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreFollow *> *> *)followersBlockingRequest:(KmisskeyCoreUsersFollowersRequest *)request __attribute__((swift_name("followersBlocking(request:)")));

/**
 * 指定したユーザーのフォロー一覧を取得します。
 * https://misskey.io/api-doc#operation/users/following
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followingsRequest:(KmisskeyCoreUsersFollowingsRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreFollow *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("followings(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreFollow *> *> *)followingsBlockingRequest:(KmisskeyCoreUsersFollowingsRequest *)request __attribute__((swift_name("followingsBlocking(request:)")));

/**
 * ユーザーがつけたリアクションを取得します。
 * https://misskey.io/api-doc#operation/users/reactions
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactionsRequest:(KmisskeyCoreUsersReactionsRequest *)request completionHandler_:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUsersReactionsResponse *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactions(request:completionHandler_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUsersReactionsResponse *> *> *)reactionsBlockingRequest_:(KmisskeyCoreUsersReactionsRequest *)request __attribute__((swift_name("reactionsBlocking(request_:)")));

/**
 * おすすめのユーザーを取得します。
 * https://misskey.io/api-doc#operation/users/recommendation
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recommendationRequest:(KmisskeyCoreUsersRecommendationRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("recommendation(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)recommendationBlockingRequest:(KmisskeyCoreUsersRecommendationRequest *)request __attribute__((swift_name("recommendationBlocking(request:)")));

/**
 * ユーザー間のリレーションを取得します。
 * https://misskey.io/api-doc#operation/users/relation
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)relationRequest:(KmisskeyCoreUsersRelationRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreRelation *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("relation(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreRelation *> *> *)relationBlockingRequest:(KmisskeyCoreUsersRelationRequest *)request __attribute__((swift_name("relationBlocking(request:)")));

/**
 * ユーザーを検索します。
 * https://misskey.io/api-doc#operation/users/search
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchRequest:(KmisskeyCoreUsersSearchRequest *)request completionHandler_:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(request:completionHandler_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)searchBlockingRequest_:(KmisskeyCoreUsersSearchRequest *)request __attribute__((swift_name("searchBlocking(request_:)")));

/**
 * ユーザー名・ホスト名からユーザーを検索します。
 * https://misskey.io/api-doc#operation/users/search-by-username-and-host
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchByUsernameAndHostRequest:(KmisskeyCoreUsersSearchByUsernameAndHostRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchByUsernameAndHost(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)searchByUsernameAndHostBlockingRequest:(KmisskeyCoreUsersSearchByUsernameAndHostRequest *)request __attribute__((swift_name("searchByUsernameAndHostBlocking(request:)")));

/**
 * ユーザーを検索します。（認証必須）
 * https://misskey.io/api-doc#operation/users/search
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchWithAuthRequest:(KmisskeyCoreUsersSearchWithAuthRequest *)request completionHandler:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchWithAuth(request:completionHandler:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)searchWithAuthBlockingRequest:(KmisskeyCoreUsersSearchWithAuthRequest *)request __attribute__((swift_name("searchWithAuthBlocking(request:)")));

/**
 * 指定したユーザーの情報を取得します。(複数)
 * https://misskey.io/api-doc#operation/users/show
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreUsersShowMultipleRequest *)request completionHandler______:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler______:)")));

/**
 * 指定したユーザーの情報を取得します。(単数)
 * https://misskey.io/api-doc#operation/users/show
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreUsersShowSingleRequest *)request completionHandler_______:(void (^)(KmisskeyCoreResponse<KmisskeyCoreUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler_______:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)showBlockingRequest______:(KmisskeyCoreUsersShowMultipleRequest *)request __attribute__((swift_name("showBlocking(request______:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)showBlockingRequest_______:(KmisskeyCoreUsersShowSingleRequest *)request __attribute__((swift_name("showBlocking(request_______:)")));
@end

__attribute__((swift_name("CoreWebhooksResource")))
@protocol KmisskeyCoreWebhooksResource
@required

/**
 * Webhook を作成します。
 * https://misskey.io/api-doc#tag/webhooks/operation/i/webhooks/create
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(KmisskeyCoreCreateWebhooksRequest *)request completionHandler__________:(void (^)(KmisskeyCoreResponse<KmisskeyCoreWebhook *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler__________:)")));
- (KmisskeyCoreResponse<KmisskeyCoreWebhook *> *)createBlockingRequest__________:(KmisskeyCoreCreateWebhooksRequest *)request __attribute__((swift_name("createBlocking(request__________:)")));

/**
 * Webhook を削除します。
 * https://misskey.io/api-doc#tag/webhooks/operation/i/webhooks/delete
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRequest:(KmisskeyCoreDeleteWebhooksRequest *)request completionHandler________:(void (^)(KmisskeyCoreResponse<KmisskeyCoreDeleteWebhooksResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(request:completionHandler________:)")));
- (KmisskeyCoreResponse<KmisskeyCoreDeleteWebhooksResponse *> *)deleteBlockingRequest________:(KmisskeyCoreDeleteWebhooksRequest *)request __attribute__((swift_name("deleteBlocking(request________:)")));

/**
 * ログイン中のユーザーが設定している Webhook の一覧を取得します。
 * https://misskey.io/api-doc#tag/webhooks/operation/i/webhooks/list
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KmisskeyCoreListWebhooksRequest *)request completionHandler_____:(void (^)(KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreWebhook *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler_____:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreWebhook *> *> *)listBlockingRequest_____:(KmisskeyCoreListWebhooksRequest *)request __attribute__((swift_name("listBlocking(request_____:)")));

/**
 * 与えられた id に対応する Webhook を取得します。
 * https://misskey.io/api-doc#tag/webhooks/operation/i/webhooks/show
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showRequest:(KmisskeyCoreShowWebhooksRequest *)request completionHandler________:(void (^)(KmisskeyCoreResponse<KmisskeyCoreWebhook *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("show(request:completionHandler________:)")));
- (KmisskeyCoreResponse<KmisskeyCoreWebhook *> *)showBlockingRequest________:(KmisskeyCoreShowWebhooksRequest *)request __attribute__((swift_name("showBlocking(request________:)")));

/**
 * Webhook の設定を更新します。
 * https://misskey.io/api-doc#tag/webhooks/operation/i/webhooks/update
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateRequest:(KmisskeyCoreUpdateWebhooksRequest *)request completionHandler___:(void (^)(KmisskeyCoreResponse<KmisskeyCoreUpdateWebhooksResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(request:completionHandler___:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUpdateWebhooksResponse *> *)updateBlockingRequest___:(KmisskeyCoreUpdateWebhooksRequest *)request __attribute__((swift_name("updateBlocking(request___:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KmisskeyKotlinThrowable : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KmisskeyKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmisskeyKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KmisskeyKotlinException : KmisskeyKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KmisskeyKotlinRuntimeException : KmisskeyKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KmisskeyKotlinIllegalStateException : KmisskeyKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KmisskeyKotlinCancellationException : KmisskeyKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmisskeyKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreTokenRequest")))
@interface KmisskeyCoreTokenRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreTokenRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *i __attribute__((swift_name("i")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIRequest")))
@interface KmisskeyCoreIRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreIRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @see UserLite
 * @see UserDetailedNotMe
 * @see MeDetailed
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kmisskey/util/json/UserSerializer))
*/
__attribute__((swift_name("CoreUser")))
@interface KmisskeyCoreUser : KmisskeyBase

/**
 * @see UserLite
 * @see UserDetailedNotMe
 * @see MeDetailed
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * @see UserLite
 * @see UserDetailedNotMe
 * @see MeDetailed
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUserCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KmisskeyCoreMeDetailed * _Nullable asMeDetailed __attribute__((swift_name("asMeDetailed")));
@property (readonly) KmisskeyCoreUserDetailedNotMe * _Nullable asUserDetailedNotMe __attribute__((swift_name("asUserDetailedNotMe")));
@property (readonly) KmisskeyCoreUserLite * _Nullable asUserLite __attribute__((swift_name("asUserLite")));
@property NSString * _Nullable avatarBlurhash __attribute__((swift_name("avatarBlurhash")));
@property NSString * _Nullable avatarColor __attribute__((swift_name("avatarColor")));
@property (readonly) KmisskeyCoreColor * _Nullable avatarColorObject __attribute__((swift_name("avatarColorObject")));
@property KmisskeyKotlinArray<KmisskeyCoreAvatarDecoration *> *avatarDecorations __attribute__((swift_name("avatarDecorations")));
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property KmisskeyKotlinArray<KmisskeyCoreBadgeRole *> *badgeRoles __attribute__((swift_name("badgeRoles")));
@property KmisskeyCoreEmojis * _Nullable emojis __attribute__((swift_name("emojis")));

/** The local host is represented with null. */
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString *id __attribute__((swift_name("id")));
@property KmisskeyCoreInstance * _Nullable instance __attribute__((swift_name("instance")));
@property BOOL isBot __attribute__((swift_name("isBot")));
@property BOOL isCat __attribute__((swift_name("isCat")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable onlineStatus __attribute__((swift_name("onlineStatus")));
@property KmisskeyCoreUserPolicies * _Nullable policies __attribute__((swift_name("policies")));
@property KmisskeyKotlinArray<KmisskeyCoreRole *> *roles __attribute__((swift_name("roles")));
@property NSString *username __attribute__((swift_name("username")));
@end


/**
 * response wrapper for misskey api.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KmisskeyCoreResponse<T> : KmisskeyBase
- (instancetype)initWithData:(T _Nullable)data json:(NSString *)json limit:(KmisskeyCoreRateLimit * _Nullable)limit __attribute__((swift_name("init(data:json:limit:)"))) __attribute__((objc_designated_initializer));
@property T _Nullable data __attribute__((swift_name("data")));
@property NSString *json __attribute__((swift_name("json")));
@property KmisskeyCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CorePagingTokenRequest")))
@interface KmisskeyCorePagingTokenRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCorePagingTokenRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIFavoritesRequest")))
@interface KmisskeyCoreIFavoritesRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreIFavoritesRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIFavoritesResponse")))
@interface KmisskeyCoreIFavoritesResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreIFavoritesResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *id __attribute__((swift_name("id")));
@property KmisskeyCoreNote *note __attribute__((swift_name("note")));
@property NSString *noteId __attribute__((swift_name("noteId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmisskeyKotlinArray<T> : KmisskeyBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmisskeyInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmisskeyKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreINotificationsRequest")))
@interface KmisskeyCoreINotificationsRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreINotificationsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> * _Nullable excludeTypes __attribute__((swift_name("excludeTypes")));
@property KmisskeyBoolean * _Nullable following __attribute__((swift_name("following")));
@property KmisskeyKotlinArray<NSString *> * _Nullable includeTypes __attribute__((swift_name("includeTypes")));
@property KmisskeyBoolean * _Nullable markAsRead __attribute__((swift_name("markAsRead")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreNotification")))
@interface KmisskeyCoreNotification : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt type:(NSString * _Nullable)type user:(KmisskeyCoreUser * _Nullable)user userId:(NSString * _Nullable)userId note:(KmisskeyCoreNote * _Nullable)note reaction:(NSString * _Nullable)reaction choice:(KmisskeyInt * _Nullable)choice body:(NSString * _Nullable)body header:(NSString * _Nullable)header icon:(NSString * _Nullable)icon achievement:(NSString * _Nullable)achievement serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:type:user:userId:note:reaction:choice:body:header:icon:achievement:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreNotificationCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable achievement __attribute__((swift_name("achievement")));
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property KmisskeyInt * _Nullable choice __attribute__((swift_name("choice")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable header __attribute__((swift_name("header")));
@property NSString * _Nullable icon __attribute__((swift_name("icon")));
@property NSString *id __attribute__((swift_name("id")));
@property KmisskeyCoreNote * _Nullable note __attribute__((swift_name("note")));
@property NSString * _Nullable reaction __attribute__((swift_name("reaction")));
@property NSString *type __attribute__((swift_name("type")));
@property KmisskeyCoreUser * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIUpdateRequest")))
@interface KmisskeyCoreIUpdateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreIUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> *alsoKnownAs __attribute__((swift_name("alsoKnownAs")));
@property KmisskeyBoolean * _Nullable alwaysMarkNsfw __attribute__((swift_name("alwaysMarkNsfw")));
@property KmisskeyBoolean * _Nullable autoAcceptFollowed __attribute__((swift_name("autoAcceptFollowed")));
@property KmisskeyBoolean * _Nullable autoSensitive __attribute__((swift_name("autoSensitive")));
@property NSString * _Nullable avatarId __attribute__((swift_name("avatarId")));
@property NSString * _Nullable bannerId __attribute__((swift_name("bannerId")));
@property NSString * _Nullable birthday __attribute__((swift_name("birthday")));
@property KmisskeyBoolean * _Nullable carefulBot __attribute__((swift_name("carefulBot")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmisskeyKotlinArray<NSString *> *emailNotificationTypes __attribute__((swift_name("emailNotificationTypes")));
@property NSString * _Nullable ffVisibility __attribute__((swift_name("ffVisibility")));
@property KmisskeyKotlinArray<KmisskeyCoreField *> *fields __attribute__((swift_name("fields")));
@property KmisskeyBoolean * _Nullable hideOnlineStatus __attribute__((swift_name("hideOnlineStatus")));
@property KmisskeyBoolean * _Nullable injectFeaturedNote __attribute__((swift_name("injectFeaturedNote")));
@property KmisskeyBoolean * _Nullable isBot __attribute__((swift_name("isBot")));
@property KmisskeyBoolean * _Nullable isCat __attribute__((swift_name("isCat")));
@property KmisskeyBoolean * _Nullable isExplorable __attribute__((swift_name("isExplorable")));
@property KmisskeyBoolean * _Nullable isLocked __attribute__((swift_name("isLocked")));
@property NSString * _Nullable lang __attribute__((swift_name("lang")));
@property NSString * _Nullable location __attribute__((swift_name("location")));
@property KmisskeyKotlinArray<NSString *> *mutedInstances __attribute__((swift_name("mutedInstances")));
@property KmisskeyKotlinArray<KmisskeyKotlinArray<NSString *> *> *mutedWords __attribute__((swift_name("mutedWords")));
@property KmisskeyKotlinArray<NSString *> *mutingNotificationTypes __attribute__((swift_name("mutingNotificationTypes")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyBoolean * _Nullable noCrawle __attribute__((swift_name("noCrawle")));
@property NSString * _Nullable pinnedPageId __attribute__((swift_name("pinnedPageId")));
@property KmisskeyBoolean * _Nullable preventAiLearning __attribute__((swift_name("preventAiLearning")));
@property KmisskeyBoolean * _Nullable publicReactions __attribute__((swift_name("publicReactions")));
@property KmisskeyBoolean * _Nullable receiveAnnouncementEmail __attribute__((swift_name("receiveAnnouncementEmail")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIPinRequest")))
@interface KmisskeyCoreIPinRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithNoteId:(NSString *)noteId __attribute__((swift_name("init(noteId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreIPinRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIUnpinRequest")))
@interface KmisskeyCoreIUnpinRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithNoteId:(NSString *)noteId __attribute__((swift_name("init(noteId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreIUnpinRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAnnouncementsRequest")))
@interface KmisskeyCoreAnnouncementsRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreAnnouncementsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable withUnreads __attribute__((swift_name("withUnreads")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreAnnouncements")))
@interface KmisskeyCoreAnnouncements : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt text:(NSString * _Nullable)text title:(NSString * _Nullable)title imageUrl:(NSString * _Nullable)imageUrl icon:(NSString * _Nullable)icon display:(NSString * _Nullable)display needConfirmationToRead:(BOOL)needConfirmationToRead forYou:(BOOL)forYou closeDuration:(int32_t)closeDuration displayOrder:(int32_t)displayOrder silenced:(BOOL)silenced isRead:(BOOL)isRead serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:updatedAt:text:title:imageUrl:icon:display:needConfirmationToRead:forYou:closeDuration:displayOrder:silenced:isRead:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreAnnouncementsCompanion *companion __attribute__((swift_name("companion")));
@property int32_t closeDuration __attribute__((swift_name("closeDuration")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString *display __attribute__((swift_name("display")));
@property int32_t displayOrder __attribute__((swift_name("displayOrder")));
@property BOOL forYou __attribute__((swift_name("forYou")));
@property NSString *icon __attribute__((swift_name("icon")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property BOOL isRead __attribute__((swift_name("isRead")));
@property BOOL needConfirmationToRead __attribute__((swift_name("needConfirmationToRead")));
@property BOOL silenced __attribute__((swift_name("silenced")));
@property NSString *text __attribute__((swift_name("text")));
@property NSString *title __attribute__((swift_name("title")));
@property NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReadAnnouncementRequest")))
@interface KmisskeyCoreReadAnnouncementRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithAnnouncementId:(NSString *)announcementId __attribute__((swift_name("init(announcementId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreReadAnnouncementRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *announcementId __attribute__((swift_name("announcementId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmptyResponse")))
@interface KmisskeyCoreEmptyResponse : KmisskeyBase
- (instancetype)initWithLimit:(KmisskeyCoreRateLimit * _Nullable)limit __attribute__((swift_name("init(limit:)"))) __attribute__((objc_designated_initializer));
@property KmisskeyCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAntennasListRequest")))
@interface KmisskeyCoreAntennasListRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreAntennasListRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAntenna")))
@interface KmisskeyCoreAntenna : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreAntennaCompanion *companion __attribute__((swift_name("companion")));
@property BOOL caseSensitive __attribute__((swift_name("caseSensitive")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property KmisskeyKotlinArray<KmisskeyKotlinArray<NSString *> *> *excludeKeywords __attribute__((swift_name("excludeKeywords")));
@property BOOL hasUnreadNote __attribute__((swift_name("hasUnreadNote")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isActive __attribute__((swift_name("isActive")));
@property KmisskeyKotlinArray<KmisskeyKotlinArray<NSString *> *> *keywords __attribute__((swift_name("keywords")));
@property BOOL localOnly __attribute__((swift_name("localOnly")));
@property NSString *name __attribute__((swift_name("name")));
@property BOOL notify __attribute__((swift_name("notify")));
@property NSString *src __attribute__((swift_name("src")));
@property NSString * _Nullable userListId __attribute__((swift_name("userListId")));
@property KmisskeyKotlinArray<NSString *> *users __attribute__((swift_name("users")));
@property BOOL withFile __attribute__((swift_name("withFile")));
@property BOOL withReplies __attribute__((swift_name("withReplies")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreFullPagingTokenRequest")))
@interface KmisskeyCoreFullPagingTokenRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFullPagingTokenRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAntennasNotesRequest")))
@interface KmisskeyCoreAntennasNotesRequest : KmisskeyCoreFullPagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreAntennasNotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable antennaId __attribute__((swift_name("antennaId")));
@end


/**
 * 投稿オブジェクト
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreNote")))
@interface KmisskeyCoreNote : KmisskeyBase

/**
 * 投稿オブジェクト
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * 投稿オブジェクト
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 seen1:(int32_t)seen1 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt deletedAt:(NSString * _Nullable)deletedAt text:(NSString * _Nullable)text cw:(NSString * _Nullable)cw userId:(NSString * _Nullable)userId user:(KmisskeyCoreUserLite * _Nullable)user replyId:(NSString * _Nullable)replyId renoteId:(NSString * _Nullable)renoteId reply:(KmisskeyCoreNote * _Nullable)reply renote:(KmisskeyCoreNote * _Nullable)renote isHidden:(BOOL)isHidden visibility:(NSString * _Nullable)visibility mentions:(KmisskeyKotlinArray<NSString *> * _Nullable)mentions visibleUserIds:(KmisskeyKotlinArray<NSString *> * _Nullable)visibleUserIds fileIds:(KmisskeyKotlinArray<NSString *> * _Nullable)fileIds files:(KmisskeyKotlinArray<KmisskeyCoreFile *> * _Nullable)files tags:(KmisskeyKotlinArray<NSString *> * _Nullable)tags poll:(KmisskeyCorePoll * _Nullable)poll emojis:(KmisskeyCoreEmojis * _Nullable)emojis channelId:(NSString * _Nullable)channelId channel:(KmisskeyCoreChannel * _Nullable)channel localOnly:(BOOL)localOnly reactionAcceptance:(NSString * _Nullable)reactionAcceptance reactionEmojis:(KmisskeyCoreEmojis * _Nullable)reactionEmojis reactions:(NSDictionary<NSString *, KmisskeyInt *> * _Nullable)reactions renoteCount:(int32_t)renoteCount repliesCount:(int32_t)repliesCount uri:(NSString * _Nullable)uri url:(NSString * _Nullable)url reactionAndUserPairCache:(KmisskeyKotlinArray<NSString *> * _Nullable)reactionAndUserPairCache clippedCount:(int32_t)clippedCount myReaction:(NSString * _Nullable)myReaction featuredId:(NSString * _Nullable)featuredId prId:(NSString * _Nullable)prId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:seen1:id:createdAt:deletedAt:text:cw:userId:user:replyId:renoteId:reply:renote:isHidden:visibility:mentions:visibleUserIds:fileIds:files:tags:poll:emojis:channelId:channel:localOnly:reactionAcceptance:reactionEmojis:reactions:renoteCount:repliesCount:uri:url:reactionAndUserPairCache:clippedCount:myReaction:featuredId:prId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreNoteCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyCoreChannel * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property int32_t clippedCount __attribute__((swift_name("clippedCount")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable cw __attribute__((swift_name("cw")));
@property NSString * _Nullable deletedAt __attribute__((swift_name("deletedAt")));
@property KmisskeyCoreEmojis * _Nullable emojis __attribute__((swift_name("emojis")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="_featuredId_")
*/
@property NSString * _Nullable featuredId __attribute__((swift_name("featuredId")));
@property KmisskeyKotlinArray<NSString *> * _Nullable fileIds __attribute__((swift_name("fileIds")));
@property (getter=files_) KmisskeyKotlinArray<KmisskeyCoreFile *> * _Nullable files __attribute__((swift_name("files")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isHidden __attribute__((swift_name("isHidden")));
@property BOOL localOnly __attribute__((swift_name("localOnly")));
@property KmisskeyKotlinArray<NSString *> * _Nullable mentions __attribute__((swift_name("mentions")));
@property NSString * _Nullable myReaction __attribute__((swift_name("myReaction")));
@property KmisskeyCorePoll * _Nullable poll __attribute__((swift_name("poll")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="_prId_")
*/
@property NSString * _Nullable prId __attribute__((swift_name("prId")));
@property NSString * _Nullable reactionAcceptance __attribute__((swift_name("reactionAcceptance")));
@property KmisskeyKotlinArray<NSString *> *reactionAndUserPairCache __attribute__((swift_name("reactionAndUserPairCache")));
@property KmisskeyCoreEmojis * _Nullable reactionEmojis __attribute__((swift_name("reactionEmojis")));
@property (getter=reactions_) NSDictionary<NSString *, KmisskeyInt *> *reactions __attribute__((swift_name("reactions")));
@property KmisskeyCoreNote * _Nullable renote __attribute__((swift_name("renote")));
@property int32_t renoteCount __attribute__((swift_name("renoteCount")));
@property NSString * _Nullable renoteId __attribute__((swift_name("renoteId")));
@property int32_t repliesCount __attribute__((swift_name("repliesCount")));
@property KmisskeyCoreNote * _Nullable reply __attribute__((swift_name("reply")));
@property NSString * _Nullable replyId __attribute__((swift_name("replyId")));
@property KmisskeyKotlinArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property KmisskeyCoreUserLite *user __attribute__((swift_name("user")));
@property NSString *userId __attribute__((swift_name("userId")));
@property NSString *visibility __attribute__((swift_name("visibility")));
@property KmisskeyKotlinArray<NSString *> * _Nullable visibleUserIds __attribute__((swift_name("visibleUserIds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApShowRequest")))
@interface KmisskeyCoreApShowRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreApShowRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * ap/show APIのレスポンス
 * object フィールドはオブジェクトとして返されるため、ApResourceImpl で手動パースする
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApShowResponse")))
@interface KmisskeyCoreApShowResponse : KmisskeyBase

/**
 * ap/show APIのレスポンス
 * object フィールドはオブジェクトとして返されるため、ApResourceImpl で手動パースする
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * ap/show APIのレスポンス
 * object フィールドはオブジェクトとして返されるため、ApResourceImpl で手動パースする
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmisskeyCoreNote * _Nullable note __attribute__((swift_name("note")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property KmisskeyCoreUser * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateAppRequest")))
@interface KmisskeyCoreCreateAppRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreCreateAppRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable callbackUrl __attribute__((swift_name("callbackUrl")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyKotlinArray<NSString *> * _Nullable permission __attribute__((swift_name("permission")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateAppResponse")))
@interface KmisskeyCoreCreateAppResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreCreateAppResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable callbackUrl __attribute__((swift_name("callbackUrl")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyKotlinArray<NSString *> * _Nullable permission __attribute__((swift_name("permission")));
@property NSString * _Nullable secret __attribute__((swift_name("secret")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetMiAuthUriRequest")))
@interface KmisskeyCoreGetMiAuthUriRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreGetMiAuthUriRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable callbackUrl __attribute__((swift_name("callbackUrl")));
@property NSString * _Nullable iconUri __attribute__((swift_name("iconUri")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyKotlinArray<NSString *> * _Nullable permission __attribute__((swift_name("permission")));
@property NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGenerateAuthSessionRequest")))
@interface KmisskeyCoreGenerateAuthSessionRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreGenerateAuthSessionRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appSecret __attribute__((swift_name("appSecret")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGenerateAuthSessionResponse")))
@interface KmisskeyCoreGenerateAuthSessionResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreGenerateAuthSessionResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserKeyAuthSessionRequest")))
@interface KmisskeyCoreUserKeyAuthSessionRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUserKeyAuthSessionRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appSecret __attribute__((swift_name("appSecret")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserKeyAuthSessionResponse")))
@interface KmisskeyCoreUserKeyAuthSessionResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUserKeyAuthSessionResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property KmisskeyCoreUser * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksCreateRequest")))
@interface KmisskeyCoreBlocksCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreBlocksCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksDeleteRequest")))
@interface KmisskeyCoreBlocksDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreBlocksDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksListRequest")))
@interface KmisskeyCoreBlocksListRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreBlocksListRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreBlock")))
@interface KmisskeyCoreBlock : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt blockeeId:(NSString * _Nullable)blockeeId blockee:(KmisskeyCoreUserLite * _Nullable)blockee serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:blockeeId:blockee:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreBlockCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyCoreUserLite * _Nullable blockee __attribute__((swift_name("blockee")));
@property NSString * _Nullable blockeeId __attribute__((swift_name("blockeeId")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsFollowedRequest")))
@interface KmisskeyCoreChannelsFollowedRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsFollowedRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreChannel")))
@interface KmisskeyCoreChannel : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt lastNotedAt:(NSString * _Nullable)lastNotedAt name:(NSString * _Nullable)name description:(NSString * _Nullable)description userId:(NSString * _Nullable)userId bannerUrl:(NSString * _Nullable)bannerUrl pinnedNoteIds:(KmisskeyKotlinArray<NSString *> * _Nullable)pinnedNoteIds color:(NSString * _Nullable)color isArchived:(BOOL)isArchived notesCount:(int32_t)notesCount usersCount:(int32_t)usersCount isSensitive:(BOOL)isSensitive allowRenoteToExternal:(BOOL)allowRenoteToExternal isFollowing:(BOOL)isFollowing isFavorited:(BOOL)isFavorited pinnedNotes:(KmisskeyKotlinArray<KmisskeyCoreNote *> * _Nullable)pinnedNotes serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:lastNotedAt:name:description:userId:bannerUrl:pinnedNoteIds:color:isArchived:notesCount:usersCount:isSensitive:allowRenoteToExternal:isFollowing:isFavorited:pinnedNotes:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreChannelCompanion *companion __attribute__((swift_name("companion")));
@property BOOL allowRenoteToExternal __attribute__((swift_name("allowRenoteToExternal")));
@property NSString * _Nullable bannerUrl __attribute__((swift_name("bannerUrl")));
@property NSString *color __attribute__((swift_name("color")));

/**
 * ドキュメント内では required になっているが null の場合もある
 * Required in the documentation, but may be null
 */
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isArchived __attribute__((swift_name("isArchived")));
@property BOOL isFavorited __attribute__((swift_name("isFavorited")));
@property BOOL isFollowing __attribute__((swift_name("isFollowing")));
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));
@property NSString * _Nullable lastNotedAt __attribute__((swift_name("lastNotedAt")));
@property NSString *name __attribute__((swift_name("name")));
@property int32_t notesCount __attribute__((swift_name("notesCount")));
@property KmisskeyKotlinArray<NSString *> *pinnedNoteIds __attribute__((swift_name("pinnedNoteIds")));
@property KmisskeyKotlinArray<KmisskeyCoreNote *> *pinnedNotes __attribute__((swift_name("pinnedNotes")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property int32_t usersCount __attribute__((swift_name("usersCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsMyFavoritesRequest")))
@interface KmisskeyCoreChannelsMyFavoritesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsMyFavoritesRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsOwnedRequest")))
@interface KmisskeyCoreChannelsOwnedRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsOwnedRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsShowRequest")))
@interface KmisskeyCoreChannelsShowRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsShowRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsTimelineRequest")))
@interface KmisskeyCoreChannelsTimelineRequest : KmisskeyCoreFullPagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsAddNoteRequest")))
@interface KmisskeyCoreClipsAddNoteRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithNoteId:(NSString *)noteId clipId:(NSString *)clipId __attribute__((swift_name("init(noteId:clipId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsAddNoteRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *clipId __attribute__((swift_name("clipId")));
@property (readonly) NSString *noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsCreateRequest")))
@interface KmisskeyCoreClipsCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property (getter=public, setter=setPublic:) KmisskeyBoolean * _Nullable public_ __attribute__((swift_name("public_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClip")))
@interface KmisskeyCoreClip : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreClipCompanion *companion __attribute__((swift_name("companion")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property int32_t favoritedCount __attribute__((swift_name("favoritedCount")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isFavorited __attribute__((swift_name("isFavorited")));
@property BOOL isPublic __attribute__((swift_name("isPublic")));
@property NSString * _Nullable lastClippedAt __attribute__((swift_name("lastClippedAt")));
@property NSString *name __attribute__((swift_name("name")));
@property KmisskeyCoreUserLite *user __attribute__((swift_name("user")));
@property NSString *userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsDeleteRequest")))
@interface KmisskeyCoreClipsDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithClipId:(NSString *)clipId __attribute__((swift_name("init(clipId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *clipId __attribute__((swift_name("clipId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsListRequest")))
@interface KmisskeyCoreClipsListRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsListRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsNotesRequest")))
@interface KmisskeyCoreClipsNotesRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsNotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable clipId __attribute__((swift_name("clipId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsRemoveNoteRequest")))
@interface KmisskeyCoreClipsRemoveNoteRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithNoteId:(NSString *)noteId clipId:(NSString *)clipId __attribute__((swift_name("init(noteId:clipId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsRemoveNoteRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *clipId __attribute__((swift_name("clipId")));
@property (readonly) NSString *noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsShowRequest")))
@interface KmisskeyCoreClipsShowRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithClipId:(NSString *)clipId __attribute__((swift_name("init(clipId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsShowRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *clipId __attribute__((swift_name("clipId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsUpdateRequest")))
@interface KmisskeyCoreClipsUpdateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable clipId __attribute__((swift_name("clipId")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property (getter=public, setter=setPublic:) KmisskeyBoolean * _Nullable public_ __attribute__((swift_name("public_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFavoritesCreateRequest")))
@interface KmisskeyCoreFavoritesCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFavoritesCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFavoritesDeleteRequest")))
@interface KmisskeyCoreFavoritesDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFavoritesDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreShowInstanceRequest")))
@interface KmisskeyCoreShowInstanceRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreShowInstanceRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFederationInstanceResponse")))
@interface KmisskeyCoreFederationInstanceResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreFederationInstanceResponseCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable blocked __attribute__((swift_name("blocked")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable faviconUrl __attribute__((swift_name("faviconUrl")));
@property NSString * _Nullable firstRetrievedAt __attribute__((swift_name("firstRetrievedAt")));
@property KmisskeyInt * _Nullable followersCount __attribute__((swift_name("followersCount")));
@property KmisskeyInt * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable infoUpdatedAt __attribute__((swift_name("infoUpdatedAt")));
@property NSString * _Nullable maintainerEmail __attribute__((swift_name("maintainerEmail")));
@property NSString * _Nullable maintainerName __attribute__((swift_name("maintainerName")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyBoolean * _Nullable notResponding __attribute__((swift_name("notResponding")));
@property KmisskeyInt * _Nullable notesCount __attribute__((swift_name("notesCount")));
@property KmisskeyBoolean * _Nullable openRegistrations __attribute__((swift_name("openRegistrations")));
@property NSString * _Nullable softwareName __attribute__((swift_name("softwareName")));
@property NSString * _Nullable softwareVersion __attribute__((swift_name("softwareVersion")));
@property KmisskeyBoolean * _Nullable suspended __attribute__((swift_name("suspended")));
@property NSString * _Nullable themeColor __attribute__((swift_name("themeColor")));
@property KmisskeyInt * _Nullable usersCount __attribute__((swift_name("usersCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesCreateRequest")))
@interface KmisskeyCoreFilesCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFilesCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinByteArray * _Nullable bytes __attribute__((swift_name("bytes")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property NSString * _Nullable folderId __attribute__((swift_name("folderId")));
@property KmisskeyBoolean * _Nullable force __attribute__((swift_name("force")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyBoolean * _Nullable sensitive __attribute__((swift_name("sensitive")));
@end


/**
 * DriveFile
 * ファイルオブジェクト
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreFile")))
@interface KmisskeyCoreFile : KmisskeyBase

/**
 * DriveFile
 * ファイルオブジェクト
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * DriveFile
 * ファイルオブジェクト
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt name:(NSString * _Nullable)name type:(NSString * _Nullable)type md5:(NSString * _Nullable)md5 size:(int32_t)size isSensitive:(BOOL)isSensitive blurhash:(NSString * _Nullable)blurhash properties:(KmisskeyCoreFileProperties * _Nullable)properties url:(NSString * _Nullable)url thumbnailUrl:(NSString * _Nullable)thumbnailUrl comment:(NSString * _Nullable)comment folderId:(NSString * _Nullable)folderId folder:(KmisskeyCoreFolder * _Nullable)folder userId:(NSString * _Nullable)userId user:(KmisskeyCoreUserLite * _Nullable)user serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:name:type:md5:size:isSensitive:blurhash:properties:url:thumbnailUrl:comment:folderId:folder:userId:user:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreFileCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)extractedThumbnailUrl __attribute__((swift_name("extractedThumbnailUrl()")));
- (NSString *)extractedUrl __attribute__((swift_name("extractedUrl()")));
@property NSString * _Nullable blurhash __attribute__((swift_name("blurhash")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) KmisskeyCoreFolder * _Nullable folder __attribute__((swift_name("folder")));
@property NSString * _Nullable folderId __attribute__((swift_name("folderId")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));
@property NSString *md5 __attribute__((swift_name("md5")));
@property NSString *name __attribute__((swift_name("name")));
@property KmisskeyCoreFileProperties * _Nullable properties __attribute__((swift_name("properties")));
@property int32_t size __attribute__((swift_name("size")));
@property NSString * _Nullable thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property NSString *type __attribute__((swift_name("type")));
@property NSString *url __attribute__((swift_name("url")));
@property KmisskeyCoreUserLite * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequestsAcceptRequest")))
@interface KmisskeyCoreFollowingRequestsAcceptRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFollowingRequestsAcceptRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingCreateRequest")))
@interface KmisskeyCoreFollowingCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFollowingCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingDeleteRequest")))
@interface KmisskeyCoreFollowingDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFollowingDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequestsRejectRequest")))
@interface KmisskeyCoreFollowingRequestsRejectRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFollowingRequestsRejectRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequestsListRequest")))
@interface KmisskeyCoreFollowingRequestsListRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreFollowingRequestsListRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequestsListResponse")))
@interface KmisskeyCoreFollowingRequestsListResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreFollowingRequestsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyCoreUser * _Nullable followee __attribute__((swift_name("followee")));
@property KmisskeyCoreUser * _Nullable follower __attribute__((swift_name("follower")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateGalleryPostRequest")))
@interface KmisskeyCoreCreateGalleryPostRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithTitle:(NSString *)title fileIds:(KmisskeyKotlinArray<NSString *> *)fileIds __attribute__((swift_name("init(title:fileIds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreCreateGalleryPostRequestCompanion *companion __attribute__((swift_name("companion")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmisskeyKotlinArray<NSString *> *fileIds __attribute__((swift_name("fileIds")));
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));
@property NSString *title __attribute__((swift_name("title")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreGalleryPost")))
@interface KmisskeyCoreGalleryPost : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt title:(NSString * _Nullable)title description:(NSString * _Nullable)description userId:(NSString * _Nullable)userId user:(KmisskeyCoreUser * _Nullable)user fileIds:(KmisskeyKotlinArray<NSString *> * _Nullable)fileIds files:(KmisskeyKotlinArray<KmisskeyCoreFile *> * _Nullable)files tags:(KmisskeyKotlinArray<NSString *> * _Nullable)tags sensitive:(BOOL)sensitive liked:(BOOL)liked likedCount:(KmisskeyInt * _Nullable)likedCount serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:updatedAt:title:description:userId:user:fileIds:files:tags:sensitive:liked:likedCount:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreGalleryPostCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmisskeyKotlinArray<NSString *> *fileIds __attribute__((swift_name("fileIds")));
@property (getter=files_) KmisskeyKotlinArray<KmisskeyCoreFile *> *files __attribute__((swift_name("files")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BOOL liked __attribute__((swift_name("liked")));
@property KmisskeyInt * _Nullable likedCount __attribute__((swift_name("likedCount")));
@property BOOL sensitive __attribute__((swift_name("sensitive")));
@property KmisskeyKotlinArray<NSString *> *tags __attribute__((swift_name("tags")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property KmisskeyCoreUser * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteGalleryPostRequest")))
@interface KmisskeyCoreDeleteGalleryPostRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithPostId:(NSString *)postId __attribute__((swift_name("init(postId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreDeleteGalleryPostRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *postId __attribute__((swift_name("postId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLikeGalleryPostRequest")))
@interface KmisskeyCoreLikeGalleryPostRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithPostId:(NSString *)postId __attribute__((swift_name("init(postId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreLikeGalleryPostRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *postId __attribute__((swift_name("postId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIListGalleryPostsRequest")))
@interface KmisskeyCoreIListGalleryPostsRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreIListGalleryPostsRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListGalleryPostsRequest")))
@interface KmisskeyCoreListGalleryPostsRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreListGalleryPostsRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreShowGalleryPostRequest")))
@interface KmisskeyCoreShowGalleryPostRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreShowGalleryPostRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable postId __attribute__((swift_name("postId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUnlikeGalleryPostRequest")))
@interface KmisskeyCoreUnlikeGalleryPostRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithPostId:(NSString *)postId __attribute__((swift_name("init(postId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUnlikeGalleryPostRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *postId __attribute__((swift_name("postId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUpdateGalleryPostRequest")))
@interface KmisskeyCoreUpdateGalleryPostRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithPostId:(NSString *)postId title:(NSString *)title fileIds:(KmisskeyKotlinArray<NSString *> *)fileIds __attribute__((swift_name("init(postId:title:fileIds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUpdateGalleryPostRequestCompanion *companion __attribute__((swift_name("companion")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmisskeyKotlinArray<NSString *> *fileIds __attribute__((swift_name("fileIds")));
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));
@property NSString *postId __attribute__((swift_name("postId")));
@property NSString *title __attribute__((swift_name("title")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListUserGalleryPostsRequest")))
@interface KmisskeyCoreListUserGalleryPostsRequest : KmisskeyCorePagingTokenRequest
- (instancetype)initWithUserId:(NSString *)userId __attribute__((swift_name("init(userId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreListUserGalleryPostsRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHashtagsTrendRequest")))
@interface KmisskeyCoreHashtagsTrendRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreHashtagsTrendRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreTrend")))
@interface KmisskeyCoreTrend : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 tag:(NSString * _Nullable)tag chart:(KmisskeyKotlinArray<KmisskeyInt *> * _Nullable)chart usersCount:(KmisskeyInt * _Nullable)usersCount serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:tag:chart:usersCount:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreTrendCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<KmisskeyInt *> * _Nullable chart __attribute__((swift_name("chart")));
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@property KmisskeyInt * _Nullable usersCount __attribute__((swift_name("usersCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsCreateRequest")))
@interface KmisskeyCoreUsersListsCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreNoteList")))
@interface KmisskeyCoreNoteList : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt name:(NSString * _Nullable)name userIds:(KmisskeyKotlinArray<NSString *> * _Nullable)userIds serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:name:userIds:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreNoteListCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyKotlinArray<NSString *> * _Nullable userIds __attribute__((swift_name("userIds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsDeleteRequest")))
@interface KmisskeyCoreUsersListsDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithListId:(NSString *)listId __attribute__((swift_name("init(listId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *listId __attribute__((swift_name("listId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsListRequest")))
@interface KmisskeyCoreUsersListsListRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsListRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsPullRequest")))
@interface KmisskeyCoreUsersListsPullRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsPullRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsPushRequest")))
@interface KmisskeyCoreUsersListsPushRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsPushRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsShowRequest")))
@interface KmisskeyCoreUsersListsShowRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsShowRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsUpdateRequest")))
@interface KmisskeyCoreUsersListsUpdateRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithListId:(NSString *)listId name:(NSString *)name __attribute__((swift_name("init(listId:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *listId __attribute__((swift_name("listId")));
@property NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingHistoryRequest")))
@interface KmisskeyCoreMessagingHistoryRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreMessagingHistoryRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable group __attribute__((swift_name("group")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreMessage")))
@interface KmisskeyCoreMessage : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt text:(NSString * _Nullable)text userId:(NSString * _Nullable)userId user:(KmisskeyCoreUser * _Nullable)user fileId:(NSString * _Nullable)fileId file:(KmisskeyCoreFile * _Nullable)file recipientId:(NSString * _Nullable)recipientId recipient:(KmisskeyCoreUser * _Nullable)recipient groupId:(NSString * _Nullable)groupId group:(KmisskeyCoreGroup * _Nullable)group read:(BOOL)read reads:(NSArray<NSString *> * _Nullable)reads serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:text:userId:user:fileId:file:recipientId:recipient:groupId:group:read:reads:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KmisskeyCoreFile * _Nullable file __attribute__((swift_name("file")));
@property NSString * _Nullable fileId __attribute__((swift_name("fileId")));
@property KmisskeyCoreGroup * _Nullable group __attribute__((swift_name("group")));
@property NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BOOL read __attribute__((swift_name("read")));
@property NSArray<NSString *> * _Nullable reads __attribute__((swift_name("reads")));
@property KmisskeyCoreUser * _Nullable recipient __attribute__((swift_name("recipient")));
@property NSString * _Nullable recipientId __attribute__((swift_name("recipientId")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property KmisskeyCoreUser * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesRequest")))
@interface KmisskeyCoreMessagingMessagesRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreMessagingMessagesRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property KmisskeyBoolean * _Nullable markAsRead __attribute__((swift_name("markAsRead")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesCreateRequest")))
@interface KmisskeyCoreMessagingMessagesCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreMessagingMessagesCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable fileId __attribute__((swift_name("fileId")));
@property NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesDeleteRequest")))
@interface KmisskeyCoreMessagingMessagesDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreMessagingMessagesDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable messageId __attribute__((swift_name("messageId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojisRequest")))
@interface KmisskeyCoreEmojisRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreEmojisRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojisResponse")))
@interface KmisskeyCoreEmojisResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreEmojisResponseCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<KmisskeyCoreEmoji *> *emojis __attribute__((swift_name("emojis")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetOnlineUsersCountResponse")))
@interface KmisskeyCoreGetOnlineUsersCountResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreGetOnlineUsersCountResponseCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable count __attribute__((swift_name("count")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaRequest")))
@interface KmisskeyCoreMetaRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreMetaRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable detail __attribute__((swift_name("detail")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreMeta")))
@interface KmisskeyCoreMeta : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 seen1:(int32_t)seen1 maintainerName:(NSString * _Nullable)maintainerName maintainerEmail:(NSString * _Nullable)maintainerEmail version:(NSString * _Nullable)version name:(NSString * _Nullable)name uri:(NSString * _Nullable)uri description:(NSString * _Nullable)description langs:(KmisskeyKotlinArray<NSString *> * _Nullable)langs tosUrl:(NSString * _Nullable)tosUrl repositoryUrl:(NSString * _Nullable)repositoryUrl feedbackUrl:(NSString * _Nullable)feedbackUrl defaultDarkTheme:(NSString * _Nullable)defaultDarkTheme defaultLightTheme:(NSString * _Nullable)defaultLightTheme disableRegistration:(KmisskeyBoolean * _Nullable)disableRegistration cacheRemoteFiles:(KmisskeyBoolean * _Nullable)cacheRemoteFiles emailRequiredForSignup:(KmisskeyBoolean * _Nullable)emailRequiredForSignup enableHcaptcha:(KmisskeyBoolean * _Nullable)enableHcaptcha hcaptchaSiteKey:(NSString * _Nullable)hcaptchaSiteKey enableRecaptcha:(KmisskeyBoolean * _Nullable)enableRecaptcha recaptchaSiteKey:(NSString * _Nullable)recaptchaSiteKey enableTurnstile:(KmisskeyBoolean * _Nullable)enableTurnstile turnstileSiteKey:(NSString * _Nullable)turnstileSiteKey swPublickey:(NSString * _Nullable)swPublickey mascotImageUrl:(NSString * _Nullable)mascotImageUrl bannerUrl:(NSString * _Nullable)bannerUrl errorImageUrl:(NSString * _Nullable)errorImageUrl iconUrl:(NSString * _Nullable)iconUrl maxNoteTextLength:(KmisskeyInt * _Nullable)maxNoteTextLength requireSetup:(KmisskeyBoolean * _Nullable)requireSetup enableEmail:(KmisskeyBoolean * _Nullable)enableEmail enableServiceWorker:(KmisskeyBoolean * _Nullable)enableServiceWorker translatorAvailable:(KmisskeyBoolean * _Nullable)translatorAvailable proxyAccountName:(NSString * _Nullable)proxyAccountName policies:(KmisskeyCorePolicies * _Nullable)policies mediaProxy:(NSString * _Nullable)mediaProxy features:(KmisskeyCoreMetaFeatures * _Nullable)features emojis:(KmisskeyKotlinArray<KmisskeyCoreEmoji *> * _Nullable)emojis serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:seen1:maintainerName:maintainerEmail:version:name:uri:description:langs:tosUrl:repositoryUrl:feedbackUrl:defaultDarkTheme:defaultLightTheme:disableRegistration:cacheRemoteFiles:emailRequiredForSignup:enableHcaptcha:hcaptchaSiteKey:enableRecaptcha:recaptchaSiteKey:enableTurnstile:turnstileSiteKey:swPublickey:mascotImageUrl:bannerUrl:errorImageUrl:iconUrl:maxNoteTextLength:requireSetup:enableEmail:enableServiceWorker:translatorAvailable:proxyAccountName:policies:mediaProxy:features:emojis:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreMetaCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable bannerUrl __attribute__((swift_name("bannerUrl")));
@property KmisskeyBoolean * _Nullable cacheRemoteFiles __attribute__((swift_name("cacheRemoteFiles")));
@property NSString * _Nullable defaultDarkTheme __attribute__((swift_name("defaultDarkTheme")));
@property NSString * _Nullable defaultLightTheme __attribute__((swift_name("defaultLightTheme")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmisskeyBoolean * _Nullable disableRegistration __attribute__((swift_name("disableRegistration")));
@property KmisskeyBoolean * _Nullable emailRequiredForSignup __attribute__((swift_name("emailRequiredForSignup")));

/**
 * available up to v12
 * use /emojis endpoint.
 */
@property KmisskeyKotlinArray<KmisskeyCoreEmoji *> *emojis __attribute__((swift_name("emojis"))) __attribute__((deprecated("use /emojis endpoint.")));
@property KmisskeyBoolean * _Nullable enableEmail __attribute__((swift_name("enableEmail")));
@property KmisskeyBoolean * _Nullable enableHcaptcha __attribute__((swift_name("enableHcaptcha")));
@property KmisskeyBoolean * _Nullable enableRecaptcha __attribute__((swift_name("enableRecaptcha")));
@property KmisskeyBoolean * _Nullable enableServiceWorker __attribute__((swift_name("enableServiceWorker")));
@property KmisskeyBoolean * _Nullable enableTurnstile __attribute__((swift_name("enableTurnstile")));
@property NSString * _Nullable errorImageUrl __attribute__((swift_name("errorImageUrl")));
@property KmisskeyCoreMetaFeatures * _Nullable features __attribute__((swift_name("features")));
@property NSString * _Nullable feedbackUrl __attribute__((swift_name("feedbackUrl")));
@property NSString * _Nullable hcaptchaSiteKey __attribute__((swift_name("hcaptchaSiteKey")));
@property NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property KmisskeyKotlinArray<NSString *> *langs __attribute__((swift_name("langs")));
@property NSString * _Nullable maintainerEmail __attribute__((swift_name("maintainerEmail")));
@property NSString * _Nullable maintainerName __attribute__((swift_name("maintainerName")));
@property NSString * _Nullable mascotImageUrl __attribute__((swift_name("mascotImageUrl")));
@property KmisskeyInt * _Nullable maxNoteTextLength __attribute__((swift_name("maxNoteTextLength")));
@property NSString * _Nullable mediaProxy __attribute__((swift_name("mediaProxy")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyCorePolicies * _Nullable policies __attribute__((swift_name("policies")));
@property NSString * _Nullable proxyAccountName __attribute__((swift_name("proxyAccountName")));
@property NSString * _Nullable recaptchaSiteKey __attribute__((swift_name("recaptchaSiteKey")));
@property NSString * _Nullable repositoryUrl __attribute__((swift_name("repositoryUrl")));
@property KmisskeyBoolean * _Nullable requireSetup __attribute__((swift_name("requireSetup")));
@property NSString * _Nullable swPublickey __attribute__((swift_name("swPublickey")));
@property NSString * _Nullable tosUrl __attribute__((swift_name("tosUrl")));
@property KmisskeyBoolean * _Nullable translatorAvailable __attribute__((swift_name("translatorAvailable")));
@property NSString * _Nullable turnstileSiteKey __attribute__((swift_name("turnstileSiteKey")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property NSString * _Nullable version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesCreateRequest")))
@interface KmisskeyCoreMutesCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreMutesCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesDeleteRequest")))
@interface KmisskeyCoreMutesDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreMutesDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesListRequest")))
@interface KmisskeyCoreMutesListRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreMutesListRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreMute")))
@interface KmisskeyCoreMute : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt muteeId:(NSString * _Nullable)muteeId mutee:(KmisskeyCoreUser * _Nullable)mutee serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:muteeId:mutee:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreMuteCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmisskeyCoreUser * _Nullable mutee __attribute__((swift_name("mutee")));
@property NSString * _Nullable muteeId __attribute__((swift_name("muteeId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesChildrenRequest")))
@interface KmisskeyCoreNotesChildrenRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesChildrenRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesConversationRequest")))
@interface KmisskeyCoreNotesConversationRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesConversationRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesCreateRequest")))
@interface KmisskeyCoreNotesCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable cw __attribute__((swift_name("cw")));
@property KmisskeyKotlinArray<NSString *> * _Nullable fileIds __attribute__((swift_name("fileIds")));
@property KmisskeyBoolean * _Nullable localOnly __attribute__((swift_name("localOnly")));
@property KmisskeyBoolean * _Nullable noExtractEmojis __attribute__((swift_name("noExtractEmojis")));
@property KmisskeyBoolean * _Nullable noExtractHashtags __attribute__((swift_name("noExtractHashtags")));
@property KmisskeyBoolean * _Nullable noExtractMentions __attribute__((swift_name("noExtractMentions")));
@property KmisskeyCorePollRequest * _Nullable poll __attribute__((swift_name("poll")));
@property NSString * _Nullable renoteId __attribute__((swift_name("renoteId")));
@property NSString * _Nullable replyId __attribute__((swift_name("replyId")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property KmisskeyBoolean * _Nullable viaMobile __attribute__((swift_name("viaMobile")));
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@property KmisskeyKotlinArray<NSString *> * _Nullable visibleUserIds __attribute__((swift_name("visibleUserIds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesCreateResponse")))
@interface KmisskeyCoreNotesCreateResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesCreateResponseCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyCoreNote *createdNote __attribute__((swift_name("createdNote")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesDeleteRequest")))
@interface KmisskeyCoreNotesDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesFeaturedRequest")))
@interface KmisskeyCoreNotesFeaturedRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesFeaturedRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesGlobalTimelineRequest")))
@interface KmisskeyCoreNotesGlobalTimelineRequest : KmisskeyCoreFullPagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesGlobalTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesHybridTimelineRequest")))
@interface KmisskeyCoreNotesHybridTimelineRequest : KmisskeyCoreFullPagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesHybridTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable includeLocalRenotes __attribute__((swift_name("includeLocalRenotes")));
@property KmisskeyBoolean * _Nullable includeMyRenotes __attribute__((swift_name("includeMyRenotes")));
@property KmisskeyBoolean * _Nullable includeRenotedMyNotes __attribute__((swift_name("includeRenotedMyNotes")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesLocalTimelineRequest")))
@interface KmisskeyCoreNotesLocalTimelineRequest : KmisskeyCoreFullPagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesLocalTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable excludeNsfw __attribute__((swift_name("excludeNsfw")));
@property KmisskeyKotlinArray<NSString *> * _Nullable fileType __attribute__((swift_name("fileType")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesMentionsRequest")))
@interface KmisskeyCoreNotesMentionsRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesMentionsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable following __attribute__((swift_name("following")));
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRequest")))
@interface KmisskeyCoreNotesRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable local __attribute__((swift_name("local")));
@property KmisskeyBoolean * _Nullable poll __attribute__((swift_name("poll")));
@property KmisskeyBoolean * _Nullable renote __attribute__((swift_name("renote")));
@property KmisskeyBoolean * _Nullable reply __attribute__((swift_name("reply")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesReactionsRequest")))
@interface KmisskeyCoreNotesReactionsRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesReactionsRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesReactionsResponse")))
@interface KmisskeyCoreNotesReactionsResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesReactionsResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property KmisskeyCoreUser * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRenotesRequest")))
@interface KmisskeyCoreNotesRenotesRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesRenotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRepliesRequest")))
@interface KmisskeyCoreNotesRepliesRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesRepliesRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesSearchRequest")))
@interface KmisskeyCoreNotesSearchRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesSearchRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesSearchByTagRequest")))
@interface KmisskeyCoreNotesSearchByTagRequest : KmisskeyCorePagingTokenRequest
- (instancetype)initWithTag:(NSString *)tag __attribute__((swift_name("init(tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesSearchByTagRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable poll __attribute__((swift_name("poll")));
@property KmisskeyBoolean * _Nullable renote __attribute__((swift_name("renote")));
@property KmisskeyBoolean * _Nullable reply __attribute__((swift_name("reply")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesShowRequest")))
@interface KmisskeyCoreNotesShowRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesShowRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesTimelineRequest")))
@interface KmisskeyCoreNotesTimelineRequest : KmisskeyCoreFullPagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable includeLocalRenotes __attribute__((swift_name("includeLocalRenotes")));
@property KmisskeyBoolean * _Nullable includeMyRenotes __attribute__((swift_name("includeMyRenotes")));
@property KmisskeyBoolean * _Nullable includeRenotedMyNotes __attribute__((swift_name("includeRenotedMyNotes")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@property KmisskeyBoolean * _Nullable withReplies __attribute__((swift_name("withReplies")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNoteUnrenoteRequest")))
@interface KmisskeyCoreNoteUnrenoteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNoteUnrenoteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesUserListTimelineRequest")))
@interface KmisskeyCoreNotesUserListTimelineRequest : KmisskeyCoreFullPagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesUserListTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable includeLocalRenotes __attribute__((swift_name("includeLocalRenotes")));
@property KmisskeyBoolean * _Nullable includeMyRenotes __attribute__((swift_name("includeMyRenotes")));
@property KmisskeyBoolean * _Nullable includeRenotedMyNotes __attribute__((swift_name("includeRenotedMyNotes")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersNotesRequest")))
@interface KmisskeyCoreUsersNotesRequest : KmisskeyCoreFullPagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId sinceDate:(KmisskeyInt * _Nullable)sinceDate untilDate:(KmisskeyInt * _Nullable)untilDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:sinceDate:untilDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersNotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable excludeNsfw __attribute__((swift_name("excludeNsfw")));
@property KmisskeyKotlinArray<NSString *> * _Nullable fileType __attribute__((swift_name("fileType")));
@property KmisskeyBoolean * _Nullable includeMyRenotes __attribute__((swift_name("includeMyRenotes")));
@property KmisskeyBoolean * _Nullable includeReplies __attribute__((swift_name("includeReplies")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property KmisskeyBoolean * _Nullable withChannelNotes __attribute__((swift_name("withChannelNotes")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServiceWorkerRegisterRequest")))
@interface KmisskeyCoreServiceWorkerRegisterRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreServiceWorkerRegisterRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable auth __attribute__((swift_name("auth")));
@property NSString * _Nullable endpoint __attribute__((swift_name("endpoint")));
@property NSString * _Nullable publickey __attribute__((swift_name("publickey")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServiceWorkerRegisterResponse")))
@interface KmisskeyCoreServiceWorkerRegisterResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreServiceWorkerRegisterResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable key __attribute__((swift_name("key")));
@property NSString * _Nullable state __attribute__((swift_name("state")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollsVoteRequest")))
@interface KmisskeyCorePollsVoteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCorePollsVoteRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable choice __attribute__((swift_name("choice")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsCreateRequest")))
@interface KmisskeyCoreReactionsCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreReactionsCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@property NSString * _Nullable reaction __attribute__((swift_name("reaction")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsDeleteRequest")))
@interface KmisskeyCoreReactionsDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreReactionsDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CorePagingRequest")))
@interface KmisskeyCorePagingRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCorePagingRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersFollowersRequest")))
@interface KmisskeyCoreUsersFollowersRequest : KmisskeyCorePagingRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersFollowersRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreFollow")))
@interface KmisskeyCoreFollow : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt followeeId:(NSString * _Nullable)followeeId followee:(KmisskeyCoreUser * _Nullable)followee followerId:(NSString * _Nullable)followerId follower:(KmisskeyCoreUser * _Nullable)follower serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:followeeId:followee:followerId:follower:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreFollowCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KmisskeyCoreUser * _Nullable followee __attribute__((swift_name("followee")));
@property NSString * _Nullable followeeId __attribute__((swift_name("followeeId")));
@property KmisskeyCoreUser * _Nullable follower __attribute__((swift_name("follower")));
@property NSString * _Nullable followerId __attribute__((swift_name("followerId")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersFollowingsRequest")))
@interface KmisskeyCoreUsersFollowingsRequest : KmisskeyCorePagingRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersFollowingsRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersReactionsRequest")))
@interface KmisskeyCoreUsersReactionsRequest : KmisskeyCorePagingTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i limit:(KmisskeyInt * _Nullable)limit sinceId:(NSString * _Nullable)sinceId untilId:(NSString * _Nullable)untilId serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:limit:sinceId:untilId:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersReactionsRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersReactionsResponse")))
@interface KmisskeyCoreUsersReactionsResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersReactionsResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmisskeyCoreNote * _Nullable note __attribute__((swift_name("note")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property KmisskeyCoreUser * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersRecommendationRequest")))
@interface KmisskeyCoreUsersRecommendationRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersRecommendationRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersRelationRequest")))
@interface KmisskeyCoreUsersRelationRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersRelationRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> *userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreRelation")))
@interface KmisskeyCoreRelation : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id hasPendingFollowRequestFromYou:(BOOL)hasPendingFollowRequestFromYou hasPendingFollowRequestToYou:(BOOL)hasPendingFollowRequestToYou isFollowing:(BOOL)isFollowing isFollowed:(BOOL)isFollowed isBlocking:(BOOL)isBlocking isBlocked:(BOOL)isBlocked isMuted:(BOOL)isMuted serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:hasPendingFollowRequestFromYou:hasPendingFollowRequestToYou:isFollowing:isFollowed:isBlocking:isBlocked:isMuted:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreRelationCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL hasPendingFollowRequestFromYou __attribute__((swift_name("hasPendingFollowRequestFromYou")));
@property BOOL hasPendingFollowRequestToYou __attribute__((swift_name("hasPendingFollowRequestToYou")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BOOL isBlocked __attribute__((swift_name("isBlocked")));
@property BOOL isBlocking __attribute__((swift_name("isBlocking")));
@property BOOL isFollowed __attribute__((swift_name("isFollowed")));
@property BOOL isFollowing __attribute__((swift_name("isFollowing")));
@property BOOL isMuted __attribute__((swift_name("isMuted")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSearchRequest")))
@interface KmisskeyCoreUsersSearchRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersSearchRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable detail __attribute__((swift_name("detail")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyBoolean * _Nullable localOnly __attribute__((swift_name("localOnly")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSearchByUsernameAndHostRequest")))
@interface KmisskeyCoreUsersSearchByUsernameAndHostRequest : KmisskeyBase
- (instancetype)initWithUsername:(NSString *)username __attribute__((swift_name("init(username:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreUsersSearchByUsernameAndHostRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable detail __attribute__((swift_name("detail")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString *username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSearchWithAuthRequest")))
@interface KmisskeyCoreUsersSearchWithAuthRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersSearchWithAuthRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable detail __attribute__((swift_name("detail")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyBoolean * _Nullable localOnly __attribute__((swift_name("localOnly")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersShowMultipleRequest")))
@interface KmisskeyCoreUsersShowMultipleRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersShowMultipleRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> *userIds __attribute__((swift_name("userIds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersShowSingleRequest")))
@interface KmisskeyCoreUsersShowSingleRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersShowSingleRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateWebhooksRequest")))
@interface KmisskeyCoreCreateWebhooksRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreCreateWebhooksRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyKotlinArray<NSString *> * _Nullable on __attribute__((swift_name("on")));
@property NSString * _Nullable secret __attribute__((swift_name("secret")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreWebhook")))
@interface KmisskeyCoreWebhook : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt userId:(NSString * _Nullable)userId name:(NSString * _Nullable)name on:(KmisskeyKotlinArray<NSString *> * _Nullable)on url:(NSString * _Nullable)url secret:(NSString * _Nullable)secret active:(KmisskeyBoolean * _Nullable)active latestSentAt:(NSString * _Nullable)latestSentAt latestStatus:(KmisskeyInt * _Nullable)latestStatus serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:userId:name:on:url:secret:active:latestSentAt:latestStatus:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreWebhookCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable active __attribute__((swift_name("active")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable latestSentAt __attribute__((swift_name("latestSentAt")));
@property KmisskeyInt * _Nullable latestStatus __attribute__((swift_name("latestStatus")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyKotlinArray<NSString *> * _Nullable on __attribute__((swift_name("on")));
@property NSString * _Nullable secret __attribute__((swift_name("secret")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteWebhooksRequest")))
@interface KmisskeyCoreDeleteWebhooksRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreDeleteWebhooksRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable webhookId __attribute__((swift_name("webhookId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteWebhooksResponse")))
@interface KmisskeyCoreDeleteWebhooksResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreDeleteWebhooksResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListWebhooksRequest")))
@interface KmisskeyCoreListWebhooksRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreListWebhooksRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreShowWebhooksRequest")))
@interface KmisskeyCoreShowWebhooksRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreShowWebhooksRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable webhookId __attribute__((swift_name("webhookId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUpdateWebhooksRequest")))
@interface KmisskeyCoreUpdateWebhooksRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 i:(NSString * _Nullable)i serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:i:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUpdateWebhooksRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable active __attribute__((swift_name("active")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyKotlinArray<NSString *> * _Nullable on __attribute__((swift_name("on")));
@property NSString * _Nullable secret __attribute__((swift_name("secret")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable webhookId __attribute__((swift_name("webhookId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUpdateWebhooksResponse")))
@interface KmisskeyCoreUpdateWebhooksResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUpdateWebhooksResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTokenRequest.Companion")))
@interface KmisskeyCoreTokenRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreTokenRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIRequest.Companion")))
@interface KmisskeyCoreIRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreIRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @see UserLite
 * @see UserDetailedNotMe
 * @see MeDetailed
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser.Companion")))
@interface KmisskeyCoreUserCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * @see UserLite
 * @see UserDetailedNotMe
 * @see MeDetailed
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserCompanion *shared __attribute__((swift_name("shared")));

/**
 * @see UserLite
 * @see UserDetailedNotMe
 * @see MeDetailed
 */
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreUserLite")))
@interface KmisskeyCoreUserLite : KmisskeyCoreUser
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id name:(NSString * _Nullable)name username:(NSString * _Nullable)username host:(NSString * _Nullable)host avatarUrl:(NSString * _Nullable)avatarUrl avatarBlurhash:(NSString * _Nullable)avatarBlurhash avatarDecorations:(KmisskeyKotlinArray<KmisskeyCoreAvatarDecoration *> * _Nullable)avatarDecorations isBot:(BOOL)isBot isCat:(BOOL)isCat instance:(KmisskeyCoreInstance * _Nullable)instance emojis:(KmisskeyCoreEmojis * _Nullable)emojis onlineStatus:(NSString * _Nullable)onlineStatus badgeRoles:(KmisskeyKotlinArray<KmisskeyCoreBadgeRole *> * _Nullable)badgeRoles roles:(KmisskeyKotlinArray<KmisskeyCoreRole *> * _Nullable)roles policies:(KmisskeyCoreUserPolicies * _Nullable)policies serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:name:username:host:avatarUrl:avatarBlurhash:avatarDecorations:isBot:isCat:instance:emojis:onlineStatus:badgeRoles:roles:policies:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreUserLiteCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable avatarBlurhash __attribute__((swift_name("avatarBlurhash")));
@property KmisskeyKotlinArray<KmisskeyCoreAvatarDecoration *> *avatarDecorations __attribute__((swift_name("avatarDecorations")));
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property KmisskeyKotlinArray<KmisskeyCoreBadgeRole *> *badgeRoles __attribute__((swift_name("badgeRoles")));
@property KmisskeyCoreEmojis * _Nullable emojis __attribute__((swift_name("emojis")));

/** The local host is represented with null. */
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString *id __attribute__((swift_name("id")));
@property KmisskeyCoreInstance * _Nullable instance __attribute__((swift_name("instance")));
@property BOOL isBot __attribute__((swift_name("isBot")));
@property BOOL isCat __attribute__((swift_name("isCat")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable onlineStatus __attribute__((swift_name("onlineStatus")));
@property KmisskeyCoreUserPolicies * _Nullable policies __attribute__((swift_name("policies")));
@property KmisskeyKotlinArray<KmisskeyCoreRole *> *roles __attribute__((swift_name("roles")));
@property NSString *username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreUserDetailedNotMe")))
@interface KmisskeyCoreUserDetailedNotMe : KmisskeyCoreUserLite
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 seen1:(int32_t)seen1 id:(NSString * _Nullable)id name:(NSString * _Nullable)name username:(NSString * _Nullable)username host:(NSString * _Nullable)host avatarUrl:(NSString * _Nullable)avatarUrl avatarBlurhash:(NSString * _Nullable)avatarBlurhash avatarDecorations:(KmisskeyKotlinArray<KmisskeyCoreAvatarDecoration *> * _Nullable)avatarDecorations isBot:(BOOL)isBot isCat:(BOOL)isCat instance:(KmisskeyCoreInstance * _Nullable)instance emojis:(KmisskeyCoreEmojis * _Nullable)emojis onlineStatus:(NSString * _Nullable)onlineStatus badgeRoles:(KmisskeyKotlinArray<KmisskeyCoreBadgeRole *> * _Nullable)badgeRoles roles:(KmisskeyKotlinArray<KmisskeyCoreRole *> * _Nullable)roles policies:(KmisskeyCoreUserPolicies * _Nullable)policies url:(NSString * _Nullable)url uri:(NSString * _Nullable)uri moveTo:(NSString * _Nullable)moveTo alsoKnownAs:(KmisskeyKotlinArray<NSString *> * _Nullable)alsoKnownAs createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt lastFetchedAt:(NSString * _Nullable)lastFetchedAt bannerUrl:(NSString * _Nullable)bannerUrl bannerBlurhash:(NSString * _Nullable)bannerBlurhash isLocked:(BOOL)isLocked isSilenced:(BOOL)isSilenced isLimited:(BOOL)isLimited isSuspended:(BOOL)isSuspended description:(NSString * _Nullable)description location:(NSString * _Nullable)location birthday:(NSString * _Nullable)birthday lang:(NSString * _Nullable)lang fields:(KmisskeyKotlinArray<KmisskeyCoreField *> * _Nullable)fields verifiedLinks:(KmisskeyKotlinArray<NSString *> * _Nullable)verifiedLinks followersCount:(int32_t)followersCount followingCount:(int32_t)followingCount notesCount:(int32_t)notesCount pinnedNoteIds:(KmisskeyKotlinArray<NSString *> * _Nullable)pinnedNoteIds pinnedNotes:(KmisskeyKotlinArray<KmisskeyCoreNote *> * _Nullable)pinnedNotes pinnedPageId:(NSString * _Nullable)pinnedPageId pinnedPage:(KmisskeyCorePage * _Nullable)pinnedPage publicReactions:(BOOL)publicReactions followingVisibility:(NSString * _Nullable)followingVisibility followersVisibility:(NSString * _Nullable)followersVisibility twoFactorEnabled:(BOOL)twoFactorEnabled usePasswordLessLogin:(BOOL)usePasswordLessLogin securityKeys:(BOOL)securityKeys memo:(NSString * _Nullable)memo moderationNote:(NSString * _Nullable)moderationNote isFollowing:(BOOL)isFollowing isFollowed:(BOOL)isFollowed hasPendingFollowRequestFromYou:(BOOL)hasPendingFollowRequestFromYou hasPendingFollowRequestToYou:(BOOL)hasPendingFollowRequestToYou isBlocking:(BOOL)isBlocking isBlocked:(BOOL)isBlocked isMuted:(BOOL)isMuted isRenoteMuted:(BOOL)isRenoteMuted notify:(NSString * _Nullable)notify withReplies:(BOOL)withReplies bannerColor:(NSString * _Nullable)bannerColor serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:seen1:id:name:username:host:avatarUrl:avatarBlurhash:avatarDecorations:isBot:isCat:instance:emojis:onlineStatus:badgeRoles:roles:policies:url:uri:moveTo:alsoKnownAs:createdAt:updatedAt:lastFetchedAt:bannerUrl:bannerBlurhash:isLocked:isSilenced:isLimited:isSuspended:description:location:birthday:lang:fields:verifiedLinks:followersCount:followingCount:notesCount:pinnedNoteIds:pinnedNotes:pinnedPageId:pinnedPage:publicReactions:followingVisibility:followersVisibility:twoFactorEnabled:usePasswordLessLogin:securityKeys:memo:moderationNote:isFollowing:isFollowed:hasPendingFollowRequestFromYou:hasPendingFollowRequestToYou:isBlocking:isBlocked:isMuted:isRenoteMuted:notify:withReplies:bannerColor:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id name:(NSString * _Nullable)name username:(NSString * _Nullable)username host:(NSString * _Nullable)host avatarUrl:(NSString * _Nullable)avatarUrl avatarBlurhash:(NSString * _Nullable)avatarBlurhash avatarDecorations:(KmisskeyKotlinArray<KmisskeyCoreAvatarDecoration *> * _Nullable)avatarDecorations isBot:(BOOL)isBot isCat:(BOOL)isCat instance:(KmisskeyCoreInstance * _Nullable)instance emojis:(KmisskeyCoreEmojis * _Nullable)emojis onlineStatus:(NSString * _Nullable)onlineStatus badgeRoles:(KmisskeyKotlinArray<KmisskeyCoreBadgeRole *> * _Nullable)badgeRoles roles:(KmisskeyKotlinArray<KmisskeyCoreRole *> * _Nullable)roles policies:(KmisskeyCoreUserPolicies * _Nullable)policies serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:name:username:host:avatarUrl:avatarBlurhash:avatarDecorations:isBot:isCat:instance:emojis:onlineStatus:badgeRoles:roles:policies:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUserDetailedNotMeCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> * _Nullable alsoKnownAs __attribute__((swift_name("alsoKnownAs")));
@property NSString * _Nullable bannerBlurhash __attribute__((swift_name("bannerBlurhash")));
@property NSString * _Nullable bannerColor __attribute__((swift_name("bannerColor")));
@property (readonly) KmisskeyCoreColor * _Nullable bannerColorObject __attribute__((swift_name("bannerColorObject")));
@property NSString * _Nullable bannerUrl __attribute__((swift_name("bannerUrl")));
@property NSString * _Nullable birthday __attribute__((swift_name("birthday")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmisskeyKotlinArray<KmisskeyCoreField *> *fields __attribute__((swift_name("fields")));
@property int32_t followersCount __attribute__((swift_name("followersCount")));
@property NSString * _Nullable followersVisibility __attribute__((swift_name("followersVisibility")));
@property int32_t followingCount __attribute__((swift_name("followingCount")));
@property NSString * _Nullable followingVisibility __attribute__((swift_name("followingVisibility")));
@property BOOL hasPendingFollowRequestFromYou __attribute__((swift_name("hasPendingFollowRequestFromYou")));
@property BOOL hasPendingFollowRequestToYou __attribute__((swift_name("hasPendingFollowRequestToYou")));
@property BOOL isBlocked __attribute__((swift_name("isBlocked")));
@property BOOL isBlocking __attribute__((swift_name("isBlocking")));
@property BOOL isFollowed __attribute__((swift_name("isFollowed")));
@property BOOL isFollowing __attribute__((swift_name("isFollowing")));
@property BOOL isLimited __attribute__((swift_name("isLimited")));
@property BOOL isLocked __attribute__((swift_name("isLocked")));
@property BOOL isMuted __attribute__((swift_name("isMuted")));
@property BOOL isRenoteMuted __attribute__((swift_name("isRenoteMuted")));
@property BOOL isSilenced __attribute__((swift_name("isSilenced")));
@property BOOL isSuspended __attribute__((swift_name("isSuspended")));
@property NSString * _Nullable lang __attribute__((swift_name("lang")));
@property NSString * _Nullable lastFetchedAt __attribute__((swift_name("lastFetchedAt")));
@property NSString * _Nullable location __attribute__((swift_name("location")));
@property NSString * _Nullable memo __attribute__((swift_name("memo")));
@property NSString * _Nullable moderationNote __attribute__((swift_name("moderationNote")));
@property NSString * _Nullable moveTo __attribute__((swift_name("moveTo")));
@property int32_t notesCount __attribute__((swift_name("notesCount")));
@property NSString * _Nullable notify __attribute__((swift_name("notify")));
@property KmisskeyKotlinArray<NSString *> *pinnedNoteIds __attribute__((swift_name("pinnedNoteIds")));
@property KmisskeyKotlinArray<KmisskeyCoreNote *> *pinnedNotes __attribute__((swift_name("pinnedNotes")));
@property KmisskeyCorePage * _Nullable pinnedPage __attribute__((swift_name("pinnedPage")));
@property NSString * _Nullable pinnedPageId __attribute__((swift_name("pinnedPageId")));
@property BOOL publicReactions __attribute__((swift_name("publicReactions")));
@property BOOL securityKeys __attribute__((swift_name("securityKeys")));
@property BOOL twoFactorEnabled __attribute__((swift_name("twoFactorEnabled")));
@property NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property BOOL usePasswordLessLogin __attribute__((swift_name("usePasswordLessLogin")));
@property KmisskeyKotlinArray<NSString *> *verifiedLinks __attribute__((swift_name("verifiedLinks")));
@property BOOL withReplies __attribute__((swift_name("withReplies")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeDetailed")))
@interface KmisskeyCoreMeDetailed : KmisskeyCoreUserDetailedNotMe
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 seen1:(int32_t)seen1 id:(NSString * _Nullable)id name:(NSString * _Nullable)name username:(NSString * _Nullable)username host:(NSString * _Nullable)host avatarUrl:(NSString * _Nullable)avatarUrl avatarBlurhash:(NSString * _Nullable)avatarBlurhash avatarDecorations:(KmisskeyKotlinArray<KmisskeyCoreAvatarDecoration *> * _Nullable)avatarDecorations isBot:(BOOL)isBot isCat:(BOOL)isCat instance:(KmisskeyCoreInstance * _Nullable)instance emojis:(KmisskeyCoreEmojis * _Nullable)emojis onlineStatus:(NSString * _Nullable)onlineStatus badgeRoles:(KmisskeyKotlinArray<KmisskeyCoreBadgeRole *> * _Nullable)badgeRoles roles:(KmisskeyKotlinArray<KmisskeyCoreRole *> * _Nullable)roles policies:(KmisskeyCoreUserPolicies * _Nullable)policies url:(NSString * _Nullable)url uri:(NSString * _Nullable)uri moveTo:(NSString * _Nullable)moveTo alsoKnownAs:(KmisskeyKotlinArray<NSString *> * _Nullable)alsoKnownAs createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt lastFetchedAt:(NSString * _Nullable)lastFetchedAt bannerUrl:(NSString * _Nullable)bannerUrl bannerBlurhash:(NSString * _Nullable)bannerBlurhash isLocked:(BOOL)isLocked isSilenced:(BOOL)isSilenced isLimited:(BOOL)isLimited isSuspended:(BOOL)isSuspended description:(NSString * _Nullable)description location:(NSString * _Nullable)location birthday:(NSString * _Nullable)birthday lang:(NSString * _Nullable)lang fields:(KmisskeyKotlinArray<KmisskeyCoreField *> * _Nullable)fields verifiedLinks:(KmisskeyKotlinArray<NSString *> * _Nullable)verifiedLinks followersCount:(int32_t)followersCount followingCount:(int32_t)followingCount notesCount:(int32_t)notesCount pinnedNoteIds:(KmisskeyKotlinArray<NSString *> * _Nullable)pinnedNoteIds pinnedNotes:(KmisskeyKotlinArray<KmisskeyCoreNote *> * _Nullable)pinnedNotes pinnedPageId:(NSString * _Nullable)pinnedPageId pinnedPage:(KmisskeyCorePage * _Nullable)pinnedPage publicReactions:(BOOL)publicReactions followingVisibility:(NSString * _Nullable)followingVisibility followersVisibility:(NSString * _Nullable)followersVisibility twoFactorEnabled:(BOOL)twoFactorEnabled usePasswordLessLogin:(BOOL)usePasswordLessLogin securityKeys:(BOOL)securityKeys memo:(NSString * _Nullable)memo moderationNote:(NSString * _Nullable)moderationNote isFollowing:(BOOL)isFollowing isFollowed:(BOOL)isFollowed hasPendingFollowRequestFromYou:(BOOL)hasPendingFollowRequestFromYou hasPendingFollowRequestToYou:(BOOL)hasPendingFollowRequestToYou isBlocking:(BOOL)isBlocking isBlocked:(BOOL)isBlocked isMuted:(BOOL)isMuted isRenoteMuted:(BOOL)isRenoteMuted notify:(NSString * _Nullable)notify withReplies:(BOOL)withReplies bannerColor:(NSString * _Nullable)bannerColor serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:seen1:id:name:username:host:avatarUrl:avatarBlurhash:avatarDecorations:isBot:isCat:instance:emojis:onlineStatus:badgeRoles:roles:policies:url:uri:moveTo:alsoKnownAs:createdAt:updatedAt:lastFetchedAt:bannerUrl:bannerBlurhash:isLocked:isSilenced:isLimited:isSuspended:description:location:birthday:lang:fields:verifiedLinks:followersCount:followingCount:notesCount:pinnedNoteIds:pinnedNotes:pinnedPageId:pinnedPage:publicReactions:followingVisibility:followersVisibility:twoFactorEnabled:usePasswordLessLogin:securityKeys:memo:moderationNote:isFollowing:isFollowed:hasPendingFollowRequestFromYou:hasPendingFollowRequestToYou:isBlocking:isBlocked:isMuted:isRenoteMuted:notify:withReplies:bannerColor:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreMeDetailedCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<KmisskeyCoreAchievement *> *achievements __attribute__((swift_name("achievements")));
@property BOOL alwaysMarkNsfw __attribute__((swift_name("alwaysMarkNsfw")));
@property BOOL autoAcceptFollowed __attribute__((swift_name("autoAcceptFollowed")));
@property BOOL autoSensitive __attribute__((swift_name("autoSensitive")));
@property NSString * _Nullable avatarId __attribute__((swift_name("avatarId")));
@property NSString * _Nullable bannerId __attribute__((swift_name("bannerId")));
@property BOOL carefulBot __attribute__((swift_name("carefulBot")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property KmisskeyKotlinArray<NSString *> *emailNotificationTypes __attribute__((swift_name("emailNotificationTypes")));
@property BOOL emailVerified __attribute__((swift_name("emailVerified")));
@property NSArray<KmisskeyCoreMutedWordItem *> *hardMutedWords __attribute__((swift_name("hardMutedWords")));
@property BOOL hasPendingReceivedFollowRequest __attribute__((swift_name("hasPendingReceivedFollowRequest")));
@property BOOL hasUnreadAnnouncement __attribute__((swift_name("hasUnreadAnnouncement")));
@property BOOL hasUnreadAntenna __attribute__((swift_name("hasUnreadAntenna")));
@property BOOL hasUnreadChannel __attribute__((swift_name("hasUnreadChannel")));
@property BOOL hasUnreadMentions __attribute__((swift_name("hasUnreadMentions")));
@property BOOL hasUnreadNotifications __attribute__((swift_name("hasUnreadNotifications")));
@property BOOL hasUnreadSpecifiedNotes __attribute__((swift_name("hasUnreadSpecifiedNotes")));
@property BOOL hideOnlineStatus __attribute__((swift_name("hideOnlineStatus")));
@property BOOL injectFeaturedNote __attribute__((swift_name("injectFeaturedNote")));
@property BOOL isAdmin __attribute__((swift_name("isAdmin")));
@property BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property BOOL isExplorable __attribute__((swift_name("isExplorable")));
@property BOOL isModerator __attribute__((swift_name("isModerator")));
@property int32_t loggedInDays __attribute__((swift_name("loggedInDays")));
@property KmisskeyKotlinArray<NSString *> *mutedInstances __attribute__((swift_name("mutedInstances")));
@property NSArray<KmisskeyCoreMutedWordItem *> *mutedWords __attribute__((swift_name("mutedWords")));
@property BOOL noCrawle __attribute__((swift_name("noCrawle")));
@property BOOL preventAiLearning __attribute__((swift_name("preventAiLearning")));
@property BOOL receiveAnnouncementEmail __attribute__((swift_name("receiveAnnouncementEmail")));
@property NSString * _Nullable twoFactorBackupCodesStock __attribute__((swift_name("twoFactorBackupCodesStock")));
@property int32_t unreadNotificationsCount __attribute__((swift_name("unreadNotificationsCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreColor")))
@interface KmisskeyCoreColor : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreColorCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t b __attribute__((swift_name("b")));
@property int32_t g __attribute__((swift_name("g")));
@property int32_t r __attribute__((swift_name("r")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAvatarDecoration")))
@interface KmisskeyCoreAvatarDecoration : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreAvatarDecorationCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyFloat * _Nullable angle __attribute__((swift_name("angle")));
@property BOOL flipH __attribute__((swift_name("flipH")));
@property NSString *id __attribute__((swift_name("id")));
@property KmisskeyFloat * _Nullable offsetX __attribute__((swift_name("offsetX")));
@property KmisskeyFloat * _Nullable offsetY __attribute__((swift_name("offsetY")));
@property NSString *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBadgeRole")))
@interface KmisskeyCoreBadgeRole : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreBadgeRoleCompanion *companion __attribute__((swift_name("companion")));
@property int32_t displayOrder __attribute__((swift_name("displayOrder")));
@property NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kmisskey/util/json/EmojisSerializer))
*/
__attribute__((swift_name("CoreEmojis")))
@interface KmisskeyCoreEmojis : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreEmojisCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<KmisskeyCoreEmoji *> *list __attribute__((swift_name("list")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreInstance")))
@interface KmisskeyCoreInstance : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 name:(NSString * _Nullable)name softwareName:(NSString * _Nullable)softwareName softwareVersion:(NSString * _Nullable)softwareVersion iconUrl:(NSString * _Nullable)iconUrl faviconUrl:(NSString * _Nullable)faviconUrl themeColor:(NSString * _Nullable)themeColor serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:name:softwareName:softwareVersion:iconUrl:faviconUrl:themeColor:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreInstanceCompanion *companion __attribute__((swift_name("companion")));
- (KmisskeyCoreColor * _Nullable)themeColorObject __attribute__((swift_name("themeColorObject()")));
@property NSString * _Nullable faviconUrl __attribute__((swift_name("faviconUrl")));
@property NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable softwareName __attribute__((swift_name("softwareName")));
@property NSString * _Nullable softwareVersion __attribute__((swift_name("softwareVersion")));
@property NSString * _Nullable themeColor __attribute__((swift_name("themeColor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserPolicies")))
@interface KmisskeyCoreUserPolicies : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUserPoliciesCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable alwaysMarkNsfw __attribute__((swift_name("alwaysMarkNsfw")));
@property KmisskeyInt * _Nullable antennaLimit __attribute__((swift_name("antennaLimit")));
@property KmisskeyBoolean * _Nullable canHideAds __attribute__((swift_name("canHideAds")));
@property KmisskeyBoolean * _Nullable canInvite __attribute__((swift_name("canInvite")));
@property KmisskeyBoolean * _Nullable canManageCustomEmojis __attribute__((swift_name("canManageCustomEmojis")));
@property KmisskeyBoolean * _Nullable canPublicNote __attribute__((swift_name("canPublicNote")));
@property KmisskeyBoolean * _Nullable canSearchNotes __attribute__((swift_name("canSearchNotes")));
@property KmisskeyInt * _Nullable clipLimit __attribute__((swift_name("clipLimit")));
@property KmisskeyInt * _Nullable driveCapacityMb __attribute__((swift_name("driveCapacityMb")));
@property KmisskeyBoolean * _Nullable gtlAvailable __attribute__((swift_name("gtlAvailable")));
@property KmisskeyBoolean * _Nullable ltlAvailable __attribute__((swift_name("ltlAvailable")));
@property KmisskeyInt * _Nullable noteEachClipsLimit __attribute__((swift_name("noteEachClipsLimit")));
@property KmisskeyInt * _Nullable pinLimit __attribute__((swift_name("pinLimit")));
@property KmisskeyDouble * _Nullable rateLimitFactor __attribute__((swift_name("rateLimitFactor")));
@property KmisskeyInt * _Nullable userEachUserListsLimit __attribute__((swift_name("userEachUserListsLimit")));
@property KmisskeyInt * _Nullable userListLimit __attribute__((swift_name("userListLimit")));
@property KmisskeyInt * _Nullable webhookLimit __attribute__((swift_name("webhookLimit")));
@property KmisskeyInt * _Nullable wordMuteLimit __attribute__((swift_name("wordMuteLimit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRole")))
@interface KmisskeyCoreRole : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreRoleCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) KmisskeyCoreColor * _Nullable colorObject __attribute__((swift_name("colorObject")));
@property int32_t displayOrder __attribute__((swift_name("displayOrder")));
@property NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit")))
@interface KmisskeyCoreRateLimit : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreRateLimitCompanion *companion __attribute__((swift_name("companion")));
@property int32_t limit __attribute__((swift_name("limit")));
@property int32_t remaining __attribute__((swift_name("remaining")));
@property NSString * _Nullable reset __attribute__((swift_name("reset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePagingTokenRequest.Companion")))
@interface KmisskeyCorePagingTokenRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePagingTokenRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIFavoritesRequest.Companion")))
@interface KmisskeyCoreIFavoritesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreIFavoritesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIFavoritesResponse.Companion")))
@interface KmisskeyCoreIFavoritesResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreIFavoritesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KmisskeyKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreINotificationsRequest.Companion")))
@interface KmisskeyCoreINotificationsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreINotificationsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotification.Companion")))
@interface KmisskeyCoreNotificationCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotificationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIUpdateRequest.Companion")))
@interface KmisskeyCoreIUpdateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreIUpdateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreField")))
@interface KmisskeyCoreField : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 name:(NSString * _Nullable)name value:(NSString * _Nullable)value serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:name:value:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreFieldCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIPinRequest.Companion")))
@interface KmisskeyCoreIPinRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreIPinRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIUnpinRequest.Companion")))
@interface KmisskeyCoreIUnpinRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreIUnpinRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAnnouncementsRequest.Companion")))
@interface KmisskeyCoreAnnouncementsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAnnouncementsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAnnouncements.Companion")))
@interface KmisskeyCoreAnnouncementsCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAnnouncementsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReadAnnouncementRequest.Companion")))
@interface KmisskeyCoreReadAnnouncementRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreReadAnnouncementRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAntennasListRequest.Companion")))
@interface KmisskeyCoreAntennasListRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAntennasListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAntenna.Companion")))
@interface KmisskeyCoreAntennaCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAntennaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFullPagingTokenRequest.Companion")))
@interface KmisskeyCoreFullPagingTokenRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFullPagingTokenRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAntennasNotesRequest.Companion")))
@interface KmisskeyCoreAntennasNotesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAntennasNotesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CorePoll")))
@interface KmisskeyCorePoll : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 multiple:(BOOL)multiple expiresAt:(NSString * _Nullable)expiresAt choices:(KmisskeyKotlinArray<KmisskeyCoreChoice *> * _Nullable)choices serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:multiple:expiresAt:choices:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCorePollCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<KmisskeyCoreChoice *> * _Nullable choices __attribute__((swift_name("choices")));
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property BOOL multiple __attribute__((swift_name("multiple")));
@end


/**
 * 投稿オブジェクト
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNote.Companion")))
@interface KmisskeyCoreNoteCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * 投稿オブジェクト
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNoteCompanion *shared __attribute__((swift_name("shared")));

/**
 * 投稿オブジェクト
 */
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApShowRequest.Companion")))
@interface KmisskeyCoreApShowRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreApShowRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateAppRequest.Companion")))
@interface KmisskeyCoreCreateAppRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreCreateAppRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateAppResponse.Companion")))
@interface KmisskeyCoreCreateAppResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreCreateAppResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetMiAuthUriRequest.Companion")))
@interface KmisskeyCoreGetMiAuthUriRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGetMiAuthUriRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGenerateAuthSessionRequest.Companion")))
@interface KmisskeyCoreGenerateAuthSessionRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGenerateAuthSessionRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGenerateAuthSessionResponse.Companion")))
@interface KmisskeyCoreGenerateAuthSessionResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGenerateAuthSessionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserKeyAuthSessionRequest.Companion")))
@interface KmisskeyCoreUserKeyAuthSessionRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserKeyAuthSessionRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserKeyAuthSessionResponse.Companion")))
@interface KmisskeyCoreUserKeyAuthSessionResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserKeyAuthSessionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksCreateRequest.Companion")))
@interface KmisskeyCoreBlocksCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreBlocksCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksDeleteRequest.Companion")))
@interface KmisskeyCoreBlocksDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreBlocksDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksListRequest.Companion")))
@interface KmisskeyCoreBlocksListRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreBlocksListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlock.Companion")))
@interface KmisskeyCoreBlockCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreBlockCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsFollowedRequest.Companion")))
@interface KmisskeyCoreChannelsFollowedRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsFollowedRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannel.Companion")))
@interface KmisskeyCoreChannelCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsMyFavoritesRequest.Companion")))
@interface KmisskeyCoreChannelsMyFavoritesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsMyFavoritesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsOwnedRequest.Companion")))
@interface KmisskeyCoreChannelsOwnedRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsOwnedRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsShowRequest.Companion")))
@interface KmisskeyCoreChannelsShowRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsShowRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsTimelineRequest.Companion")))
@interface KmisskeyCoreChannelsTimelineRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsTimelineRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsAddNoteRequest.Companion")))
@interface KmisskeyCoreClipsAddNoteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipsAddNoteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsCreateRequest.Companion")))
@interface KmisskeyCoreClipsCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipsCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClip.Companion")))
@interface KmisskeyCoreClipCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsDeleteRequest.Companion")))
@interface KmisskeyCoreClipsDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipsDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsListRequest.Companion")))
@interface KmisskeyCoreClipsListRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipsListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsNotesRequest.Companion")))
@interface KmisskeyCoreClipsNotesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipsNotesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsRemoveNoteRequest.Companion")))
@interface KmisskeyCoreClipsRemoveNoteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipsRemoveNoteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsShowRequest.Companion")))
@interface KmisskeyCoreClipsShowRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipsShowRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsUpdateRequest.Companion")))
@interface KmisskeyCoreClipsUpdateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipsUpdateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFavoritesCreateRequest.Companion")))
@interface KmisskeyCoreFavoritesCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFavoritesCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFavoritesDeleteRequest.Companion")))
@interface KmisskeyCoreFavoritesDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFavoritesDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreShowInstanceRequest.Companion")))
@interface KmisskeyCoreShowInstanceRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreShowInstanceRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFederationInstanceResponse.Companion")))
@interface KmisskeyCoreFederationInstanceResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFederationInstanceResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesCreateRequest.Companion")))
@interface KmisskeyCoreFilesCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFilesCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmisskeyKotlinByteArray : KmisskeyBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmisskeyByte *(^)(KmisskeyInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmisskeyKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileProperties")))
@interface KmisskeyCoreFileProperties : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreFilePropertiesCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable avgColor __attribute__((swift_name("avgColor")));
@property int32_t height __attribute__((swift_name("height")));
@property int32_t orientation __attribute__((swift_name("orientation")));
@property int32_t width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFolder")))
@interface KmisskeyCoreFolder : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreFolderCompanion *companion __attribute__((swift_name("companion")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property int32_t filesCount __attribute__((swift_name("filesCount")));
@property int32_t foldersCount __attribute__((swift_name("foldersCount")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *name __attribute__((swift_name("name")));
@property KmisskeyCoreFolder * _Nullable parent __attribute__((swift_name("parent")));
@property NSString * _Nullable parentId __attribute__((swift_name("parentId")));
@end


/**
 * DriveFile
 * ファイルオブジェクト
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFile.Companion")))
@interface KmisskeyCoreFileCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * DriveFile
 * ファイルオブジェクト
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFileCompanion *shared __attribute__((swift_name("shared")));

/**
 * DriveFile
 * ファイルオブジェクト
 */
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequestsAcceptRequest.Companion")))
@interface KmisskeyCoreFollowingRequestsAcceptRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowingRequestsAcceptRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingCreateRequest.Companion")))
@interface KmisskeyCoreFollowingCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowingCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingDeleteRequest.Companion")))
@interface KmisskeyCoreFollowingDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowingDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequestsRejectRequest.Companion")))
@interface KmisskeyCoreFollowingRequestsRejectRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowingRequestsRejectRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequestsListRequest.Companion")))
@interface KmisskeyCoreFollowingRequestsListRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowingRequestsListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequestsListResponse.Companion")))
@interface KmisskeyCoreFollowingRequestsListResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowingRequestsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateGalleryPostRequest.Companion")))
@interface KmisskeyCoreCreateGalleryPostRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreCreateGalleryPostRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGalleryPost.Companion")))
@interface KmisskeyCoreGalleryPostCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGalleryPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteGalleryPostRequest.Companion")))
@interface KmisskeyCoreDeleteGalleryPostRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreDeleteGalleryPostRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLikeGalleryPostRequest.Companion")))
@interface KmisskeyCoreLikeGalleryPostRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreLikeGalleryPostRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIListGalleryPostsRequest.Companion")))
@interface KmisskeyCoreIListGalleryPostsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreIListGalleryPostsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListGalleryPostsRequest.Companion")))
@interface KmisskeyCoreListGalleryPostsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreListGalleryPostsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreShowGalleryPostRequest.Companion")))
@interface KmisskeyCoreShowGalleryPostRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreShowGalleryPostRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUnlikeGalleryPostRequest.Companion")))
@interface KmisskeyCoreUnlikeGalleryPostRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUnlikeGalleryPostRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUpdateGalleryPostRequest.Companion")))
@interface KmisskeyCoreUpdateGalleryPostRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUpdateGalleryPostRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListUserGalleryPostsRequest.Companion")))
@interface KmisskeyCoreListUserGalleryPostsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreListUserGalleryPostsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHashtagsTrendRequest.Companion")))
@interface KmisskeyCoreHashtagsTrendRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreHashtagsTrendRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend.Companion")))
@interface KmisskeyCoreTrendCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreTrendCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsCreateRequest.Companion")))
@interface KmisskeyCoreUsersListsCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNoteList.Companion")))
@interface KmisskeyCoreNoteListCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNoteListCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsDeleteRequest.Companion")))
@interface KmisskeyCoreUsersListsDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsListRequest.Companion")))
@interface KmisskeyCoreUsersListsListRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsPullRequest.Companion")))
@interface KmisskeyCoreUsersListsPullRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsPullRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsPushRequest.Companion")))
@interface KmisskeyCoreUsersListsPushRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsPushRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsShowRequest.Companion")))
@interface KmisskeyCoreUsersListsShowRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsShowRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsUpdateRequest.Companion")))
@interface KmisskeyCoreUsersListsUpdateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsUpdateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingHistoryRequest.Companion")))
@interface KmisskeyCoreMessagingHistoryRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMessagingHistoryRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreGroup")))
@interface KmisskeyCoreGroup : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt name:(NSString * _Nullable)name ownerId:(NSString * _Nullable)ownerId userIds:(NSArray<NSString *> * _Nullable)userIds serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:createdAt:name:ownerId:userIds:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreGroupCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable ownerId __attribute__((swift_name("ownerId")));
@property NSArray<NSString *> * _Nullable userIds __attribute__((swift_name("userIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessage.Companion")))
@interface KmisskeyCoreMessageCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesRequest.Companion")))
@interface KmisskeyCoreMessagingMessagesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMessagingMessagesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesCreateRequest.Companion")))
@interface KmisskeyCoreMessagingMessagesCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMessagingMessagesCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesDeleteRequest.Companion")))
@interface KmisskeyCoreMessagingMessagesDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMessagingMessagesDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojisRequest.Companion")))
@interface KmisskeyCoreEmojisRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreEmojisRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojisResponse.Companion")))
@interface KmisskeyCoreEmojisResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreEmojisResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreEmoji")))
@interface KmisskeyCoreEmoji : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id host:(NSString * _Nullable)host name:(NSString * _Nullable)name url:(NSString * _Nullable)url category:(NSString * _Nullable)category aliases:(KmisskeyKotlinArray<NSString *> * _Nullable)aliases width:(KmisskeyInt * _Nullable)width height:(KmisskeyInt * _Nullable)height serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:host:name:url:category:aliases:width:height:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreEmojiCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> * _Nullable aliases __attribute__((swift_name("aliases")));
@property NSString * _Nullable category __attribute__((swift_name("category")));
@property KmisskeyInt * _Nullable height __attribute__((swift_name("height")));

/** up to v12  */
@property NSString * _Nullable host __attribute__((swift_name("host"))) __attribute__((deprecated("")));

/** up to v12  */
@property NSString * _Nullable id __attribute__((swift_name("id"))) __attribute__((deprecated("")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString *url __attribute__((swift_name("url")));

/** added in calckey.jp/Misskey v14.0.0-rc-ni-jp1)  */
@property KmisskeyInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetOnlineUsersCountResponse.Companion")))
@interface KmisskeyCoreGetOnlineUsersCountResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGetOnlineUsersCountResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaRequest.Companion")))
@interface KmisskeyCoreMetaRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMetaRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePolicies")))
@interface KmisskeyCorePolicies : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCorePoliciesCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable canInvite __attribute__((swift_name("canInvite")));
@property KmisskeyBoolean * _Nullable canPublicNote __attribute__((swift_name("canPublicNote")));
@property KmisskeyBoolean * _Nullable gtlAvailable __attribute__((swift_name("gtlAvailable")));
@property KmisskeyBoolean * _Nullable ltlAvailable __attribute__((swift_name("ltlAvailable")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreMetaFeatures")))
@interface KmisskeyCoreMetaFeatures : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 registration:(BOOL)registration localTimeLine:(BOOL)localTimeLine globalTimeLine:(BOOL)globalTimeLine elasticsearch:(BOOL)elasticsearch hcaptcha:(BOOL)hcaptcha recaptcha:(BOOL)recaptcha objectStorage:(BOOL)objectStorage serviceWorker:(BOOL)serviceWorker miauth:(BOOL)miauth serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:registration:localTimeLine:globalTimeLine:elasticsearch:hcaptcha:recaptcha:objectStorage:serviceWorker:miauth:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreMetaFeaturesCompanion *companion __attribute__((swift_name("companion")));
@property BOOL elasticsearch __attribute__((swift_name("elasticsearch")));
@property BOOL globalTimeLine __attribute__((swift_name("globalTimeLine")));
@property BOOL hcaptcha __attribute__((swift_name("hcaptcha")));
@property BOOL localTimeLine __attribute__((swift_name("localTimeLine")));
@property BOOL miauth __attribute__((swift_name("miauth")));
@property BOOL objectStorage __attribute__((swift_name("objectStorage")));
@property BOOL recaptcha __attribute__((swift_name("recaptcha")));
@property BOOL registration __attribute__((swift_name("registration")));
@property BOOL serviceWorker __attribute__((swift_name("serviceWorker")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeta.Companion")))
@interface KmisskeyCoreMetaCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesCreateRequest.Companion")))
@interface KmisskeyCoreMutesCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMutesCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesDeleteRequest.Companion")))
@interface KmisskeyCoreMutesDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMutesDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesListRequest.Companion")))
@interface KmisskeyCoreMutesListRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMutesListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMute.Companion")))
@interface KmisskeyCoreMuteCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMuteCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesChildrenRequest.Companion")))
@interface KmisskeyCoreNotesChildrenRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesChildrenRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesConversationRequest.Companion")))
@interface KmisskeyCoreNotesConversationRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesConversationRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesCreateRequest.Companion")))
@interface KmisskeyCoreNotesCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollRequest")))
@interface KmisskeyCorePollRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCorePollRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> * _Nullable choices __attribute__((swift_name("choices")));
@property KmisskeyInt * _Nullable expiredAfter __attribute__((swift_name("expiredAfter")));
@property KmisskeyInt * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property KmisskeyBoolean * _Nullable multiple __attribute__((swift_name("multiple")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesCreateResponse.Companion")))
@interface KmisskeyCoreNotesCreateResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesCreateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesDeleteRequest.Companion")))
@interface KmisskeyCoreNotesDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesFeaturedRequest.Companion")))
@interface KmisskeyCoreNotesFeaturedRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesFeaturedRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesGlobalTimelineRequest.Companion")))
@interface KmisskeyCoreNotesGlobalTimelineRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesGlobalTimelineRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesHybridTimelineRequest.Companion")))
@interface KmisskeyCoreNotesHybridTimelineRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesHybridTimelineRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesLocalTimelineRequest.Companion")))
@interface KmisskeyCoreNotesLocalTimelineRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesLocalTimelineRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesMentionsRequest.Companion")))
@interface KmisskeyCoreNotesMentionsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesMentionsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRequest.Companion")))
@interface KmisskeyCoreNotesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesReactionsRequest.Companion")))
@interface KmisskeyCoreNotesReactionsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesReactionsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesReactionsResponse.Companion")))
@interface KmisskeyCoreNotesReactionsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesReactionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRenotesRequest.Companion")))
@interface KmisskeyCoreNotesRenotesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesRenotesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRepliesRequest.Companion")))
@interface KmisskeyCoreNotesRepliesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesRepliesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesSearchRequest.Companion")))
@interface KmisskeyCoreNotesSearchRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesSearchRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesSearchByTagRequest.Companion")))
@interface KmisskeyCoreNotesSearchByTagRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesSearchByTagRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesShowRequest.Companion")))
@interface KmisskeyCoreNotesShowRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesShowRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesTimelineRequest.Companion")))
@interface KmisskeyCoreNotesTimelineRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesTimelineRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNoteUnrenoteRequest.Companion")))
@interface KmisskeyCoreNoteUnrenoteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNoteUnrenoteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesUserListTimelineRequest.Companion")))
@interface KmisskeyCoreNotesUserListTimelineRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesUserListTimelineRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersNotesRequest.Companion")))
@interface KmisskeyCoreUsersNotesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersNotesRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServiceWorkerRegisterRequest.Companion")))
@interface KmisskeyCoreServiceWorkerRegisterRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreServiceWorkerRegisterRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreServiceWorkerRegisterResponse.Companion")))
@interface KmisskeyCoreServiceWorkerRegisterResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreServiceWorkerRegisterResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollsVoteRequest.Companion")))
@interface KmisskeyCorePollsVoteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePollsVoteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsCreateRequest.Companion")))
@interface KmisskeyCoreReactionsCreateRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreReactionsCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsDeleteRequest.Companion")))
@interface KmisskeyCoreReactionsDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreReactionsDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePagingRequest.Companion")))
@interface KmisskeyCorePagingRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePagingRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersFollowersRequest.Companion")))
@interface KmisskeyCoreUsersFollowersRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersFollowersRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollow.Companion")))
@interface KmisskeyCoreFollowCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersFollowingsRequest.Companion")))
@interface KmisskeyCoreUsersFollowingsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersFollowingsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersReactionsRequest.Companion")))
@interface KmisskeyCoreUsersReactionsRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersReactionsRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersReactionsResponse.Companion")))
@interface KmisskeyCoreUsersReactionsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersReactionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersRecommendationRequest.Companion")))
@interface KmisskeyCoreUsersRecommendationRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersRecommendationRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersRelationRequest.Companion")))
@interface KmisskeyCoreUsersRelationRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersRelationRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelation.Companion")))
@interface KmisskeyCoreRelationCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreRelationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSearchRequest.Companion")))
@interface KmisskeyCoreUsersSearchRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersSearchRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSearchByUsernameAndHostRequest.Companion")))
@interface KmisskeyCoreUsersSearchByUsernameAndHostRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersSearchByUsernameAndHostRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSearchWithAuthRequest.Companion")))
@interface KmisskeyCoreUsersSearchWithAuthRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersSearchWithAuthRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersShowMultipleRequest.Companion")))
@interface KmisskeyCoreUsersShowMultipleRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersShowMultipleRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersShowSingleRequest.Companion")))
@interface KmisskeyCoreUsersShowSingleRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersShowSingleRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateWebhooksRequest.Companion")))
@interface KmisskeyCoreCreateWebhooksRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreCreateWebhooksRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreWebhook.Companion")))
@interface KmisskeyCoreWebhookCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreWebhookCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteWebhooksRequest.Companion")))
@interface KmisskeyCoreDeleteWebhooksRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreDeleteWebhooksRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteWebhooksResponse.Companion")))
@interface KmisskeyCoreDeleteWebhooksResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreDeleteWebhooksResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListWebhooksRequest.Companion")))
@interface KmisskeyCoreListWebhooksRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreListWebhooksRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreShowWebhooksRequest.Companion")))
@interface KmisskeyCoreShowWebhooksRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreShowWebhooksRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUpdateWebhooksRequest.Companion")))
@interface KmisskeyCoreUpdateWebhooksRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUpdateWebhooksRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUpdateWebhooksResponse.Companion")))
@interface KmisskeyCoreUpdateWebhooksResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUpdateWebhooksResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmisskeyKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<KmisskeyKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<KmisskeyKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmisskeyKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<KmisskeyKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<KmisskeyKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmisskeyKotlinx_serialization_coreKSerializer <KmisskeyKotlinx_serialization_coreSerializationStrategy, KmisskeyKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserLite.Companion")))
@interface KmisskeyCoreUserLiteCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserLiteCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePage")))
@interface KmisskeyCorePage : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCorePageCompanion *companion __attribute__((swift_name("companion")));
@property BOOL alignCenter __attribute__((swift_name("alignCenter")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable eyeCatchingImageId __attribute__((swift_name("eyeCatchingImageId")));
@property NSString *font __attribute__((swift_name("font")));
@property BOOL hideTitleWhenPinned __attribute__((swift_name("hideTitleWhenPinned")));
@property NSString *id __attribute__((swift_name("id")));
@property BOOL isLiked __attribute__((swift_name("isLiked")));
@property int32_t likedCount __attribute__((swift_name("likedCount")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString *script __attribute__((swift_name("script")));
@property NSString * _Nullable summary __attribute__((swift_name("summary")));
@property NSString *title __attribute__((swift_name("title")));
@property NSString *updatedAt __attribute__((swift_name("updatedAt")));

/** UserLite */
@property KmisskeyCoreUser *user __attribute__((swift_name("user")));
@property NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDetailedNotMe.Companion")))
@interface KmisskeyCoreUserDetailedNotMeCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserDetailedNotMeCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeDetailed.Companion")))
@interface KmisskeyCoreMeDetailedCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMeDetailedCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAchievement")))
@interface KmisskeyCoreAchievement : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreAchievementCompanion *companion __attribute__((swift_name("companion")));
@property NSString *name __attribute__((swift_name("name")));
@end


/**
 * ミュートワード設定の項目
 * Misskey の mutedWords/hardMutedWords は以下の2種類の形式を混在できる:
 * - 正規表現パターン: "/pattern/" 形式の文字列
 * - キーワード配列: ["word1", "word2"] 形式のAND条件
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/kmisskey/util/json/MutedWordItemSerializer))
*/
__attribute__((swift_name("CoreMutedWordItem")))
@interface KmisskeyCoreMutedWordItem : KmisskeyBase
@property (class, readonly, getter=companion) KmisskeyCoreMutedWordItemCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreColor.Companion")))
@interface KmisskeyCoreColorCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreColorCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAvatarDecoration.Companion")))
@interface KmisskeyCoreAvatarDecorationCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAvatarDecorationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBadgeRole.Companion")))
@interface KmisskeyCoreBadgeRoleCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreBadgeRoleCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojis.Companion")))
@interface KmisskeyCoreEmojisCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreEmojisCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstance.Companion")))
@interface KmisskeyCoreInstanceCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreInstanceCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserPolicies.Companion")))
@interface KmisskeyCoreUserPoliciesCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserPoliciesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRole.Companion")))
@interface KmisskeyCoreRoleCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreRoleCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit.Companion")))
@interface KmisskeyCoreRateLimitCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreRateLimitCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *X_RATELIMIT_LIMIT __attribute__((swift_name("X_RATELIMIT_LIMIT")));
@property (readonly) NSString *X_RATELIMIT_REMAINING __attribute__((swift_name("X_RATELIMIT_REMAINING")));
@property (readonly) NSString *X_RATELIMIT_RESET __attribute__((swift_name("X_RATELIMIT_RESET")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreField.Companion")))
@interface KmisskeyCoreFieldCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFieldCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreChoice")))
@interface KmisskeyCoreChoice : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 text:(NSString * _Nullable)text votes:(KmisskeyInt * _Nullable)votes voted:(BOOL)voted serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:text:votes:voted:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmisskeyCoreChoiceCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isVoted")
*/
@property BOOL voted __attribute__((swift_name("voted")));
@property KmisskeyInt * _Nullable votes __attribute__((swift_name("votes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePoll.Companion")))
@interface KmisskeyCorePollCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePollCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KmisskeyKotlinByteIterator : KmisskeyBase <KmisskeyKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmisskeyByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileProperties.Companion")))
@interface KmisskeyCoreFilePropertiesCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFilePropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFolder.Companion")))
@interface KmisskeyCoreFolderCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFolderCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGroup.Companion")))
@interface KmisskeyCoreGroupCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGroupCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmoji.Companion")))
@interface KmisskeyCoreEmojiCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreEmojiCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePolicies.Companion")))
@interface KmisskeyCorePoliciesCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePoliciesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaFeatures.Companion")))
@interface KmisskeyCoreMetaFeaturesCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMetaFeaturesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollRequest.Companion")))
@interface KmisskeyCorePollRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePollRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmisskeyKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<KmisskeyKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<KmisskeyKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KmisskeyKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmisskeyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmisskeyKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<KmisskeyKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<KmisskeyKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) KmisskeyKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmisskeyKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<KmisskeyKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KmisskeyKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KmisskeyKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmisskeyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePage.Companion")))
@interface KmisskeyCorePageCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePageCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAchievement.Companion")))
@interface KmisskeyCoreAchievementCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAchievementCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * ミュートワード設定の項目
 * Misskey の mutedWords/hardMutedWords は以下の2種類の形式を混在できる:
 * - 正規表現パターン: "/pattern/" 形式の文字列
 * - キーワード配列: ["word1", "word2"] 形式のAND条件
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutedWordItem.Companion")))
@interface KmisskeyCoreMutedWordItemCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * ミュートワード設定の項目
 * Misskey の mutedWords/hardMutedWords は以下の2種類の形式を混在できる:
 * - 正規表現パターン: "/pattern/" 形式の文字列
 * - キーワード配列: ["word1", "word2"] 形式のAND条件
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMutedWordItemCompanion *shared __attribute__((swift_name("shared")));

/**
 * ミュートワード設定の項目
 * Misskey の mutedWords/hardMutedWords は以下の2種類の形式を混在できる:
 * - 正規表現パターン: "/pattern/" 形式の文字列
 * - キーワード配列: ["word1", "word2"] 形式のAND条件
 */
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChoice.Companion")))
@interface KmisskeyCoreChoiceCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChoiceCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmisskeyKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KmisskeyKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmisskeyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmisskeyKotlinx_serialization_coreSerializersModule : KmisskeyBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KmisskeyKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmisskeyKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KmisskeyKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KmisskeyKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmisskeyKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmisskeyKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmisskeyKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmisskeyKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmisskeyKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmisskeyKotlinx_serialization_coreSerialKind : KmisskeyBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmisskeyKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KmisskeyKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmisskeyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmisskeyKotlinNothing : KmisskeyBase
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmisskeyKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KmisskeyKotlinKClass>)kClass provider:(id<KmisskeyKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KmisskeyKotlinx_serialization_coreKSerializer>> *typeArgumentsSerializers))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KmisskeyKotlinKClass>)kClass serializer:(id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<KmisskeyKotlinKClass>)baseClass actualClass:(id<KmisskeyKotlinKClass>)actualClass actualSerializer:(id<KmisskeyKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<KmisskeyKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<KmisskeyKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<KmisskeyKotlinKClass>)baseClass defaultSerializerProvider:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id value))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmisskeyKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmisskeyKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KmisskeyKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KmisskeyKotlinKClass <KmisskeyKotlinKDeclarationContainer, KmisskeyKotlinKAnnotatedElement, KmisskeyKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
