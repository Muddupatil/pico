// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetSellingManagerInventoryResponseType.h"
#import "Trading_PaginationResultType.h"
#import "Trading_SellingManagerProductType.h"

@implementation Trading_GetSellingManagerInventoryResponseType

@synthesize inventoryCountLastCalculatedDate = _inventoryCountLastCalculatedDate;
@synthesize sellingManagerProduct = _sellingManagerProduct;
@synthesize paginationResult = _paginationResult;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetSellingManagerInventoryResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"InventoryCountLastCalculatedDate" propertyName:@"inventoryCountLastCalculatedDate" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"inventoryCountLastCalculatedDate"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"SellingManagerProduct" propertyName:@"sellingManagerProduct" type:PICO_TYPE_OBJECT clazz:[Trading_SellingManagerProductType class]];
    [map setObject:ps forKey:@"sellingManagerProduct"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PaginationResult" propertyName:@"paginationResult" type:PICO_TYPE_OBJECT clazz:[Trading_PaginationResultType class]];
    [map setObject:ps forKey:@"paginationResult"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.inventoryCountLastCalculatedDate = nil;
    self.sellingManagerProduct = nil;
    self.paginationResult = nil;
    [super dealloc];
}

@end