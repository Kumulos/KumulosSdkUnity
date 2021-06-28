//
//  Kumulos+Push.h
//  KumulosSDK
//
//  Copyright © 2016 kumulos. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Kumulos.h"

API_AVAILABLE(ios(10.0))
typedef void (^ _Nullable KSUNAuthorizationCheckedHandler)(UNAuthorizationStatus status, NSError* _Nullable error);

@interface KSPushNotification : NSObject

+ (instancetype _Nullable) fromUserInfo:(NSDictionary* _Nullable)userInfo;
+ (instancetype _Nullable) fromUserInfo:(NSDictionary* _Nonnull)userInfo withNotificationResponse:(UNNotificationResponse* _Nonnull) response  API_AVAILABLE(ios(10.0));

@property (nonatomic,readonly) NSNumber* _Nonnull id;
@property (nonatomic,readonly) NSDictionary* _Nonnull aps;
@property (nonatomic,readonly) NSDictionary* _Nonnull data;
@property (nonatomic,readonly) NSURL* _Nullable url;
@property (nonatomic,readonly) NSDictionary* _Nullable inAppDeepLink;
@property (nonatomic,readonly) NSString* _Nullable actionIdentifier;

@end

@interface Kumulos (Push)

/**
 * Requests a push token from the user.
 *
 * Will prompt for alert, sound, and badge permissions.
 */
- (void) pushRequestDeviceToken;


/**
 * Requests a push token from the user.
 *
 * Will prompt for alert, sound, and badge permissions.
*/

- (void) pushRequestDeviceToken:(KSUNAuthorizationCheckedHandler)onAuthorizationStatus API_AVAILABLE(ios(10.0));
    
/**
 * Registers the given device token with Kumulos for the current unique installation
 * @param deviceToken The device's push token
 */
- (void) pushRegisterWithDeviceToken:(NSData* _Nonnull)deviceToken;

/**
 Unsubscribe your device from the Kumulos Push service
 */
- (void) pushUnregister;

/**
 * Tracks a conversion from a notification object to let Kumulos know that the given push 'converted' the user
 * @param notification The remote notification model that was receieved by the device
 */
- (void) pushTrackOpenFromNotification:(KSPushNotification* _Nullable)notification;
@end
