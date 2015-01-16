//
//  Card.h
//  Matchizmo
//
//  Created by Juli Grossman on 10/29/13.
//  Copyright (c) 2013 Jaden Grossman. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

-(int)match:(NSArray *)otherCards;

@end