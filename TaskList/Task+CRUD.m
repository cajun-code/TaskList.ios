//
//  Task+CRUD.m
//  TaskList
//
//  Created by Allan Davis on 11/1/12.
//  Copyright (c) 2012 Cajun Code. All rights reserved.
//

#import "Task+CRUD.h"

@implementation Task (CRUD)
+ (Task *) taskWithName:(NSString *)name InManagedObjectContext:(NSManagedObjectContext*)context{
    Task *task = [NSEntityDescription insertNewObjectForEntityForName:@"Task" inManagedObjectContext:context];
    task.name = name;
    NSError * error = nil;
    [context save:&error];
    // Handel error more eleglantly than this
    return task;
}
+ (NSArray *) allTasksInContext:(NSManagedObjectContext *)context{
    NSFetchRequest *request = [[NSFetchRequest alloc]initWithEntityName:@"Task"];
    NSError *error = nil;
    NSArray *results = [context executeFetchRequest: request error:&error];
    return results;
}
-(BOOL) save{
    NSError *error = nil;
    [self.managedObjectContext save:&error];
    return (error == nil);
}
@end
