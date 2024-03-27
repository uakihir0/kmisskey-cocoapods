#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmisskeyCoreUser, KmisskeyCoreResponse<T>, KmisskeyCoreIRequest, KmisskeyCoreIFavoritesResponse, KmisskeyKotlinArray<T>, KmisskeyCoreIFavoritesRequest, KmisskeyCoreINotificationsResponse, KmisskeyCoreINotificationsRequest, KmisskeyCoreIUpdateRequest, KmisskeyCoreIPinRequest, KmisskeyCoreIUnpinRequest, KmisskeyCoreAnnouncementsResponse, KmisskeyCoreAnnouncementsRequest, KmisskeyCoreEmptyResponse, KmisskeyCoreReadAnnouncementRequest, KmisskeyCoreAntenna, KmisskeyCoreAntennasListRequest, KmisskeyCoreNote, KmisskeyCoreAntennasNotesRequest, KmisskeyCoreApShowResponse, KmisskeyCoreApShowRequest, KmisskeyCoreCreateAppResponse, KmisskeyCoreCreateAppRequest, KmisskeyCoreGetMiAuthUriRequest, KmisskeyCoreGenerateAuthSessionResponse, KmisskeyCoreGenerateAuthSessionRequest, KmisskeyCoreUserKeyAuthSessionResponse, KmisskeyCoreUserKeyAuthSessionRequest, KmisskeyCoreBlocksCreateRequest, KmisskeyCoreBlocksDeleteRequest, KmisskeyCoreBlocksListResponse, KmisskeyCoreBlocksListRequest, KmisskeyCoreChannelsFollowedResponse, KmisskeyCoreChannelsFollowedRequest, KmisskeyCoreChannelsMyFavoritesResponse, KmisskeyCoreChannelsMyFavoritesRequest, KmisskeyCoreChannelsOwnedResponse, KmisskeyCoreChannelsOwnedRequest, KmisskeyCoreChannelsShowResponse, KmisskeyCoreChannelsShowRequest, KmisskeyCoreChannelsTimelineRequest, KmisskeyCoreClipsAddNoteRequest, KmisskeyCoreClip, KmisskeyCoreClipsCreateRequest, KmisskeyCoreClipsDeleteRequest, KmisskeyCoreClipsListRequest, KmisskeyCoreClipsNotesRequest, KmisskeyCoreClipsRemoveNoteRequest, KmisskeyCoreClipsShowRequest, KmisskeyCoreClipsUpdateRequest, KmisskeyCoreFavoritesCreateRequest, KmisskeyCoreFavoritesDeleteRequest, KmisskeyCoreFederationInstanceResponse, KmisskeyCoreShowInstanceRequest, KmisskeyCoreFilesCreateResponse, KmisskeyCoreFilesCreateRequest, KmisskeyCoreFollowingRequestsAcceptRequest, KmisskeyCoreFollowingCreateRequest, KmisskeyCoreFollowingDeleteRequest, KmisskeyCoreFollowingRequestsRejectRequest, KmisskeyCoreFollowingRequestsListResponse, KmisskeyCoreFollowingRequestsListRequest, KmisskeyCoreGalleryPost, KmisskeyCoreCreateGalleryPostRequest, KmisskeyCoreDeleteGalleryPostRequest, KmisskeyCoreLikeGalleryPostRequest, KmisskeyCoreListGalleryPostsResponse, KmisskeyCoreIListGalleryPostsRequest, KmisskeyCoreListGalleryPostsRequest, KmisskeyCoreShowGalleryPostRequest, KmisskeyCoreUnlikeGalleryPostRequest, KmisskeyCoreUpdateGalleryPostRequest, KmisskeyCoreListUserGalleryPostsRequest, KmisskeyCoreHashtagsTrendResponse, KmisskeyCoreHashtagsTrendRequest, KmisskeyCoreNoteList, KmisskeyCoreUsersListsCreateRequest, KmisskeyCoreUsersListsDeleteRequest, KmisskeyCoreUsersListsListResponse, KmisskeyCoreUsersListsListRequest, KmisskeyCoreUsersListsPullRequest, KmisskeyCoreUsersListsPushRequest, KmisskeyCoreUsersListsShowResponse, KmisskeyCoreUsersListsShowRequest, KmisskeyCoreUsersListsUpdateRequest, KmisskeyCoreMessagingHistoryResponse, KmisskeyCoreMessagingHistoryRequest, KmisskeyCoreMessagingMessagesResponse, KmisskeyCoreMessagingMessagesRequest, KmisskeyCoreMessagingMessagesCreateRequest, KmisskeyCoreMessagingMessagesDeleteRequest, KmisskeyCoreEmojisResponse, KmisskeyCoreEmojisRequest, KmisskeyCoreGetOnlineUsersCountResponse, KmisskeyCoreMetaResponse, KmisskeyCoreMetaRequest, KmisskeyCoreMutesCreateRequest, KmisskeyCoreMutesDeleteRequest, KmisskeyCoreMutesListResponse, KmisskeyCoreMutesListRequest, KmisskeyCoreNotesChildrenResponse, KmisskeyCoreNotesChildrenRequest, KmisskeyCoreNotesConversationResponse, KmisskeyCoreNotesConversationRequest, KmisskeyCoreNotesCreateResponse, KmisskeyCoreNotesCreateRequest, KmisskeyCoreNotesDeleteRequest, KmisskeyCoreNotesFeaturedResponse, KmisskeyCoreNotesFeaturedRequest, KmisskeyCoreNotesGlobalTimelineResponse, KmisskeyCoreNotesGlobalTimelineRequest, KmisskeyCoreNotesHybridTimelineResponse, KmisskeyCoreNotesHybridTimelineRequest, KmisskeyCoreNotesLocalTimelineResponse, KmisskeyCoreNotesLocalTimelineRequest, KmisskeyCoreNotesMentionsResponse, KmisskeyCoreNotesMentionsRequest, KmisskeyCoreNotesResponse, KmisskeyCoreNotesRequest, KmisskeyCoreNotesReactionsResponse, KmisskeyCoreNotesReactionsRequest, KmisskeyCoreNotesRenotesResponse, KmisskeyCoreNotesRenotesRequest, KmisskeyCoreNotesRepliesResponse, KmisskeyCoreNotesRepliesRequest, KmisskeyCoreNotesSearchResponse, KmisskeyCoreNotesSearchRequest, KmisskeyCoreNotesSearchByTagRequest, KmisskeyCoreNotesShowResponse, KmisskeyCoreNotesShowRequest, KmisskeyCoreNotesTimelineResponse, KmisskeyCoreNotesTimelineRequest, KmisskeyCoreNoteUnrenoteRequest, KmisskeyCoreNotesUserListTimelineResponse, KmisskeyCoreNotesUserListTimelineRequest, KmisskeyCoreUsersNotesResponse, KmisskeyCoreUsersNotesRequest, KmisskeyCoreServiceWorkerRegisterResponse, KmisskeyCoreServiceWorkerRegisterRequest, KmisskeyCorePollsVoteRequest, KmisskeyCoreReactionsCreateRequest, KmisskeyCoreReactionsDeleteRequest, KmisskeyCoreUsersFollowersResponse, KmisskeyCoreUsersFollowersRequest, KmisskeyCoreUsersFollowingsResponse, KmisskeyCoreUsersFollowingsRequest, KmisskeyCoreUsersReactionsResponse, KmisskeyCoreUsersReactionsRequest, KmisskeyCoreUsersRecommendationRequest, KmisskeyCoreUsersRelationResponse, KmisskeyCoreUsersRelationRequest, KmisskeyCoreUsersSearchRequest, KmisskeyCoreUsersSearchByUsernameAndHostRequest, KmisskeyCoreUsersShowMultipleRequest, KmisskeyCoreUsersShowSingleRequest, KmisskeyCoreCreateWebhooksResponse, KmisskeyCoreCreateWebhooksRequest, KmisskeyCoreDeleteWebhooksResponse, KmisskeyCoreDeleteWebhooksRequest, KmisskeyCoreShowWebhooksResponse, KmisskeyCoreListWebhooksRequest, KmisskeyCoreShowWebhooksRequest, KmisskeyCoreUpdateWebhooksResponse, KmisskeyCoreUpdateWebhooksRequest, KmisskeyCoreUserCompanion, KmisskeyCoreMeDetailed, KmisskeyCoreUserDetailedNotMe, KmisskeyCoreUserLite, KmisskeyCoreColor, KmisskeyCoreAvatarDecoration, KmisskeyCoreBadgeRole, KmisskeyCoreEmojis, KmisskeyCoreInstance, KmisskeyCoreUserPolicies, KmisskeyCoreRole, KmisskeyCoreRateLimit, KmisskeyCoreTokenRequestCompanion, KmisskeyCoreTokenRequest, KmisskeyCoreIRequestCompanion, KmisskeyCoreIFavoritesResponseCompanion, KmisskeyCoreIFavoritesRequestCompanion, KmisskeyCoreNotificationCompanion, KmisskeyCoreNotification, KmisskeyCoreINotificationsResponseCompanion, KmisskeyCoreINotificationsRequestCompanion, KmisskeyCoreIUpdateRequestCompanion, KmisskeyCoreField, KmisskeyCoreIPinRequestCompanion, KmisskeyCoreIUnpinRequestCompanion, KmisskeyCoreAnnouncementsCompanion, KmisskeyCoreAnnouncements, KmisskeyCoreAnnouncementsResponseCompanion, KmisskeyCoreAnnouncementsRequestCompanion, KmisskeyCoreAntennaCompanion, KmisskeyCoreNoteCompanion, KmisskeyCoreChannel, KmisskeyCoreFile, KmisskeyCorePoll, KmisskeyCoreAntennasNotesRequestCompanion, KmisskeyCoreApShowResponseCompanion, KmisskeyCoreApShowRequestCompanion, KmisskeyCoreCreateAppResponseCompanion, KmisskeyCoreCreateAppRequestCompanion, KmisskeyCoreGetMiAuthUriRequestCompanion, KmisskeyCoreGenerateAuthSessionResponseCompanion, KmisskeyCoreGenerateAuthSessionRequestCompanion, KmisskeyCoreUserKeyAuthSessionResponseCompanion, KmisskeyCoreUserKeyAuthSessionRequestCompanion, KmisskeyCoreBlocksCreateRequestCompanion, KmisskeyCoreBlocksDeleteRequestCompanion, KmisskeyCoreBlockCompanion, KmisskeyCoreBlock, KmisskeyCoreBlocksListResponseCompanion, KmisskeyCoreBlocksListRequestCompanion, KmisskeyCoreChannelCompanion, KmisskeyCoreChannelsFollowedResponseCompanion, KmisskeyCoreChannelsFollowedRequestCompanion, KmisskeyCoreChannelsMyFavoritesResponseCompanion, KmisskeyCoreChannelsMyFavoritesRequestCompanion, KmisskeyCoreChannelsOwnedResponseCompanion, KmisskeyCoreChannelsOwnedRequestCompanion, KmisskeyCoreChannelsShowResponseCompanion, KmisskeyCoreChannelsShowRequestCompanion, KmisskeyCoreChannelsTimelineRequestCompanion, KmisskeyCoreClipsAddNoteRequestCompanion, KmisskeyCoreClipCompanion, KmisskeyCoreClipsCreateRequestCompanion, KmisskeyCoreClipsDeleteRequestCompanion, KmisskeyCoreClipsListRequestCompanion, KmisskeyCoreClipsNotesRequestCompanion, KmisskeyCoreClipsRemoveNoteRequestCompanion, KmisskeyCoreClipsShowRequestCompanion, KmisskeyCoreClipsUpdateRequestCompanion, KmisskeyCoreFavoritesCreateRequestCompanion, KmisskeyCoreFavoritesDeleteRequestCompanion, KmisskeyCoreFederationInstanceResponseCompanion, KmisskeyCoreShowInstanceRequestCompanion, KmisskeyCoreFileCompanion, KmisskeyCoreFolder, KmisskeyCoreFileProperties, KmisskeyCoreFilesCreateResponseCompanion, KmisskeyCoreFilesCreateRequestCompanion, KmisskeyKotlinByteArray, KmisskeyCoreFollowingRequestsAcceptRequestCompanion, KmisskeyCoreFollowingCreateRequestCompanion, KmisskeyCoreFollowingDeleteRequestCompanion, KmisskeyCoreFollowingRequestsRejectRequestCompanion, KmisskeyCoreFollowingRequestsListResponseCompanion, KmisskeyCoreFollowingRequestsListRequestCompanion, KmisskeyCoreGalleryPostCompanion, KmisskeyCoreCreateGalleryPostRequestCompanion, KmisskeyCoreDeleteGalleryPostRequestCompanion, KmisskeyCoreLikeGalleryPostRequestCompanion, KmisskeyCoreListGalleryPostsResponseCompanion, KmisskeyCoreIListGalleryPostsRequestCompanion, KmisskeyCoreListGalleryPostsRequestCompanion, KmisskeyCoreShowGalleryPostRequestCompanion, KmisskeyCoreUnlikeGalleryPostRequestCompanion, KmisskeyCoreUpdateGalleryPostRequestCompanion, KmisskeyCoreListUserGalleryPostsRequestCompanion, KmisskeyCoreTrendCompanion, KmisskeyCoreTrend, KmisskeyCoreHashtagsTrendResponseCompanion, KmisskeyCoreHashtagsTrendRequestCompanion, KmisskeyCoreNoteListCompanion, KmisskeyCoreUsersListsCreateRequestCompanion, KmisskeyCoreUsersListsDeleteRequestCompanion, KmisskeyCoreUsersListsListResponseCompanion, KmisskeyCoreUsersListsListRequestCompanion, KmisskeyCoreUsersListsPullRequestCompanion, KmisskeyCoreUsersListsPushRequestCompanion, KmisskeyCoreUsersListsShowResponseCompanion, KmisskeyCoreUsersListsShowRequestCompanion, KmisskeyCoreUsersListsUpdateRequestCompanion, KmisskeyCoreMessageCompanion, KmisskeyCoreGroup, KmisskeyCoreMessage, KmisskeyCoreMessagingHistoryResponseCompanion, KmisskeyCoreMessagingHistoryRequestCompanion, KmisskeyCoreMessagingMessagesResponseCompanion, KmisskeyCoreMessagingMessagesRequestCompanion, KmisskeyCoreMessagingMessagesCreateRequestCompanion, KmisskeyCoreMessagingMessagesDeleteRequestCompanion, KmisskeyCoreEmojisResponseCompanion, KmisskeyCoreEmoji, KmisskeyCoreEmojisRequestCompanion, KmisskeyCoreGetOnlineUsersCountResponseCompanion, KmisskeyCoreMetaCompanion, KmisskeyCoreMetaFeatures, KmisskeyCorePolicies, KmisskeyCoreMeta, KmisskeyCoreMetaResponseCompanion, KmisskeyCoreMetaRequestCompanion, KmisskeyCoreMutesCreateRequestCompanion, KmisskeyCoreMutesDeleteRequestCompanion, KmisskeyCoreMuteCompanion, KmisskeyCoreMute, KmisskeyCoreMutesListResponseCompanion, KmisskeyCoreMutesListRequestCompanion, KmisskeyCoreNotesChildrenResponseCompanion, KmisskeyCoreNotesChildrenRequestCompanion, KmisskeyCoreNotesConversationResponseCompanion, KmisskeyCoreNotesConversationRequestCompanion, KmisskeyCoreNotesCreateResponseCompanion, KmisskeyCoreNotesCreateRequestCompanion, KmisskeyCorePollRequest, KmisskeyCoreNotesDeleteRequestCompanion, KmisskeyCoreNotesFeaturedResponseCompanion, KmisskeyCoreNotesFeaturedRequestCompanion, KmisskeyCoreNotesGlobalTimelineResponseCompanion, KmisskeyCoreNotesGlobalTimelineRequestCompanion, KmisskeyCoreNotesHybridTimelineResponseCompanion, KmisskeyCoreNotesHybridTimelineRequestCompanion, KmisskeyCoreNotesLocalTimelineResponseCompanion, KmisskeyCoreNotesLocalTimelineRequestCompanion, KmisskeyCoreNotesMentionsResponseCompanion, KmisskeyCoreNotesMentionsRequestCompanion, KmisskeyCoreNotesResponseCompanion, KmisskeyCoreNotesRequestCompanion, KmisskeyCoreNotesReactionsResponseCompanion, KmisskeyCoreNotesReactionsRequestCompanion, KmisskeyCoreNotesRenotesResponseCompanion, KmisskeyCoreNotesRenotesRequestCompanion, KmisskeyCoreNotesRepliesResponseCompanion, KmisskeyCoreNotesRepliesRequestCompanion, KmisskeyCoreNotesSearchResponseCompanion, KmisskeyCoreNotesSearchRequestCompanion, KmisskeyCoreNotesSearchByTagRequestCompanion, KmisskeyCoreNotesShowResponseCompanion, KmisskeyCoreNotesShowRequestCompanion, KmisskeyCoreNotesTimelineResponseCompanion, KmisskeyCoreNotesTimelineRequestCompanion, KmisskeyCoreNoteUnrenoteRequestCompanion, KmisskeyCoreNotesUserListTimelineResponseCompanion, KmisskeyCoreNotesUserListTimelineRequestCompanion, KmisskeyCoreUsersNotesResponseCompanion, KmisskeyCoreUsersNotesRequestCompanion, KmisskeyCoreServiceWorkerRegisterResponseCompanion, KmisskeyCoreServiceWorkerRegisterRequestCompanion, KmisskeyCorePollsVoteRequestCompanion, KmisskeyCoreReactionsCreateRequestCompanion, KmisskeyCoreReactionsDeleteRequestCompanion, KmisskeyCoreFollowCompanion, KmisskeyCoreFollow, KmisskeyCoreUsersFollowersResponseCompanion, KmisskeyCoreUsersFollowersRequestCompanion, KmisskeyCoreUsersFollowingsResponseCompanion, KmisskeyCoreUsersFollowingsRequestCompanion, KmisskeyCoreUsersReactionsResponseCompanion, KmisskeyCoreUsersReactionsRequestCompanion, KmisskeyCoreUsersRecommendationRequestCompanion, KmisskeyCoreRelationCompanion, KmisskeyCoreRelation, KmisskeyCoreUsersRelationResponseCompanion, KmisskeyCoreUsersRelationRequestCompanion, KmisskeyCoreUsersSearchRequestCompanion, KmisskeyCoreUsersSearchByUsernameAndHostRequestCompanion, KmisskeyCoreUsersShowMultipleRequestCompanion, KmisskeyCoreUsersShowSingleRequestCompanion, KmisskeyCoreWebhookCompanion, KmisskeyCoreWebhook, KmisskeyCoreCreateWebhooksResponseCompanion, KmisskeyCoreCreateWebhooksRequestCompanion, KmisskeyCoreDeleteWebhooksResponseCompanion, KmisskeyCoreDeleteWebhooksRequestCompanion, KmisskeyCoreShowWebhooksResponseCompanion, KmisskeyCoreListWebhooksRequestCompanion, KmisskeyCoreShowWebhooksRequestCompanion, KmisskeyCoreUpdateWebhooksResponseCompanion, KmisskeyCoreUpdateWebhooksRequestCompanion, KmisskeyCoreUserLiteCompanion, KmisskeyCoreUserDetailedNotMeCompanion, KmisskeyCorePage, KmisskeyCoreMeDetailedCompanion, KmisskeyCoreAchievement, KmisskeyCoreSecurityKey, KmisskeyCoreColorCompanion, KmisskeyCoreAvatarDecorationCompanion, KmisskeyCoreBadgeRoleCompanion, KmisskeyCoreEmojisCompanion, KmisskeyCoreInstanceCompanion, KmisskeyCoreUserPoliciesCompanion, KmisskeyCoreRoleCompanion, KmisskeyCoreRateLimitCompanion, KmisskeyCoreFieldCompanion, KmisskeyCorePollCompanion, KmisskeyCoreChoice, KmisskeyCoreFolderCompanion, KmisskeyCoreFilePropertiesCompanion, KmisskeyKotlinByteIterator, KmisskeyCoreGroupCompanion, KmisskeyCoreEmojiCompanion, KmisskeyCoreMetaFeaturesCompanion, KmisskeyCorePoliciesCompanion, KmisskeyCorePollRequestCompanion, KmisskeyCorePageCompanion, KmisskeyCoreAchievementCompanion, KmisskeyCoreSecurityKeyCompanion, KmisskeyCoreChoiceCompanion, KmisskeyKotlinx_serialization_coreSerializersModule, KmisskeyKotlinx_serialization_coreSerialKind, KmisskeyKotlinNothing;

