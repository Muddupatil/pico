// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_PictureManagerFolderType.h"
#import "Trading_PictureManagerPictureType.h"

@implementation Trading_PictureManagerFolderType

@synthesize folderID = _folderID;
@synthesize name = _name;
@synthesize picture = _picture;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FolderID" propertyName:@"folderID" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"folderID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Name" propertyName:@"name" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"name"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Picture" propertyName:@"picture" type:PICO_TYPE_OBJECT clazz:[Trading_PictureManagerPictureType class]];
    [map setObject:ps forKey:@"picture"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.folderID = nil;
    self.name = nil;
    self.picture = nil;
    self.any = nil;
    [super dealloc];
}

@end