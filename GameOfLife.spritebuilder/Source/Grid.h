//
//  Grid.h
//  GameOfLife
//
//  Created by Harsh Alkutkar on 1/29/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;

@property (nonatomic, assign) int generation;

-(void) countNeighbors;
-(void) evolveStep;
-(void) updateCreatures;



@end
