//
//  AppDelegate.h
//  EncryptionTest
//
//  Created by Niloufar on 4/29/18.
//  Copyright © 2018 Hooodad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

