//
//  ChatCell.h
//  Parse
//
//  Created by Trustin Harris on 7/9/18.
//  Copyright © 2018 Trustin Harris. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChatCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;

@end
