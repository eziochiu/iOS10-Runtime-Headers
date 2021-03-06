/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    bool  _addToLockScreenWhenLocked;
    NSSet * _alertSuppressionContexts;
    bool  _alertsWhenLocked;
    NSString * _alternateActionLabel;
    bool  _canPlaySound;
    bool  _canTurnOnDisplay;
    bool  _coalescesWhenLocked;
    bool  _dismissAutomatically;
    bool  _hideClearActionInList;
    bool  _ignoreAttachmentImageThumbnailCrop;
    unsigned long long  _lockScreenPersistence;
    unsigned long long  _lockScreenPriority;
    unsigned long long  _messageNumberOfLines;
    bool  _overridesPocketMode;
    bool  _overridesQuietMode;
    bool  _preemptsPresentedNotification;
    unsigned long long  _realertCount;
    bool  _requestsFullScreenPresentation;
    bool  _revealsAdditionalContentOnPresentation;
    bool  _silencedByMenuButtonPress;
    bool  _suppressesAlertsWhenAppIsActive;
    bool  _suppressesMessageWhenLocked;
    bool  _suppressesSubtitleWhenLocked;
}

@property (nonatomic, readonly) bool addToLockScreenWhenUnlocked;
@property (nonatomic, readonly, copy) NSSet *alertSuppressionContexts;
@property (nonatomic, readonly) bool alertsWhenLocked;
@property (nonatomic, readonly, copy) NSString *alternateActionLabel;
@property (nonatomic, readonly) bool canPlaySound;
@property (nonatomic, readonly) bool canTurnOnDisplay;
@property (nonatomic, readonly) bool coalescesWhenLocked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dismissAutomatically;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideClearActionInList;
@property (nonatomic, readonly) bool ignoreAttachmentImageThumbnailCrop;
@property (nonatomic, readonly) unsigned long long lockScreenPersistence;
@property (nonatomic, readonly) unsigned long long lockScreenPriority;
@property (nonatomic, readonly) unsigned long long messageNumberOfLines;
@property (nonatomic, readonly) bool overridesPocketMode;
@property (nonatomic, readonly) bool overridesQuietMode;
@property (nonatomic, readonly) bool preemptsPresentedNotification;
@property (nonatomic, readonly) unsigned long long realertCount;
@property (nonatomic, readonly) bool requestsFullScreenPresentation;
@property (nonatomic, readonly) bool revealsAdditionalContentOnPresentation;
@property (nonatomic, readonly) bool silencedByMenuButtonPress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressesAlertsWhenAppIsActive;
@property (nonatomic, readonly) bool suppressesContentWhenLocked;
@property (nonatomic, readonly) bool suppressesMessageWhenLocked;
@property (nonatomic, readonly) bool suppressesSubtitleWhenLocked;

- (void).cxx_destruct;
- (bool)addToLockScreenWhenUnlocked;
- (id)alertSuppressionContexts;
- (bool)alertsWhenLocked;
- (id)alternateActionLabel;
- (bool)canPlaySound;
- (bool)canTurnOnDisplay;
- (bool)coalescesWhenLocked;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)dismissAutomatically;
- (unsigned long long)hash;
- (bool)hideClearActionInList;
- (bool)ignoreAttachmentImageThumbnailCrop;
- (id)initWithNotificationOptions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lockScreenPersistence;
- (unsigned long long)lockScreenPriority;
- (unsigned long long)messageNumberOfLines;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)overridesPocketMode;
- (bool)overridesQuietMode;
- (bool)preemptsPresentedNotification;
- (unsigned long long)realertCount;
- (bool)requestsFullScreenPresentation;
- (bool)revealsAdditionalContentOnPresentation;
- (bool)silencedByMenuButtonPress;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressesAlertsWhenAppIsActive;
- (bool)suppressesContentWhenLocked;
- (bool)suppressesMessageWhenLocked;
- (bool)suppressesSubtitleWhenLocked;

@end
