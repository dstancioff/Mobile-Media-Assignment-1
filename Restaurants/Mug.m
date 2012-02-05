//
//  Mug.m
//  Restaurants
//


#import "Mug.h"

@implementation Mug
@synthesize isClean;
-(void) addLiquid:(float)amountOfLiquidToAdd
{
    currentCapacity = currentCapacity + amountOfLiquidToAdd;
    isClean = NO;
}


@end
