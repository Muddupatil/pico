// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ItemCompatibilityType.h"
#import "Trading_NameValueListType.h"

@implementation Trading_ItemCompatibilityType

@synthesize delete = _delete;
@synthesize nameValueList = _nameValueList;
@synthesize compatibilityNotes = _compatibilityNotes;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Delete" propertyName:@"delete" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"delete"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"NameValueList" propertyName:@"nameValueList" type:PICO_TYPE_OBJECT clazz:[Trading_NameValueListType class]];
    [map setObject:ps forKey:@"nameValueList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CompatibilityNotes" propertyName:@"compatibilityNotes" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"compatibilityNotes"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.delete = nil;
    self.nameValueList = nil;
    self.compatibilityNotes = nil;
    self.any = nil;
    [super dealloc];
}

@end