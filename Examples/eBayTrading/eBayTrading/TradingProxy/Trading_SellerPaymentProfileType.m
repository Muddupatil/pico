// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SellerPaymentProfileType.h"

@implementation Trading_SellerPaymentProfileType

@synthesize paymentProfileID = _paymentProfileID;
@synthesize paymentProfileName = _paymentProfileName;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PaymentProfileID" propertyName:@"paymentProfileID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"paymentProfileID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PaymentProfileName" propertyName:@"paymentProfileName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"paymentProfileName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.paymentProfileID = nil;
    self.paymentProfileName = nil;
    self.any = nil;
    [super dealloc];
}

@end