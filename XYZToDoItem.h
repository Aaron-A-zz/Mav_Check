//
//  XYZToDoItem.h
//  Check
//
//  Created by DarkCode on 1/21/14.
//  Copyright (c) 2014 CodeA2. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject <NSCoding>

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@property NSDate *reminderDate;

@end
