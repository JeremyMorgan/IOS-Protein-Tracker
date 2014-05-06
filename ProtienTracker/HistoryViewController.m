//
//  HistoryViewController.m
//  ProtienTracker
//
//  Created by Jeremy Morgan on 5/6/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#import "HistoryViewController.h"

@interface HistoryViewController ()

@end

@implementation HistoryViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSMutableString *text = [[NSMutableString alloc] init];
    
    for (NSNumber *n in history){
        [text appendFormat:@"%@\n", n];
    }
    
    self.historyLabel.text = text;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)setHistory:(NSMutableArray *)h{
    history = h;
}
@end
