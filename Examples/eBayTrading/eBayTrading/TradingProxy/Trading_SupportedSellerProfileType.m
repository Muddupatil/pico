// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SupportedSellerProfileType.h"
#import "Trading_CategoryGroupType.h"

@implementation Trading_SupportedSellerProfileType

@synthesize profileID = _profileID;
@synthesize profileType = _profileType;
@synthesize profileName = _profileName;
@synthesize shortSummary = _shortSummary;
@synthesize categoryGroup = _categoryGroup;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProfileID" propertyName:@"profileID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"profileID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProfileType" propertyName:@"profileType" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"profileType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProfileName" propertyName:@"profileName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"profileName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShortSummary" propertyName:@"shortSummary" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"shortSummary"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryGroup" propertyName:@"categoryGroup" type:PICO_TYPE_OBJECT clazz:[Trading_CategoryGroupType class]];
    [map setObject:ps forKey:@"categoryGroup"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.profileID = nil;
    self.profileType = nil;
    self.profileName = nil;
    self.shortSummary = nil;
    self.categoryGroup = nil;
    [super dealloc];
}

@end