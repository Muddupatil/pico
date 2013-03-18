// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type defining the <b>ReturnPolicyDetails.Refund</b> container that is 
 returned in <b>GeteBayDetails</b>. All of the values (along with descriptions 
 for each value) that can be used as a Refund Option when listing an item is returned 
 under the <b>ReturnPolicyDetails.Refund</b> container.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RefundDetailsType : NSObject <PicoBindable> {

@private
    NSString *_refundOption;
    NSString *_description;
    NSMutableArray *_any;

}


/**
 
 Indicates how the seller will compensate the buyer for a returned item. This value can
 be passed in the Add/Revise/Relist family of API calls.
 <br/><br/>
 <span class="tablenote"><b>Note:</b> 
 As of version 771, listings created, revised, or relisted with
 deprecated <b>RefundOption</b> and/or
 <b>ReturnsWithinOption</b> values (using Add/Revise/Relist family of
 API calls) will be blocked.
 <br/><br/>
 For <b>RefundOption</b>, the deprecated values are <b>MerchandiseCredit</b> 
 and <b>Exchange</b>. Instead of these deprecated values, the seller must
 offer a <b>MoneyBack</b> or a <b>MoneyBackOrExchange</b> refund 
 option. Consider using the <b>MoneyBackOrExchange</b> option when you have 
 the depth of inventory to support an exchange for a different size, color, or undamaged
 unit. Otherwise, use the <b>MoneyBack</b> option if you have limited 
 inventory.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *refundOption;

/**
 
 Display string that applications can use to present RefundOption in
 a more user-friendly format (such as in a drop-down list).
 Not applicable as input to the AddItem family of calls. (Use RefundOption instead.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end