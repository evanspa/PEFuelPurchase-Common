//
//  FPAuthTokenDelegate.h
//  PEFuelPurchase-Common
//
//  Created by Evans, Paul on 3/26/14.
//  Copyright (c) 2014 Paul Evans. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PEHateoas-client/HCAuthentication.h>

@protocol FPAuthTokenDelegate <NSObject>

- (void)didReceiveNewAuthToken:(NSString *)authToken
       forUserGlobalIdentifier:(NSString *)userGlobalIdentifier

- (void)authRequired:(HCAuthentication *)authentication;

- (void)invalidateTokenForUserGlobalIdentifier:(NSString *)userGlobalIdentifier;

@end
