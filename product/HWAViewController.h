//
//  HWAViewController.h
//  product
//
//  Created by Daniel Merrill on 7/21/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HWAViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *UsernameTextField;

@property (weak, nonatomic) IBOutlet UITextField *PasswordTextField;

// 2 text fields (username, password)

- (IBAction)LoginButtonclicked:(id)sender;

- (IBAction)ResetButtonclicked:(id)sender;



// 3 labels (username = username.text, password =password.text, error  = error message ( no username, no password, and both username and password))

// 2 button (login, reset)

// 3 buttons (  no label different background color, when you tap them, change the view background color to match the button)


@end
