//
//  ThirdViewController.h
//  Fingercise
//
//  Created by James Lane on 10/30/14.
//  Copyright (c) 2014 James Lane. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ThirdViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;


- (IBAction)saveButtonPressed:(id)sender;
@end
