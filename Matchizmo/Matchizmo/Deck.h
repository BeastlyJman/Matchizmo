//
//  Deck.h
//  Matchizmo
//
//  Created by Juli Grossman on 10/29/13.
//  Copyright (c) 2013 Jaden Grossman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

-(void)addCard:(Card *)card atTop:(BOOL)atTop;
-(void)addCard:(Card *)card;

-(Card *)drawRandomCard;
@end
