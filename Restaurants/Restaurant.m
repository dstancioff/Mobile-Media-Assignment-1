//
//  Restaurant.m
//  Restaurants
//

#import "Restaurant.h"

@implementation Restaurant
@synthesize address, name;

- (id)init {
    self = [super init];
    if (self) {
        self.name = @"Congee Bowery";
        self.address = @"207 Bowery\nNew York, NY 10002";
    }
    return self;
}

@end
