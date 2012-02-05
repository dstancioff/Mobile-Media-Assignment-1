//
//  Restaurant.h
//  Restaurants
//

#import <Foundation/Foundation.h>

@interface Restaurant : NSObject
{
    NSString* address;
    NSString* name;
    
}
@property(readwrite, strong) NSString* address;
@property(readwrite, strong) NSString* name;


@end
