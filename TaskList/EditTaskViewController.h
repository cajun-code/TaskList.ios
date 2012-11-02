//
//  EditTaskViewController.h
//  TaskList
//
//  Created by Allan Davis on 11/1/12.
//  Copyright (c) 2012 Cajun Code. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task+CRUD.h"
@interface EditTaskViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *taskName;
@property (weak, nonatomic) IBOutlet UISwitch *taskDone;
- (IBAction)dismissEditView:(id)sender;
@property(strong) Task *task;
@end
