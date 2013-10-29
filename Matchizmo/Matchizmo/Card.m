//
//  Card.m
//  Matchizmo
//
//  Created by Juli Grossman on 10/29/13.
//  Copyright (c) 2013 Jaden Grossman. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card

@synthesize chosen = _chosen;
@synthesize matched = _matched;

-(BOOL)isChosen
{
    return _chosen;
}

-(void)setChosen:(BOOL)chosen
{
    _chosen = chosen;
}

-(BOOL)isMatched
{
    return _matched;
}

-(void)setMatched:(BOOL)matched
{
    _matched = matched;
}

-(int)match:(NSArray *)otherCards
{
    int score = 0;
    for(Card *card in otherCards)
    {
        if([card.contents isEqualToString:self.contents])
        {
            score = 1;
        }
    }
    return score;
}

@end
