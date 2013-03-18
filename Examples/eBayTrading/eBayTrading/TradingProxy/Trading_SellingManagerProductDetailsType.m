// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SellingManagerProductDetailsType.h"
#import "Trading_SellingManagerVendorDetailsType.h"
#import "Trading_AmountType.h"

@implementation Trading_SellingManagerProductDetailsType

@synthesize productName = _productName;
@synthesize productID = _productID;
@synthesize customLabel = _customLabel;
@synthesize quantityAvailable = _quantityAvailable;
@synthesize unitCost = _unitCost;
@synthesize folderID = _folderID;
@synthesize restockAlert = _restockAlert;
@synthesize restockThreshold = _restockThreshold;
@synthesize vendorInfo = _vendorInfo;
@synthesize note = _note;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProductName" propertyName:@"productName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"productName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProductID" propertyName:@"productID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"productID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CustomLabel" propertyName:@"customLabel" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"customLabel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"QuantityAvailable" propertyName:@"quantityAvailable" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"quantityAvailable"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UnitCost" propertyName:@"unitCost" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"unitCost"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FolderID" propertyName:@"folderID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"folderID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RestockAlert" propertyName:@"restockAlert" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"restockAlert"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RestockThreshold" propertyName:@"restockThreshold" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"restockThreshold"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VendorInfo" propertyName:@"vendorInfo" type:PICO_TYPE_OBJECT clazz:[Trading_SellingManagerVendorDetailsType class]];
    [map setObject:ps forKey:@"vendorInfo"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Note" propertyName:@"note" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"note"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.productName = nil;
    self.productID = nil;
    self.customLabel = nil;
    self.quantityAvailable = nil;
    self.unitCost = nil;
    self.folderID = nil;
    self.restockAlert = nil;
    self.restockThreshold = nil;
    self.vendorInfo = nil;
    self.note = nil;
    self.any = nil;
    [super dealloc];
}

@end