@protocol KmisskeyCoreMisskey, KmisskeyCoreAccountsResource, KmisskeyCoreAnnouncementsResource, KmisskeyCoreAntennasResource, KmisskeyCoreApResource, KmisskeyCoreAppResource, KmisskeyCoreAuthResource, KmisskeyCoreBlocksResource, KmisskeyCoreChannelsResource, KmisskeyCoreClipsResource, KmisskeyCoreFavoritesResource, KmisskeyCoreFederationResource, KmisskeyCoreFilesResource, KmisskeyCoreFollowingResource, KmisskeyCoreGalleriesResource, KmisskeyCoreHashtagsResource, KmisskeyCoreListsResource, KmisskeyCoreMessagesResource, KmisskeyCoreMetaResource, KmisskeyCoreMutesResource, KmisskeyCoreNotesResource, KmisskeyCoreOtherResource, KmisskeyCorePollsResource, KmisskeyCoreReactionsResource, KmisskeyCoreUsersResource, KmisskeyCoreWebhooksResource, KmisskeyKotlinIterator, KmisskeyKotlinx_serialization_coreKSerializer, KmisskeyKotlinx_serialization_coreEncoder, KmisskeyKotlinx_serialization_coreSerialDescriptor, KmisskeyKotlinx_serialization_coreSerializationStrategy, KmisskeyKotlinx_serialization_coreDecoder, KmisskeyKotlinx_serialization_coreDeserializationStrategy, KmisskeyKotlinx_serialization_coreCompositeEncoder, KmisskeyKotlinAnnotation, KmisskeyKotlinx_serialization_coreCompositeDecoder, KmisskeyKotlinx_serialization_coreSerializersModuleCollector, KmisskeyKotlinKClass, KmisskeyKotlinKDeclarationContainer, KmisskeyKotlinKAnnotatedElement, KmisskeyKotlinKClassifier;

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
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<KmisskeyCoreMisskey>)instanceUri:(NSString *)uri __attribute__((swift_name("instance(uri:)")));
- (id<KmisskeyCoreMisskey>)instanceUri:(NSString *)uri userAccessToken:(NSString *)userAccessToken __attribute__((swift_name("instance(uri:userAccessToken:)")));
- (id<KmisskeyCoreMisskey>)instanceUri:(NSString *)uri clientSecret:(NSString *)clientSecret userAccessToken:(NSString *)userAccessToken __attribute__((swift_name("instance(uri:clientSecret:userAccessToken:)")));
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
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) NSString * _Nullable i __attribute__((swift_name("i")));
@end

