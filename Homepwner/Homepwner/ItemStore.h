//
//  ItemStore.h
//  Homepwner
//
//  Created by Luis Carbuccia on 8/23/14.
//  Copyright (c) 2014 Luis Carbuccia. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Item;

@interface ItemStore : NSObject

@property (nonatomic, readonly) NSArray *allItems;

+ (instancetype) sharedStore;
- (Item *) createItem;

@end
