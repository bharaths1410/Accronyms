//
//  AppDelegate.h
//  AcronymsTask
//
//  Created by Bharath Sirangi on 1/10/17.
//  Copyright © 2017 Bharath Sirangi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