__attribute__((swift_name("CoreAccountsResource")))
@protocol KmisskeyCoreAccountsResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)iRequest:(KmisskeyCoreIRequest *)request __attribute__((swift_name("i(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreIFavoritesResponse *> *> *)iFavoritesRequest:(KmisskeyCoreIFavoritesRequest *)request __attribute__((swift_name("iFavorites(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreINotificationsResponse *> *> *)iNotificationsRequest:(KmisskeyCoreINotificationsRequest *)request __attribute__((swift_name("iNotifications(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)iUpdateRequest:(KmisskeyCoreIUpdateRequest *)request __attribute__((swift_name("iUpdate(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)pinNoteRequest:(KmisskeyCoreIPinRequest *)request __attribute__((swift_name("pinNote(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)unpinNoteRequest:(KmisskeyCoreIUnpinRequest *)request __attribute__((swift_name("unpinNote(request:)")));
@end

__attribute__((swift_name("CoreAnnouncementsResource")))
@protocol KmisskeyCoreAnnouncementsResource
@required
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreAnnouncementsResponse *> *> *)announcementsRequest:(KmisskeyCoreAnnouncementsRequest *)request __attribute__((swift_name("announcements(request:)")));
- (KmisskeyCoreEmptyResponse *)readAnnouncementRequest:(KmisskeyCoreReadAnnouncementRequest *)request __attribute__((swift_name("readAnnouncement(request:)")));
@end

__attribute__((swift_name("CoreAntennasResource")))
@protocol KmisskeyCoreAntennasResource
@required
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreAntenna *> *> *)listRequest:(KmisskeyCoreAntennasListRequest *)request __attribute__((swift_name("list(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)notesRequest:(KmisskeyCoreAntennasNotesRequest *)request __attribute__((swift_name("notes(request:)")));
@end

__attribute__((swift_name("CoreApResource")))
@protocol KmisskeyCoreApResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreApShowResponse *> *)showRequest:(KmisskeyCoreApShowRequest *)request __attribute__((swift_name("show(request:)")));
@end

__attribute__((swift_name("CoreAppResource")))
@protocol KmisskeyCoreAppResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreCreateAppResponse *> *)createAppRequest:(KmisskeyCoreCreateAppRequest *)request __attribute__((swift_name("createApp(request:)")));
@end

__attribute__((swift_name("CoreAuthResource")))
@protocol KmisskeyCoreAuthResource
@required
- (KmisskeyCoreResponse<NSString *> *)getMiAuthUriRequest:(KmisskeyCoreGetMiAuthUriRequest *)request __attribute__((swift_name("getMiAuthUri(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGenerateAuthSessionResponse *> *)sessionGenerateRequest:(KmisskeyCoreGenerateAuthSessionRequest *)request __attribute__((swift_name("sessionGenerate(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUserKeyAuthSessionResponse *> *)sessionUserKeyRequest:(KmisskeyCoreUserKeyAuthSessionRequest *)request __attribute__((swift_name("sessionUserKey(request:)")));
@end

__attribute__((swift_name("CoreBlocksResource")))
@protocol KmisskeyCoreBlocksResource
@required
- (KmisskeyCoreEmptyResponse *)createRequest:(KmisskeyCoreBlocksCreateRequest *)request __attribute__((swift_name("create(request:)")));
- (KmisskeyCoreEmptyResponse *)deleteRequest:(KmisskeyCoreBlocksDeleteRequest *)request __attribute__((swift_name("delete(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreBlocksListResponse *> *> *)listRequest_:(KmisskeyCoreBlocksListRequest *)request __attribute__((swift_name("list(request_:)")));
@end

__attribute__((swift_name("CoreChannelsResource")))
@protocol KmisskeyCoreChannelsResource
@required
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannelsFollowedResponse *> *> *)followedRequest:(KmisskeyCoreChannelsFollowedRequest *)request __attribute__((swift_name("followed(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannelsMyFavoritesResponse *> *> *)myFavoritesRequest:(KmisskeyCoreChannelsMyFavoritesRequest *)request __attribute__((swift_name("myFavorites(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreChannelsOwnedResponse *> *> *)ownedRequest:(KmisskeyCoreChannelsOwnedRequest *)request __attribute__((swift_name("owned(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreChannelsShowResponse *> *)showRequest_:(KmisskeyCoreChannelsShowRequest *)request __attribute__((swift_name("show(request_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)timelineRequest:(KmisskeyCoreChannelsTimelineRequest *)request __attribute__((swift_name("timeline(request:)")));
@end

__attribute__((swift_name("CoreClipsResource")))
@protocol KmisskeyCoreClipsResource
@required
- (KmisskeyCoreEmptyResponse *)addNoteRequest:(KmisskeyCoreClipsAddNoteRequest *)request __attribute__((swift_name("addNote(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreClip *> *)createRequest_:(KmisskeyCoreClipsCreateRequest *)request __attribute__((swift_name("create(request_:)")));
- (KmisskeyCoreEmptyResponse *)deleteClipRequest:(KmisskeyCoreClipsDeleteRequest *)request __attribute__((swift_name("deleteClip(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreClip *> *> *)listRequest__:(KmisskeyCoreClipsListRequest *)request __attribute__((swift_name("list(request__:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)notesRequest_:(KmisskeyCoreClipsNotesRequest *)request __attribute__((swift_name("notes(request_:)")));
- (KmisskeyCoreEmptyResponse *)removeNoteRequest:(KmisskeyCoreClipsRemoveNoteRequest *)request __attribute__((swift_name("removeNote(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreClip *> *)showRequest__:(KmisskeyCoreClipsShowRequest *)request __attribute__((swift_name("show(request__:)")));
- (KmisskeyCoreResponse<KmisskeyCoreClip *> *)updateRequest:(KmisskeyCoreClipsUpdateRequest *)request __attribute__((swift_name("update(request:)")));
@end

__attribute__((swift_name("CoreFavoritesResource")))
@protocol KmisskeyCoreFavoritesResource
@required
- (KmisskeyCoreEmptyResponse *)createRequest__:(KmisskeyCoreFavoritesCreateRequest *)request __attribute__((swift_name("create(request__:)")));
- (KmisskeyCoreEmptyResponse *)deleteRequest_:(KmisskeyCoreFavoritesDeleteRequest *)request __attribute__((swift_name("delete(request_:)")));
@end

__attribute__((swift_name("CoreFederationResource")))
@protocol KmisskeyCoreFederationResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreFederationInstanceResponse *> *)showInstanceRequest:(KmisskeyCoreShowInstanceRequest *)request __attribute__((swift_name("showInstance(request:)")));
@end

__attribute__((swift_name("CoreFilesResource")))
@protocol KmisskeyCoreFilesResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreFilesCreateResponse *> *)createRequest___:(KmisskeyCoreFilesCreateRequest *)request __attribute__((swift_name("create(request___:)")));
@end

__attribute__((swift_name("CoreFollowingResource")))
@protocol KmisskeyCoreFollowingResource
@required
- (KmisskeyCoreEmptyResponse *)acceptRequestRequest:(KmisskeyCoreFollowingRequestsAcceptRequest *)request __attribute__((swift_name("acceptRequest(request:)")));
- (KmisskeyCoreEmptyResponse *)createRequest____:(KmisskeyCoreFollowingCreateRequest *)request __attribute__((swift_name("create(request____:)")));
- (KmisskeyCoreEmptyResponse *)deleteRequest__:(KmisskeyCoreFollowingDeleteRequest *)request __attribute__((swift_name("delete(request__:)")));
- (KmisskeyCoreEmptyResponse *)rejectRequestRequest:(KmisskeyCoreFollowingRequestsRejectRequest *)request __attribute__((swift_name("rejectRequest(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreFollowingRequestsListResponse *> *> *)requestsListRequest:(KmisskeyCoreFollowingRequestsListRequest *)request __attribute__((swift_name("requestsList(request:)")));
@end

__attribute__((swift_name("CoreGalleriesResource")))
@protocol KmisskeyCoreGalleriesResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> *)createRequest_____:(KmisskeyCoreCreateGalleryPostRequest *)request __attribute__((swift_name("create(request_____:)")));
- (KmisskeyCoreEmptyResponse *)deleteRequest___:(KmisskeyCoreDeleteGalleryPostRequest *)request __attribute__((swift_name("delete(request___:)")));
- (KmisskeyCoreEmptyResponse *)likeRequest:(KmisskeyCoreLikeGalleryPostRequest *)request __attribute__((swift_name("like(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreListGalleryPostsResponse *> *> *)myPostsRequest:(KmisskeyCoreIListGalleryPostsRequest *)request __attribute__((swift_name("myPosts(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreListGalleryPostsResponse *> *> *)postsRequest:(KmisskeyCoreListGalleryPostsRequest *)request __attribute__((swift_name("posts(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> *)showRequest___:(KmisskeyCoreShowGalleryPostRequest *)request __attribute__((swift_name("show(request___:)")));
- (KmisskeyCoreEmptyResponse *)unlikeRequest:(KmisskeyCoreUnlikeGalleryPostRequest *)request __attribute__((swift_name("unlike(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGalleryPost *> *)updateRequest_:(KmisskeyCoreUpdateGalleryPostRequest *)request __attribute__((swift_name("update(request_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreListGalleryPostsResponse *> *> *)usersPostsRequest:(KmisskeyCoreListUserGalleryPostsRequest *)request __attribute__((swift_name("usersPosts(request:)")));
@end

__attribute__((swift_name("CoreHashtagsResource")))
@protocol KmisskeyCoreHashtagsResource
@required
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreHashtagsTrendResponse *> *> *)trendRequest:(KmisskeyCoreHashtagsTrendRequest *)request __attribute__((swift_name("trend(request:)")));
@end

__attribute__((swift_name("CoreListsResource")))
@protocol KmisskeyCoreListsResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreNoteList *> *)createRequest______:(KmisskeyCoreUsersListsCreateRequest *)request __attribute__((swift_name("create(request______:)")));
- (KmisskeyCoreEmptyResponse *)deleteRequest____:(KmisskeyCoreUsersListsDeleteRequest *)request __attribute__((swift_name("delete(request____:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUsersListsListResponse *> *> *)listRequest___:(KmisskeyCoreUsersListsListRequest *)request __attribute__((swift_name("list(request___:)")));
- (KmisskeyCoreEmptyResponse *)pullRequest:(KmisskeyCoreUsersListsPullRequest *)request __attribute__((swift_name("pull(request:)")));
- (KmisskeyCoreEmptyResponse *)pushRequest:(KmisskeyCoreUsersListsPushRequest *)request __attribute__((swift_name("push(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUsersListsShowResponse *> *)showRequest____:(KmisskeyCoreUsersListsShowRequest *)request __attribute__((swift_name("show(request____:)")));
- (KmisskeyCoreResponse<KmisskeyCoreNoteList *> *)updateRequest__:(KmisskeyCoreUsersListsUpdateRequest *)request __attribute__((swift_name("update(request__:)")));
@end

__attribute__((swift_name("CoreMessagesResource")))
@protocol KmisskeyCoreMessagesResource
@required
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMessagingHistoryResponse *> *> *)historyRequest:(KmisskeyCoreMessagingHistoryRequest *)request __attribute__((swift_name("history(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMessagingMessagesResponse *> *> *)messagesRequest:(KmisskeyCoreMessagingMessagesRequest *)request __attribute__((swift_name("messages(request:)")));
- (KmisskeyCoreEmptyResponse *)messagesCreateRequest:(KmisskeyCoreMessagingMessagesCreateRequest *)request __attribute__((swift_name("messagesCreate(request:)")));
- (KmisskeyCoreEmptyResponse *)messagesDeleteRequest:(KmisskeyCoreMessagingMessagesDeleteRequest *)request __attribute__((swift_name("messagesDelete(request:)")));
@end

__attribute__((swift_name("CoreMetaResource")))
@protocol KmisskeyCoreMetaResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreEmojisResponse *> *)emojisRequest:(KmisskeyCoreEmojisRequest *)request __attribute__((swift_name("emojis(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreGetOnlineUsersCountResponse *> *)getOnlineUsersCount __attribute__((swift_name("getOnlineUsersCount()")));
- (KmisskeyCoreResponse<KmisskeyCoreMetaResponse *> *)metaRequest:(KmisskeyCoreMetaRequest *)request __attribute__((swift_name("meta(request:)")));
@end

__attribute__((swift_name("CoreMutesResource")))
@protocol KmisskeyCoreMutesResource
@required
- (KmisskeyCoreEmptyResponse *)createRequest_______:(KmisskeyCoreMutesCreateRequest *)request __attribute__((swift_name("create(request_______:)")));
- (KmisskeyCoreEmptyResponse *)deleteRequest_____:(KmisskeyCoreMutesDeleteRequest *)request __attribute__((swift_name("delete(request_____:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreMutesListResponse *> *> *)listRequest____:(KmisskeyCoreMutesListRequest *)request __attribute__((swift_name("list(request____:)")));
@end

__attribute__((swift_name("CoreNotesResource")))
@protocol KmisskeyCoreNotesResource
@required
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesChildrenResponse *> *> *)childrenRequest:(KmisskeyCoreNotesChildrenRequest *)request __attribute__((swift_name("children(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesConversationResponse *> *> *)conversationRequest:(KmisskeyCoreNotesConversationRequest *)request __attribute__((swift_name("conversation(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreNotesCreateResponse *> *)createRequest________:(KmisskeyCoreNotesCreateRequest *)request __attribute__((swift_name("create(request________:)")));
- (KmisskeyCoreEmptyResponse *)deleteRequest______:(KmisskeyCoreNotesDeleteRequest *)request __attribute__((swift_name("delete(request______:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesFeaturedResponse *> *> *)featuredRequest:(KmisskeyCoreNotesFeaturedRequest *)request __attribute__((swift_name("featured(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesGlobalTimelineResponse *> *> *)globalTimelineRequest:(KmisskeyCoreNotesGlobalTimelineRequest *)request __attribute__((swift_name("globalTimeline(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesHybridTimelineResponse *> *> *)hybridTimelineRequest:(KmisskeyCoreNotesHybridTimelineRequest *)request __attribute__((swift_name("hybridTimeline(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesLocalTimelineResponse *> *> *)localTimelineRequest:(KmisskeyCoreNotesLocalTimelineRequest *)request __attribute__((swift_name("localTimeline(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesMentionsResponse *> *> *)mentionsRequest:(KmisskeyCoreNotesMentionsRequest *)request __attribute__((swift_name("mentions(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesResponse *> *> *)notesRequest__:(KmisskeyCoreNotesRequest *)request __attribute__((swift_name("notes(request__:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesReactionsResponse *> *> *)reactionsRequest:(KmisskeyCoreNotesReactionsRequest *)request __attribute__((swift_name("reactions(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesRenotesResponse *> *> *)renotesRequest:(KmisskeyCoreNotesRenotesRequest *)request __attribute__((swift_name("renotes(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesRepliesResponse *> *> *)repliesRequest:(KmisskeyCoreNotesRepliesRequest *)request __attribute__((swift_name("replies(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesSearchResponse *> *> *)searchRequest:(KmisskeyCoreNotesSearchRequest *)request __attribute__((swift_name("search(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNote *> *> *)searchByTagRequest:(KmisskeyCoreNotesSearchByTagRequest *)request __attribute__((swift_name("searchByTag(request:)")));
- (KmisskeyCoreResponse<KmisskeyCoreNotesShowResponse *> *)showRequest_____:(KmisskeyCoreNotesShowRequest *)request __attribute__((swift_name("show(request_____:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesTimelineResponse *> *> *)timelineRequest_:(KmisskeyCoreNotesTimelineRequest *)request __attribute__((swift_name("timeline(request_:)")));
- (KmisskeyCoreEmptyResponse *)unrenoteRequest:(KmisskeyCoreNoteUnrenoteRequest *)request __attribute__((swift_name("unrenote(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreNotesUserListTimelineResponse *> *> *)userListTimelineRequest:(KmisskeyCoreNotesUserListTimelineRequest *)request __attribute__((swift_name("userListTimeline(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUsersNotesResponse *> *> *)usersRequest:(KmisskeyCoreUsersNotesRequest *)request __attribute__((swift_name("users(request:)")));
@end

__attribute__((swift_name("CoreOtherResource")))
@protocol KmisskeyCoreOtherResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreServiceWorkerRegisterResponse *> *)serviceWorkerRegisterRequest:(KmisskeyCoreServiceWorkerRegisterRequest *)request __attribute__((swift_name("serviceWorkerRegister(request:)")));
@end

__attribute__((swift_name("CorePollsResource")))
@protocol KmisskeyCorePollsResource
@required
- (KmisskeyCoreEmptyResponse *)pollsVoteRequest:(KmisskeyCorePollsVoteRequest *)request __attribute__((swift_name("pollsVote(request:)")));
@end

__attribute__((swift_name("CoreReactionsResource")))
@protocol KmisskeyCoreReactionsResource
@required
- (KmisskeyCoreEmptyResponse *)createRequest_________:(KmisskeyCoreReactionsCreateRequest *)request __attribute__((swift_name("create(request_________:)")));
- (KmisskeyCoreEmptyResponse *)deleteRequest_______:(KmisskeyCoreReactionsDeleteRequest *)request __attribute__((swift_name("delete(request_______:)")));
@end

__attribute__((swift_name("CoreUsersResource")))
@protocol KmisskeyCoreUsersResource
@required
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUsersFollowersResponse *> *> *)followersRequest:(KmisskeyCoreUsersFollowersRequest *)request __attribute__((swift_name("followers(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUsersFollowingsResponse *> *> *)followingsRequest:(KmisskeyCoreUsersFollowingsRequest *)request __attribute__((swift_name("followings(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUsersReactionsResponse *> *> *)reactionsRequest_:(KmisskeyCoreUsersReactionsRequest *)request __attribute__((swift_name("reactions(request_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)recommendationRequest:(KmisskeyCoreUsersRecommendationRequest *)request __attribute__((swift_name("recommendation(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUsersRelationResponse *> *> *)relationRequest:(KmisskeyCoreUsersRelationRequest *)request __attribute__((swift_name("relation(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)searchRequest_:(KmisskeyCoreUsersSearchRequest *)request __attribute__((swift_name("search(request_:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)searchByUsernameAndHostRequest:(KmisskeyCoreUsersSearchByUsernameAndHostRequest *)request __attribute__((swift_name("searchByUsernameAndHost(request:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreUser *> *> *)showRequest______:(KmisskeyCoreUsersShowMultipleRequest *)request __attribute__((swift_name("show(request______:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUser *> *)showRequest_______:(KmisskeyCoreUsersShowSingleRequest *)request __attribute__((swift_name("show(request_______:)")));
@end

__attribute__((swift_name("CoreWebhooksResource")))
@protocol KmisskeyCoreWebhooksResource
@required
- (KmisskeyCoreResponse<KmisskeyCoreCreateWebhooksResponse *> *)createRequest__________:(KmisskeyCoreCreateWebhooksRequest *)request __attribute__((swift_name("create(request__________:)")));
- (KmisskeyCoreResponse<KmisskeyCoreDeleteWebhooksResponse *> *)deleteRequest________:(KmisskeyCoreDeleteWebhooksRequest *)request __attribute__((swift_name("delete(request________:)")));
- (KmisskeyCoreResponse<KmisskeyKotlinArray<KmisskeyCoreShowWebhooksResponse *> *> *)listRequest_____:(KmisskeyCoreListWebhooksRequest *)request __attribute__((swift_name("list(request_____:)")));
- (KmisskeyCoreResponse<KmisskeyCoreShowWebhooksResponse *> *)showRequest________:(KmisskeyCoreShowWebhooksRequest *)request __attribute__((swift_name("show(request________:)")));
- (KmisskeyCoreResponse<KmisskeyCoreUpdateWebhooksResponse *> *)updateRequest___:(KmisskeyCoreUpdateWebhooksRequest *)request __attribute__((swift_name("update(request___:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=misskey4j/util/json/UserSerializer))
*/
__attribute__((swift_name("CoreUser")))
@interface KmisskeyCoreUser : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUserCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KmisskeyCoreMeDetailed * _Nullable asMeDetailed __attribute__((swift_name("asMeDetailed")));
@property (readonly) KmisskeyCoreUserDetailedNotMe * _Nullable asUserDetailedNotMe __attribute__((swift_name("asUserDetailedNotMe")));
@property (readonly) KmisskeyCoreUserLite * _Nullable asUserLite __attribute__((swift_name("asUserLite")));
@property NSString * _Nullable avatarBlurhash __attribute__((swift_name("avatarBlurhash")));
@property KmisskeyCoreColor * _Nullable avatarColor __attribute__((swift_name("avatarColor")));
@property KmisskeyKotlinArray<KmisskeyCoreAvatarDecoration *> *avatarDecorations __attribute__((swift_name("avatarDecorations")));
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property KmisskeyKotlinArray<KmisskeyCoreBadgeRole *> *badgeRoles __attribute__((swift_name("badgeRoles")));
@property KmisskeyCoreEmojis * _Nullable emojis __attribute__((swift_name("emojis")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString *id __attribute__((swift_name("id")));
@property KmisskeyCoreInstance * _Nullable instance __attribute__((swift_name("instance")));
@property BOOL isBot __attribute__((swift_name("isBot")));
@property BOOL isCat __attribute__((swift_name("isCat")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString *onlineStatus __attribute__((swift_name("onlineStatus")));
@property KmisskeyCoreUserPolicies * _Nullable policies __attribute__((swift_name("policies")));
@property KmisskeyKotlinArray<KmisskeyCoreRole *> *roles __attribute__((swift_name("roles")));
@property NSString *username __attribute__((swift_name("username")));
@end

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
__attribute__((swift_name("CoreTokenRequest")))
@interface KmisskeyCoreTokenRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
@property (class, readonly, getter=companion) KmisskeyCoreIRequestCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("CoreIFavoritesRequest")))
@interface KmisskeyCoreIFavoritesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreIFavoritesRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreNotification")))
@interface KmisskeyCoreNotification : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreINotificationsResponse")))
@interface KmisskeyCoreINotificationsResponse : KmisskeyCoreNotification
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreINotificationsResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreINotificationsRequest")))
@interface KmisskeyCoreINotificationsRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreINotificationsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> * _Nullable excludeTypes __attribute__((swift_name("excludeTypes")));
@property KmisskeyBoolean * _Nullable following __attribute__((swift_name("following")));
@property KmisskeyKotlinArray<NSString *> * _Nullable includeTypes __attribute__((swift_name("includeTypes")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyBoolean * _Nullable markAsRead __attribute__((swift_name("markAsRead")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
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
@property (class, readonly, getter=companion) KmisskeyCoreIUnpinRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreAnnouncements")))
@interface KmisskeyCoreAnnouncements : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreAnnouncementsResponse")))
@interface KmisskeyCoreAnnouncementsResponse : KmisskeyCoreAnnouncements
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreAnnouncementsResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAnnouncementsRequest")))
@interface KmisskeyCoreAnnouncementsRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreAnnouncementsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property KmisskeyBoolean * _Nullable withUnreads __attribute__((swift_name("withUnreads")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmptyResponse")))
@interface KmisskeyCoreEmptyResponse : KmisskeyBase
- (instancetype)initWithLimit:(KmisskeyCoreRateLimit * _Nullable)limit __attribute__((swift_name("init(limit:)"))) __attribute__((objc_designated_initializer));
@property KmisskeyCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReadAnnouncementRequest")))
@interface KmisskeyCoreReadAnnouncementRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithAnnouncementId:(NSString *)announcementId __attribute__((swift_name("init(announcementId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSString *announcementId __attribute__((swift_name("announcementId")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAntennasListRequest")))
@interface KmisskeyCoreAntennasListRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreNote")))
@interface KmisskeyCoreNote : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreAntennasNotesRequest")))
@interface KmisskeyCoreAntennasNotesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreAntennasNotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable antennaId __attribute__((swift_name("antennaId")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApShowResponse")))
@interface KmisskeyCoreApShowResponse : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreApShowResponseCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyCoreNote * _Nullable note __attribute__((swift_name("note")));
@property NSString * _Nullable object __attribute__((swift_name("object")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property KmisskeyCoreUser * _Nullable user __attribute__((swift_name("user")));
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
@property (class, readonly, getter=companion) KmisskeyCoreApShowRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
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
__attribute__((swift_name("CoreBlocksCreateRequest")))
@interface KmisskeyCoreBlocksCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
@property (class, readonly, getter=companion) KmisskeyCoreBlocksDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreBlock")))
@interface KmisskeyCoreBlock : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreBlocksListResponse")))
@interface KmisskeyCoreBlocksListResponse : KmisskeyCoreBlock
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreBlocksListResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksListRequest")))
@interface KmisskeyCoreBlocksListRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreBlocksListRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreChannel")))
@interface KmisskeyCoreChannel : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreChannelCompanion *companion __attribute__((swift_name("companion")));
@property BOOL allowRenoteToExternal __attribute__((swift_name("allowRenoteToExternal")));
@property NSString * _Nullable bannerUrl __attribute__((swift_name("bannerUrl")));
@property NSString *color __attribute__((swift_name("color")));
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
__attribute__((swift_name("CoreChannelsFollowedResponse")))
@interface KmisskeyCoreChannelsFollowedResponse : KmisskeyCoreChannel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsFollowedResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsFollowedRequest")))
@interface KmisskeyCoreChannelsFollowedRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsFollowedRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsMyFavoritesResponse")))
@interface KmisskeyCoreChannelsMyFavoritesResponse : KmisskeyCoreChannel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsMyFavoritesResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreChannelsMyFavoritesRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsOwnedResponse")))
@interface KmisskeyCoreChannelsOwnedResponse : KmisskeyCoreChannel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsOwnedResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsOwnedRequest")))
@interface KmisskeyCoreChannelsOwnedRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsOwnedRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsShowResponse")))
@interface KmisskeyCoreChannelsShowResponse : KmisskeyCoreChannel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsShowResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreChannelsShowRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsTimelineRequest")))
@interface KmisskeyCoreChannelsTimelineRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreChannelsTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
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
@property (class, readonly, getter=companion) KmisskeyCoreClipsAddNoteRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *clipId __attribute__((swift_name("clipId")));
@property (readonly) NSString *noteId __attribute__((swift_name("noteId")));
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
__attribute__((swift_name("CoreClipsCreateRequest")))
@interface KmisskeyCoreClipsCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreClipsDeleteRequest")))
@interface KmisskeyCoreClipsDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithClipId:(NSString *)clipId __attribute__((swift_name("init(clipId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreClipsDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *clipId __attribute__((swift_name("clipId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsListRequest")))
@interface KmisskeyCoreClipsListRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreClipsListRequestCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClipsNotesRequest")))
@interface KmisskeyCoreClipsNotesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreClipsNotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable clipId __attribute__((swift_name("clipId")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
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
@property (class, readonly, getter=companion) KmisskeyCoreFavoritesDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
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
__attribute__((swift_name("CoreFile")))
@interface KmisskeyCoreFile : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreFilesCreateResponse")))
@interface KmisskeyCoreFilesCreateResponse : KmisskeyCoreFile
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreFilesCreateResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreFilesCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinByteArray * _Nullable bytes __attribute__((swift_name("bytes")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property NSString * _Nullable folderId __attribute__((swift_name("folderId")));
@property KmisskeyBoolean * _Nullable force __attribute__((swift_name("force")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyBoolean * _Nullable sensitive __attribute__((swift_name("sensitive")));
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
@property (class, readonly, getter=companion) KmisskeyCoreFollowingRequestsRejectRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
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
__attribute__((swift_name("CoreFollowingRequestsListRequest")))
@interface KmisskeyCoreFollowingRequestsListRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreFollowingRequestsListRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreGalleryPost")))
@interface KmisskeyCoreGalleryPost : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreCreateGalleryPostRequest")))
@interface KmisskeyCoreCreateGalleryPostRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithTitle:(NSString *)title fileIds:(KmisskeyKotlinArray<NSString *> *)fileIds __attribute__((swift_name("init(title:fileIds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
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
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteGalleryPostRequest")))
@interface KmisskeyCoreDeleteGalleryPostRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithPostId:(NSString *)postId __attribute__((swift_name("init(postId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
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
@property (class, readonly, getter=companion) KmisskeyCoreLikeGalleryPostRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *postId __attribute__((swift_name("postId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListGalleryPostsResponse")))
@interface KmisskeyCoreListGalleryPostsResponse : KmisskeyCoreGalleryPost
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreListGalleryPostsResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIListGalleryPostsRequest")))
@interface KmisskeyCoreIListGalleryPostsRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreIListGalleryPostsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListGalleryPostsRequest")))
@interface KmisskeyCoreListGalleryPostsRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreListGalleryPostsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
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
@interface KmisskeyCoreListUserGalleryPostsRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithUserId:(NSString *)userId __attribute__((swift_name("init(userId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreListUserGalleryPostsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property NSString *userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreTrend")))
@interface KmisskeyCoreTrend : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreHashtagsTrendResponse")))
@interface KmisskeyCoreHashtagsTrendResponse : KmisskeyCoreTrend
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreHashtagsTrendResponseCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("CoreNoteList")))
@interface KmisskeyCoreNoteList : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreUsersListsCreateRequest")))
@interface KmisskeyCoreUsersListsCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *name __attribute__((swift_name("name")));
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
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *listId __attribute__((swift_name("listId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsListResponse")))
@interface KmisskeyCoreUsersListsListResponse : KmisskeyCoreNoteList
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsListResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsPushRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsShowResponse")))
@interface KmisskeyCoreUsersListsShowResponse : KmisskeyCoreNoteList
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsShowResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreUsersListsUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString *listId __attribute__((swift_name("listId")));
@property NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreMessage")))
@interface KmisskeyCoreMessage : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreMessagingHistoryResponse")))
@interface KmisskeyCoreMessagingHistoryResponse : KmisskeyCoreMessage
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreMessagingHistoryResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreMessagingHistoryRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable group __attribute__((swift_name("group")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesResponse")))
@interface KmisskeyCoreMessagingMessagesResponse : KmisskeyCoreMessage
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreMessagingMessagesResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesRequest")))
@interface KmisskeyCoreMessagingMessagesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreMessagingMessagesRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyBoolean * _Nullable markAsRead __attribute__((swift_name("markAsRead")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
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
@property (class, readonly, getter=companion) KmisskeyCoreMessagingMessagesDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable messageId __attribute__((swift_name("messageId")));
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
__attribute__((swift_name("CoreMeta")))
@interface KmisskeyCoreMeta : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreMetaCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable bannerUrl __attribute__((swift_name("bannerUrl")));
@property KmisskeyBoolean * _Nullable cacheRemoteFiles __attribute__((swift_name("cacheRemoteFiles")));
@property NSString * _Nullable defaultDarkTheme __attribute__((swift_name("defaultDarkTheme")));
@property NSString * _Nullable defaultLightTheme __attribute__((swift_name("defaultLightTheme")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmisskeyBoolean * _Nullable disableRegistration __attribute__((swift_name("disableRegistration")));
@property KmisskeyBoolean * _Nullable emailRequiredForSignup __attribute__((swift_name("emailRequiredForSignup")));
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
__attribute__((swift_name("CoreMetaResponse")))
@interface KmisskeyCoreMetaResponse : KmisskeyCoreMeta
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreMetaResponseCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesCreateRequest")))
@interface KmisskeyCoreMutesCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
@property (class, readonly, getter=companion) KmisskeyCoreMutesDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreMute")))
@interface KmisskeyCoreMute : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreMutesListResponse")))
@interface KmisskeyCoreMutesListResponse : KmisskeyCoreMute
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreMutesListResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesListRequest")))
@interface KmisskeyCoreMutesListRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreMutesListRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesChildrenResponse")))
@interface KmisskeyCoreNotesChildrenResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesChildrenResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesChildrenRequest")))
@interface KmisskeyCoreNotesChildrenRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesChildrenRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesConversationResponse")))
@interface KmisskeyCoreNotesConversationResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesConversationResponseCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("CoreNotesCreateRequest")))
@interface KmisskeyCoreNotesCreateRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreNotesDeleteRequest")))
@interface KmisskeyCoreNotesDeleteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesFeaturedResponse")))
@interface KmisskeyCoreNotesFeaturedResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesFeaturedResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreNotesFeaturedRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesGlobalTimelineResponse")))
@interface KmisskeyCoreNotesGlobalTimelineResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesGlobalTimelineResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesGlobalTimelineRequest")))
@interface KmisskeyCoreNotesGlobalTimelineRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesGlobalTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesHybridTimelineResponse")))
@interface KmisskeyCoreNotesHybridTimelineResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesHybridTimelineResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesHybridTimelineRequest")))
@interface KmisskeyCoreNotesHybridTimelineRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesHybridTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable includeLocalRenotes __attribute__((swift_name("includeLocalRenotes")));
@property KmisskeyBoolean * _Nullable includeMyRenotes __attribute__((swift_name("includeMyRenotes")));
@property KmisskeyBoolean * _Nullable includeRenotedMyNotes __attribute__((swift_name("includeRenotedMyNotes")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesLocalTimelineResponse")))
@interface KmisskeyCoreNotesLocalTimelineResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesLocalTimelineResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesLocalTimelineRequest")))
@interface KmisskeyCoreNotesLocalTimelineRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesLocalTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable excludeNsfw __attribute__((swift_name("excludeNsfw")));
@property KmisskeyKotlinArray<NSString *> * _Nullable fileType __attribute__((swift_name("fileType")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesMentionsResponse")))
@interface KmisskeyCoreNotesMentionsResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesMentionsResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesMentionsRequest")))
@interface KmisskeyCoreNotesMentionsRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesMentionsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable following __attribute__((swift_name("following")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesResponse")))
@interface KmisskeyCoreNotesResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRequest")))
@interface KmisskeyCoreNotesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyBoolean * _Nullable local __attribute__((swift_name("local")));
@property KmisskeyBoolean * _Nullable poll __attribute__((swift_name("poll")));
@property KmisskeyBoolean * _Nullable renote __attribute__((swift_name("renote")));
@property KmisskeyBoolean * _Nullable reply __attribute__((swift_name("reply")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
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
__attribute__((swift_name("CoreNotesReactionsRequest")))
@interface KmisskeyCoreNotesReactionsRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesReactionsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRenotesResponse")))
@interface KmisskeyCoreNotesRenotesResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesRenotesResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRenotesRequest")))
@interface KmisskeyCoreNotesRenotesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesRenotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRepliesResponse")))
@interface KmisskeyCoreNotesRepliesResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesRepliesResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesRepliesRequest")))
@interface KmisskeyCoreNotesRepliesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesRepliesRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesSearchResponse")))
@interface KmisskeyCoreNotesSearchResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesSearchResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesSearchRequest")))
@interface KmisskeyCoreNotesSearchRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesSearchRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesSearchByTagRequest")))
@interface KmisskeyCoreNotesSearchByTagRequest : KmisskeyCoreTokenRequest
- (instancetype)initWithTag:(NSString *)tag __attribute__((swift_name("init(tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KmisskeyCoreNotesSearchByTagRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyBoolean * _Nullable poll __attribute__((swift_name("poll")));
@property KmisskeyBoolean * _Nullable renote __attribute__((swift_name("renote")));
@property KmisskeyBoolean * _Nullable reply __attribute__((swift_name("reply")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesShowResponse")))
@interface KmisskeyCoreNotesShowResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesShowResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreNotesShowRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesTimelineResponse")))
@interface KmisskeyCoreNotesTimelineResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesTimelineResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesTimelineRequest")))
@interface KmisskeyCoreNotesTimelineRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable includeLocalRenotes __attribute__((swift_name("includeLocalRenotes")));
@property KmisskeyBoolean * _Nullable includeMyRenotes __attribute__((swift_name("includeMyRenotes")));
@property KmisskeyBoolean * _Nullable includeRenotedMyNotes __attribute__((swift_name("includeRenotedMyNotes")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
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
@property (class, readonly, getter=companion) KmisskeyCoreNoteUnrenoteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesUserListTimelineResponse")))
@interface KmisskeyCoreNotesUserListTimelineResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesUserListTimelineResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesUserListTimelineRequest")))
@interface KmisskeyCoreNotesUserListTimelineRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreNotesUserListTimelineRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable includeLocalRenotes __attribute__((swift_name("includeLocalRenotes")));
@property KmisskeyBoolean * _Nullable includeMyRenotes __attribute__((swift_name("includeMyRenotes")));
@property KmisskeyBoolean * _Nullable includeRenotedMyNotes __attribute__((swift_name("includeRenotedMyNotes")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersNotesResponse")))
@interface KmisskeyCoreUsersNotesResponse : KmisskeyCoreNote
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersNotesResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersNotesRequest")))
@interface KmisskeyCoreUsersNotesRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersNotesRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable excludeNsfw __attribute__((swift_name("excludeNsfw")));
@property KmisskeyKotlinArray<NSString *> * _Nullable fileType __attribute__((swift_name("fileType")));
@property KmisskeyBoolean * _Nullable includeMyRenotes __attribute__((swift_name("includeMyRenotes")));
@property KmisskeyBoolean * _Nullable includeReplies __attribute__((swift_name("includeReplies")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable sinceDate __attribute__((swift_name("sinceDate")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property KmisskeyInt * _Nullable untilDate __attribute__((swift_name("untilDate")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property KmisskeyBoolean * _Nullable withChannelNotes __attribute__((swift_name("withChannelNotes")));
@property KmisskeyBoolean * _Nullable withFiles __attribute__((swift_name("withFiles")));
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
__attribute__((swift_name("CoreServiceWorkerRegisterRequest")))
@interface KmisskeyCoreServiceWorkerRegisterRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CorePollsVoteRequest")))
@interface KmisskeyCorePollsVoteRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
@property (class, readonly, getter=companion) KmisskeyCoreReactionsDeleteRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable noteId __attribute__((swift_name("noteId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreFollow")))
@interface KmisskeyCoreFollow : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreUsersFollowersResponse")))
@interface KmisskeyCoreUsersFollowersResponse : KmisskeyCoreFollow
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersFollowersResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersFollowersRequest")))
@interface KmisskeyCoreUsersFollowersRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersFollowersRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersFollowingsResponse")))
@interface KmisskeyCoreUsersFollowingsResponse : KmisskeyCoreFollow
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersFollowingsResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersFollowingsRequest")))
@interface KmisskeyCoreUsersFollowingsRequest : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersFollowingsRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
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
__attribute__((swift_name("CoreUsersReactionsRequest")))
@interface KmisskeyCoreUsersReactionsRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersReactionsRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable untilId __attribute__((swift_name("untilId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
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
@property (class, readonly, getter=companion) KmisskeyCoreUsersRecommendationRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmisskeyInt * _Nullable offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreRelation")))
@interface KmisskeyCoreRelation : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreUsersRelationResponse")))
@interface KmisskeyCoreUsersRelationResponse : KmisskeyCoreRelation
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUsersRelationResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreUsersRelationRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> *userId __attribute__((swift_name("userId")));
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
__attribute__((swift_name("CoreUsersShowMultipleRequest")))
@interface KmisskeyCoreUsersShowMultipleRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
@property (class, readonly, getter=companion) KmisskeyCoreUsersShowSingleRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreWebhook")))
@interface KmisskeyCoreWebhook : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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
__attribute__((swift_name("CoreCreateWebhooksResponse")))
@interface KmisskeyCoreCreateWebhooksResponse : KmisskeyCoreWebhook
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreCreateWebhooksResponseCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("CoreDeleteWebhooksRequest")))
@interface KmisskeyCoreDeleteWebhooksRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreDeleteWebhooksRequestCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable webhookId __attribute__((swift_name("webhookId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreShowWebhooksResponse")))
@interface KmisskeyCoreShowWebhooksResponse : KmisskeyCoreWebhook
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreShowWebhooksResponseCompanion *companion __attribute__((swift_name("companion")));
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
@property (class, readonly, getter=companion) KmisskeyCoreShowWebhooksRequestCompanion *companion __attribute__((swift_name("companion")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUpdateWebhooksRequest")))
@interface KmisskeyCoreUpdateWebhooksRequest : KmisskeyCoreTokenRequest
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreUpdateWebhooksRequestCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyBoolean * _Nullable active __attribute__((swift_name("active")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KmisskeyKotlinArray<NSString *> * _Nullable on __attribute__((swift_name("on")));
@property NSString * _Nullable secret __attribute__((swift_name("secret")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable webhookId __attribute__((swift_name("webhookId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser.Companion")))
@interface KmisskeyCoreUserCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly, getter=companion) KmisskeyCoreUserLiteCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable avatarBlurhash __attribute__((swift_name("avatarBlurhash")));
@property KmisskeyKotlinArray<KmisskeyCoreAvatarDecoration *> *avatarDecorations __attribute__((swift_name("avatarDecorations")));
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property KmisskeyKotlinArray<KmisskeyCoreBadgeRole *> *badgeRoles __attribute__((swift_name("badgeRoles")));
@property KmisskeyCoreEmojis * _Nullable emojis __attribute__((swift_name("emojis")));
@property NSString * _Nullable host __attribute__((swift_name("host")));
@property NSString *id __attribute__((swift_name("id")));
@property KmisskeyCoreInstance * _Nullable instance __attribute__((swift_name("instance")));
@property BOOL isBot __attribute__((swift_name("isBot")));
@property BOOL isCat __attribute__((swift_name("isCat")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString *onlineStatus __attribute__((swift_name("onlineStatus")));
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
@property (class, readonly, getter=companion) KmisskeyCoreUserDetailedNotMeCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> *alsoKnownAs __attribute__((swift_name("alsoKnownAs")));
@property NSString * _Nullable bannerBlurhash __attribute__((swift_name("bannerBlurhash")));
@property NSString * _Nullable bannerUrl __attribute__((swift_name("bannerUrl")));
@property NSString * _Nullable birthday __attribute__((swift_name("birthday")));
@property NSString *createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmisskeyKotlinArray<KmisskeyCoreField *> *fields __attribute__((swift_name("fields")));
@property int32_t followersCount __attribute__((swift_name("followersCount")));
@property NSString *followersVisibility __attribute__((swift_name("followersVisibility")));
@property int32_t followingCount __attribute__((swift_name("followingCount")));
@property NSString *followingVisibility __attribute__((swift_name("followingVisibility")));
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
@property KmisskeyKotlinArray<NSString *> *mutedWords __attribute__((swift_name("mutedWords")));
@property BOOL noCrawle __attribute__((swift_name("noCrawle")));
@property BOOL preventAiLearning __attribute__((swift_name("preventAiLearning")));
@property BOOL receiveAnnouncementEmail __attribute__((swift_name("receiveAnnouncementEmail")));
@property KmisskeyKotlinArray<KmisskeyCoreSecurityKey *> *securityKeysList __attribute__((swift_name("securityKeysList")));
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
 *   kotlinx.serialization.Serializable
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
@property KmisskeyCoreColor * _Nullable color __attribute__((swift_name("color")));
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
__attribute__((swift_name("CoreIFavoritesRequest.Companion")))
@interface KmisskeyCoreIFavoritesRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreIFavoritesRequestCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreINotificationsResponse.Companion")))
@interface KmisskeyCoreINotificationsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreINotificationsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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
__attribute__((swift_name("CoreAnnouncements.Companion")))
@interface KmisskeyCoreAnnouncementsCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAnnouncementsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAnnouncementsResponse.Companion")))
@interface KmisskeyCoreAnnouncementsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAnnouncementsResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreAntenna.Companion")))
@interface KmisskeyCoreAntennaCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreAntennaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNote.Companion")))
@interface KmisskeyCoreNoteCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNoteCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly, getter=companion) KmisskeyCorePollCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<KmisskeyCoreChoice *> * _Nullable choices __attribute__((swift_name("choices")));
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property BOOL multiple __attribute__((swift_name("multiple")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApShowResponse.Companion")))
@interface KmisskeyCoreApShowResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreApShowResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreCreateAppResponse.Companion")))
@interface KmisskeyCoreCreateAppResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreCreateAppResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreGetMiAuthUriRequest.Companion")))
@interface KmisskeyCoreGetMiAuthUriRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGetMiAuthUriRequestCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreGenerateAuthSessionRequest.Companion")))
@interface KmisskeyCoreGenerateAuthSessionRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGenerateAuthSessionRequestCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUserKeyAuthSessionRequest.Companion")))
@interface KmisskeyCoreUserKeyAuthSessionRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserKeyAuthSessionRequestCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreBlock.Companion")))
@interface KmisskeyCoreBlockCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreBlockCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksListResponse.Companion")))
@interface KmisskeyCoreBlocksListResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreBlocksListResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreChannel.Companion")))
@interface KmisskeyCoreChannelCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannelsFollowedResponse.Companion")))
@interface KmisskeyCoreChannelsFollowedResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsFollowedResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreChannelsMyFavoritesResponse.Companion")))
@interface KmisskeyCoreChannelsMyFavoritesResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsMyFavoritesResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreChannelsOwnedResponse.Companion")))
@interface KmisskeyCoreChannelsOwnedResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsOwnedResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreChannelsShowResponse.Companion")))
@interface KmisskeyCoreChannelsShowResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreChannelsShowResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreClip.Companion")))
@interface KmisskeyCoreClipCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreClipCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreFederationInstanceResponse.Companion")))
@interface KmisskeyCoreFederationInstanceResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFederationInstanceResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreFile.Companion")))
@interface KmisskeyCoreFileCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFileCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesCreateResponse.Companion")))
@interface KmisskeyCoreFilesCreateResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFilesCreateResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreFollowingRequestsListResponse.Companion")))
@interface KmisskeyCoreFollowingRequestsListResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowingRequestsListResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreGalleryPost.Companion")))
@interface KmisskeyCoreGalleryPostCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGalleryPostCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreListGalleryPostsResponse.Companion")))
@interface KmisskeyCoreListGalleryPostsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreListGalleryPostsResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreTrend.Companion")))
@interface KmisskeyCoreTrendCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreTrendCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHashtagsTrendResponse.Companion")))
@interface KmisskeyCoreHashtagsTrendResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreHashtagsTrendResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNoteList.Companion")))
@interface KmisskeyCoreNoteListCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNoteListCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUsersListsDeleteRequest.Companion")))
@interface KmisskeyCoreUsersListsDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListsListResponse.Companion")))
@interface KmisskeyCoreUsersListsListResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsListResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUsersListsShowResponse.Companion")))
@interface KmisskeyCoreUsersListsShowResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersListsShowResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreMessage.Companion")))
@interface KmisskeyCoreMessageCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMessageCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly, getter=companion) KmisskeyCoreGroupCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable ownerId __attribute__((swift_name("ownerId")));
@property NSArray<NSString *> * _Nullable userIds __attribute__((swift_name("userIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingHistoryResponse.Companion")))
@interface KmisskeyCoreMessagingHistoryResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMessagingHistoryResponseCompanion *shared __attribute__((swift_name("shared")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessagingMessagesResponse.Companion")))
@interface KmisskeyCoreMessagingMessagesResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMessagingMessagesResponseCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly, getter=companion) KmisskeyCoreEmojiCompanion *companion __attribute__((swift_name("companion")));
@property KmisskeyKotlinArray<NSString *> * _Nullable aliases __attribute__((swift_name("aliases")));
@property NSString *category __attribute__((swift_name("category")));
@property KmisskeyInt * _Nullable height __attribute__((swift_name("height")));
@property NSString * _Nullable host __attribute__((swift_name("host"))) __attribute__((deprecated("")));
@property NSString * _Nullable id __attribute__((swift_name("id"))) __attribute__((deprecated("")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString *url __attribute__((swift_name("url")));
@property KmisskeyInt * _Nullable width __attribute__((swift_name("width")));
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
__attribute__((swift_name("CoreGetOnlineUsersCountResponse.Companion")))
@interface KmisskeyCoreGetOnlineUsersCountResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreGetOnlineUsersCountResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreMetaFeatures")))
@interface KmisskeyCoreMetaFeatures : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaResponse.Companion")))
@interface KmisskeyCoreMetaResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMetaResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreMute.Companion")))
@interface KmisskeyCoreMuteCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMuteCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutesListResponse.Companion")))
@interface KmisskeyCoreMutesListResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMutesListResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesChildrenResponse.Companion")))
@interface KmisskeyCoreNotesChildrenResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesChildrenResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesConversationResponse.Companion")))
@interface KmisskeyCoreNotesConversationResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesConversationResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesCreateResponse.Companion")))
@interface KmisskeyCoreNotesCreateResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesCreateResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesDeleteRequest.Companion")))
@interface KmisskeyCoreNotesDeleteRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesDeleteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotesFeaturedResponse.Companion")))
@interface KmisskeyCoreNotesFeaturedResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesFeaturedResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesGlobalTimelineResponse.Companion")))
@interface KmisskeyCoreNotesGlobalTimelineResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesGlobalTimelineResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesHybridTimelineResponse.Companion")))
@interface KmisskeyCoreNotesHybridTimelineResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesHybridTimelineResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesLocalTimelineResponse.Companion")))
@interface KmisskeyCoreNotesLocalTimelineResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesLocalTimelineResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesMentionsResponse.Companion")))
@interface KmisskeyCoreNotesMentionsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesMentionsResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesResponse.Companion")))
@interface KmisskeyCoreNotesResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesReactionsResponse.Companion")))
@interface KmisskeyCoreNotesReactionsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesReactionsResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesRenotesResponse.Companion")))
@interface KmisskeyCoreNotesRenotesResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesRenotesResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesRepliesResponse.Companion")))
@interface KmisskeyCoreNotesRepliesResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesRepliesResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesSearchResponse.Companion")))
@interface KmisskeyCoreNotesSearchResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesSearchResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesShowResponse.Companion")))
@interface KmisskeyCoreNotesShowResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesShowResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesTimelineResponse.Companion")))
@interface KmisskeyCoreNotesTimelineResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesTimelineResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreNotesUserListTimelineResponse.Companion")))
@interface KmisskeyCoreNotesUserListTimelineResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreNotesUserListTimelineResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUsersNotesResponse.Companion")))
@interface KmisskeyCoreUsersNotesResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersNotesResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreServiceWorkerRegisterResponse.Companion")))
@interface KmisskeyCoreServiceWorkerRegisterResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreServiceWorkerRegisterResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreFollow.Companion")))
@interface KmisskeyCoreFollowCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFollowCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersFollowersResponse.Companion")))
@interface KmisskeyCoreUsersFollowersResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersFollowersResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUsersFollowingsResponse.Companion")))
@interface KmisskeyCoreUsersFollowingsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersFollowingsResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUsersReactionsResponse.Companion")))
@interface KmisskeyCoreUsersReactionsResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersReactionsResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUsersRecommendationRequest.Companion")))
@interface KmisskeyCoreUsersRecommendationRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersRecommendationRequestCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUsersRelationResponse.Companion")))
@interface KmisskeyCoreUsersRelationResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUsersRelationResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreWebhook.Companion")))
@interface KmisskeyCoreWebhookCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreWebhookCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateWebhooksResponse.Companion")))
@interface KmisskeyCoreCreateWebhooksResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreCreateWebhooksResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreDeleteWebhooksResponse.Companion")))
@interface KmisskeyCoreDeleteWebhooksResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreDeleteWebhooksResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreShowWebhooksResponse.Companion")))
@interface KmisskeyCoreShowWebhooksResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreShowWebhooksResponseCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreUpdateWebhooksResponse.Companion")))
@interface KmisskeyCoreUpdateWebhooksResponseCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUpdateWebhooksResponseCompanion *shared __attribute__((swift_name("shared")));
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

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmisskeyKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KmisskeyKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KmisskeyKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmisskeyKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KmisskeyKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KmisskeyKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDetailedNotMe.Companion")))
@interface KmisskeyCoreUserDetailedNotMeCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreUserDetailedNotMeCompanion *shared __attribute__((swift_name("shared")));
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
@property KmisskeyCoreUser *user __attribute__((swift_name("user")));
@property NSString *userId __attribute__((swift_name("userId")));
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
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSecurityKey")))
@interface KmisskeyCoreSecurityKey : KmisskeyBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmisskeyCoreSecurityKeyCompanion *companion __attribute__((swift_name("companion")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *lastUsed __attribute__((swift_name("lastUsed")));
@property NSString *name __attribute__((swift_name("name")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePoll.Companion")))
@interface KmisskeyCorePollCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePollCompanion *shared __attribute__((swift_name("shared")));
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
@property (class, readonly, getter=companion) KmisskeyCoreChoiceCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property BOOL voted __attribute__((swift_name("voted")));
@property KmisskeyInt * _Nullable votes __attribute__((swift_name("votes")));
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
__attribute__((swift_name("CoreFileProperties.Companion")))
@interface KmisskeyCoreFilePropertiesCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreFilePropertiesCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CoreMetaFeatures.Companion")))
@interface KmisskeyCoreMetaFeaturesCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreMetaFeaturesCompanion *shared __attribute__((swift_name("shared")));
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
__attribute__((swift_name("CorePollRequest.Companion")))
@interface KmisskeyCorePollRequestCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCorePollRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmisskeyKotlinx_serialization_coreEncoder
@required
- (id<KmisskeyKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KmisskeyKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KmisskeyKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KmisskeyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmisskeyKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<KmisskeyKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<KmisskeyKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) KmisskeyKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmisskeyKotlinx_serialization_coreDecoder
@required
- (id<KmisskeyKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KmisskeyKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KmisskeyKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSecurityKey.Companion")))
@interface KmisskeyCoreSecurityKeyCompanion : KmisskeyBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmisskeyCoreSecurityKeyCompanion *shared __attribute__((swift_name("shared")));
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

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmisskeyKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KmisskeyKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KmisskeyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmisskeyKotlinx_serialization_coreSerializersModule : KmisskeyBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KmisskeyKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmisskeyKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KmisskeyKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KmisskeyKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmisskeyKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmisskeyKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
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
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmisskeyKotlinx_serialization_coreSerialKind : KmisskeyBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmisskeyKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KmisskeyKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KmisskeyKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KmisskeyKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmisskeyKotlinNothing : KmisskeyBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmisskeyKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KmisskeyKotlinKClass>)kClass provider:(id<KmisskeyKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KmisskeyKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KmisskeyKotlinKClass>)kClass serializer:(id<KmisskeyKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KmisskeyKotlinKClass>)baseClass actualClass:(id<KmisskeyKotlinKClass>)actualClass actualSerializer:(id<KmisskeyKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KmisskeyKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KmisskeyKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmisskeyKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KmisskeyKotlinKClass>)baseClass defaultSerializerProvider:(id<KmisskeyKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
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
