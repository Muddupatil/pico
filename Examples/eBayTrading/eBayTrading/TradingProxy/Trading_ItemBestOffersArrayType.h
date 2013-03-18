// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ItemBestOffersType;

/**
 
 A collection of details about the best offers received for a specific item. Empty if there are no best offers. Includes the buyer and seller messages only if
 the ReturnAll detail level is used.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ItemBestOffersArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_itemBestOffers;
    NSMutableArray *_any;

}


/**
 
 A collection of details about the best offers received for a specific item. Empty if
 there are no best offers. Includes the buyer and seller messages only if the ReturnAll
 detail level is used.
 
 
 entry type : class Trading_ItemBestOffersType
*/

@property (nonatomic, retain) NSMutableArray *itemBestOffers;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end