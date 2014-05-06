//
//  HistoryViewController.h
//  ProtienTracker
//
//  Created by Jeremy Morgan on 5/6/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HistoryViewController : UIViewController{
    
    NSMutableArray *history;
    
}
@property (weak, nonatomic) IBOutlet UILabel *historyLabel;
-(void)setHistory:(NSMutableArray *)h;

@end
