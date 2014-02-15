//
//  AddNewViewController.h
//  FASqliteWrapper-ObjC
//
//  Created by Furqan on 2/15/14.
//  Copyright (c) 2014 InnovativeApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddNewViewController : UIViewController <UITextFieldDelegate>

@property(nonatomic,weak)IBOutlet UITextField *name_text;
@property(nonatomic,weak)IBOutlet UITextField *email_text;


-(IBAction)addingNewRecord:(id)sender;


@end
