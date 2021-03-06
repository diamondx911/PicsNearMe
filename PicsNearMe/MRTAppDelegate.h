//
//  MRTAppDelegate.h
//  PicsNearMe
//
//  Created by Michele Titolo on 5/16/14.
//  Copyright (c) 2014 Michele Titolo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MRTSessionController;

@interface MRTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MRTSessionController* mpcHandler;

@end
