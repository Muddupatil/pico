// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetOrderTransactionsResponseType.h"
#import "Trading_OrderArrayType.h"

@implementation Trading_GetOrderTransactionsResponseType

@synthesize orderArray = _orderArray;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetOrderTransactionsResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OrderArray" propertyName:@"orderArray" type:PICO_TYPE_OBJECT clazz:[Trading_OrderArrayType class]];
    [map setObject:ps forKey:@"orderArray"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.orderArray = nil;
    [super dealloc];
}

@end