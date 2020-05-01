//
//  AppDelegate.h
//  Blueshift-mParticle-Sample
//
//  Created by Rahul Raveendran on 01/05/20.
//  Copyright © 2020 Blueshift Labs Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

