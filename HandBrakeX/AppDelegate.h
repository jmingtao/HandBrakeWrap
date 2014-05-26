//
//  AppDelegate.h
//  HandBrakeX
//
//  Created by JinMingTao on 5/26/14.
//  Copyright (c) 2014 jinmingtao. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSTableViewDataSource, NSTableViewDelegate, MovieConverterDelegate>

@property (assign) IBOutlet NSWindow *window;

@end
