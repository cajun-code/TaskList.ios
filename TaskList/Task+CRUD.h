//
//  Task+CRUD.h
//  TaskList
//
//  Created by Allan Davis on 11/1/12.
//  Copyright (c) 2012 Cajun Code. All rights reserved.
//

#import "Task.h"

@interface Task (CRUD)

+ (Task *) taskWithName:(NSString *)name InManagedObjectContext:(NSManagedObjectContext*)context;
+ (NSArray *) allTasksInContext:(NSManagedObjectContext *)context;
@end
