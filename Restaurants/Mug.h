//
//  Mug.h
//  Restaurants
//


#import <Foundation/Foundation.h>

@interface Mug : NSObject
{
    UIColor* color;
    UIImage* logo;
    float maxCapacity;
    float currentCapacity;
    BOOL isClean;
}
@property(readwrite) BOOL isClean;
-(void) addLiquid:(float)amountOfLiquidToAdd;
@end
