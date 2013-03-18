// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_SupportedSellerProfilesType;

/**
 
   Type defining the <b>SellerProfilePreferences</b> container. This container
 consists of a flag that indicates whether or not the seller has opted into Business
 Policies, as well as a list of Business Policies profiles that have been set up for the 
 seller's account.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform. 
 </span>
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellerProfilePreferencesType : NSObject <PicoBindable> {

@private
    NSNumber *_sellerProfileOptedIn;
    Trading_SupportedSellerProfilesType *_supportedSellerProfiles;

}


/**
 
   Boolean flag indicating whether or not a seller has opted in to Business
  Policies. Sellers must opt in to Business Policies to create and manage payment, 
  return policy, and shipping profiles.
   <br><br>
   <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform. 
 </span>
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *sellerProfileOptedIn;

/**
 
 Container consisting of one or more Business Policies profiles active for a
 seller's account. This container is only returned if SellerProfileOptedIn=true 
 and the seller has one or more Business Policies profiles active on the account.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform. 
 </span>
 
 
 type : class Trading_SupportedSellerProfilesType
*/
@property (nonatomic, retain) Trading_SupportedSellerProfilesType *supportedSellerProfiles;


@end