//
//  ViewController.h
//  ProtienTracker
//
//  Created by Jeremy Morgan on 5/6/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HistoryViewController.h"

@interface MainViewController : UIViewController {
    int total;
    NSMutableArray *amountHistory;
}

@property (weak, nonatomic) IBOutlet UILabel *totalLabel;
@property (weak, nonatomic) IBOutlet UILabel *goalLabel;
@property (weak, nonatomic) IBOutlet UITextField *amountText;


- (IBAction)addProtien:(id)sender;
- (IBAction)unwindToMain:(UIStoryboardSegue *)segue;
- (void)goalChanged:(NSNotification *)notification;


@end
