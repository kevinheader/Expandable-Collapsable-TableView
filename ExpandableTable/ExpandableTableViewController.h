//
//  ExpandableTableViewController.h
//  ExpandableTable
//
//  Created by Manpreet Singh on 06/12/13.
//  Copyright (c) 2013 Manpreet Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ExpandableTableViewController : UITableViewController

@property(nonatomic,strong) NSArray *items;
@property (nonatomic, retain) NSMutableArray *itemsForTable;
@property(nonatomic,strong) NSDictionary *itemsInsideObject;
@property (strong, nonatomic) IBOutlet UITableView *menuTableView;

- (void)btnExpand;

-(void)miniMizeThisRows:(NSArray*)array;

@end