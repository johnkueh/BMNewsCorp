//
//  BMSDK.h
//  BMSDK
//
//  Created by Mamnun Bhuiyan on 21/04/2014.
//  Copyright (c) 2014 Beaconmaker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMConfig.h"
#import "BMBeacon.h"
#import "BMAction.h"

typedef void (^BMCallback)(BMBeacon*);

@interface BMSDK : NSObject

+ (instancetype)sharedInstance;
- (instancetype)init __attribute__((unavailable("use sharedInstance")));

+ (NSBundle *)frameworkBundle;
+ (void)setApplicationId:(NSString*)applicationId clientKey:(NSString*)clientKey;

- (BMBeacon*)fetchBeaconForUUID:(NSUUID*)UUID major:(NSNumber*)major minor:(NSNumber*)minor;
- (void)startMonitoring;
- (void)stopMonitoring;

- (void)performActionForBeacon:(BMCallback) callback;

- (void)applicationDidEnterBackground:(UIApplication *)application;
- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;

@end
