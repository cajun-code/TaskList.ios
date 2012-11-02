//
//  Task.h
//  TaskList
//
//  Created by Allan Davis on 11/1/12.
//  Copyright (c) 2012 Cajun Code. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Category;

@interface Task : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic) BOOL done;
@property (nonatomic, retain) Category *category;

@end
