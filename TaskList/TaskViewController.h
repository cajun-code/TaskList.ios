//
//  TaskViewController.h
//  TaskList
//
//  Created by Allan Davis on 11/1/12.
//  Copyright (c) 2012 Cajun Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TaskViewController : UITableViewController
@property NSManagedObjectContext *context;
@property NSArray *tasks;
@end
