// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SetPromotionalSaleListingsRequestType.h"
#import "Trading_ItemIDArrayType.h"

@implementation Trading_SetPromotionalSaleListingsRequestType

@synthesize promotionalSaleID = _promotionalSaleID;
@synthesize action = _action;
@synthesize promotionalSaleItemIDArray = _promotionalSaleItemIDArray;
@synthesize storeCategoryID = _storeCategoryID;
@synthesize categoryID = _categoryID;
@synthesize allFixedPriceItems = _allFixedPriceItems;
@synthesize allStoreInventoryItems = _allStoreInventoryItems;
@synthesize allAuctionItems = _allAuctionItems;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"SetPromotionalSaleListingsRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PromotionalSaleID" propertyName:@"promotionalSaleID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"promotionalSaleID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Action" propertyName:@"action" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"action"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PromotionalSaleItemIDArray" propertyName:@"promotionalSaleItemIDArray" type:PICO_TYPE_OBJECT clazz:[Trading_ItemIDArrayType class]];
    [map setObject:ps forKey:@"promotionalSaleItemIDArray"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StoreCategoryID" propertyName:@"storeCategoryID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"storeCategoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AllFixedPriceItems" propertyName:@"allFixedPriceItems" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"allFixedPriceItems"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AllStoreInventoryItems" propertyName:@"allStoreInventoryItems" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"allStoreInventoryItems"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AllAuctionItems" propertyName:@"allAuctionItems" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"allAuctionItems"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.promotionalSaleID = nil;
    self.action = nil;
    self.promotionalSaleItemIDArray = nil;
    self.storeCategoryID = nil;
    self.categoryID = nil;
    self.allFixedPriceItems = nil;
    self.allStoreInventoryItems = nil;
    self.allAuctionItems = nil;
    [super dealloc];
}

@end