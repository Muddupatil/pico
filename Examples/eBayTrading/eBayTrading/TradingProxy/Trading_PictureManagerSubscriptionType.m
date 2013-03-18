// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_PictureManagerSubscriptionType.h"
#import "Trading_AmountType.h"

@implementation Trading_PictureManagerSubscriptionType

@synthesize subscriptionLevel = _subscriptionLevel;
@synthesize fee = _fee;
@synthesize storageSize = _storageSize;
@synthesize any = _any;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SubscriptionLevel" propertyName:@"subscriptionLevel" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"subscriptionLevel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Fee" propertyName:@"fee" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"fee"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StorageSize" propertyName:@"storageSize" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"storageSize"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.subscriptionLevel = nil;
    self.fee = nil;
    self.storageSize = nil;
    self.any = nil;
    [super dealloc];
}

@end