// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ItemType;
@class Trading_DisputeMessageType;
@class Trading_DisputeResolutionType;

/**
 
 Contains all information describing a dispute.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_DisputeType : NSObject <PicoBindable> {

@private
    NSString *_disputeID;
    NSString *_disputeRecordType;
    NSString *_disputeState;
    NSString *_disputeStatus;
    NSString *_otherPartyRole;
    NSString *_otherPartyName;
    NSString *_userRole;
    NSString *_buyerUserID;
    NSString *_sellerUserID;
    NSString *_transactionID;
    Trading_ItemType *_item;
    NSString *_disputeReason;
    NSString *_disputeExplanation;
    NSString *_disputeCreditEligibility;
    NSDate *_disputeCreatedTime;
    NSDate *_disputeModifiedTime;
    NSMutableArray *_disputeResolution;
    NSMutableArray *_disputeMessage;
    NSNumber *_escalation;
    NSNumber *_purchaseProtection;
    NSString *_orderLineItemID;
    NSMutableArray *_any;

}


/**
 
 The unique identifier of an eBay dispute.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *disputeID;

/**
 
 A value to indicate the type of dispute.
 
 
 type: string constant in Trading_DisputeRecordTypeCodeType.h
*/
@property (nonatomic, retain) NSString *disputeRecordType;

/**
 
 The internal state of the dispute. The value determines
 which values of <b>DisputeActivity</b> are valid when responding
 to a dispute.
 
 
 type: string constant in Trading_DisputeStateCodeType.h
*/
@property (nonatomic, retain) NSString *disputeState;

/**
 
 The status of the dispute, which provides additional
 information about the dispute state.
 
 
 type: string constant in Trading_DisputeStatusCodeType.h
*/
@property (nonatomic, retain) NSString *disputeStatus;

/**
 
 The role of the person involved in the dispute who is
 not taking action or requesting information. The role is
 either <b>Buyer</b> or <b>Seller</b>.
 
 
 type: string constant in Trading_TradingRoleCodeType.h
*/
@property (nonatomic, retain) NSString *otherPartyRole;

/**
 
 The user name of the person involved in the dispute who
 is not taking action or requesting information. 
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *otherPartyName;

/**
 
   The role of the person involved in the dispute who is taking action or
   requesting information. The role is either <b>Buyer</b> or <b>Seller</b>.
 
 
 type: string constant in Trading_TradingRoleCodeType.h
*/
@property (nonatomic, retain) NSString *userRole;

/**
 
 The eBay user ID of the buyer involved in the dispute.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerUserID;

/**
 
 The eBay user ID of the seller involved in the dispute.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerUserID;

/**
 
 The unique identifier of the order line item (transaction) under dispute. An
 order line item is created once there is a commitment from a
 buyer to purchase an item. In the case of <b>GetDispute</b> and <b>GetUserDisputes</b>
 responses, this value identifies the order line item involved in the
 dispute.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 Container consisting of high-level details about the item involved in the
 dispute. 
 
 
 type : class Trading_ItemType
*/
@property (nonatomic, retain) Trading_ItemType *item;

/**
 
 The top-level reason for the dispute. The value of <b>DisputeReason</b>
 determines which values of <b>DisputeExplanation</b> are valid.
 See <b>DisputeExplanationCodeList</b> for details.
 
 
 type: string constant in Trading_DisputeReasonCodeType.h
*/
@property (nonatomic, retain) NSString *disputeReason;

/**
 
 The detailed explanation for the dispute. Valid values
 depend on the value of <b>DisputeReason</b>. See <b>DisputeExplanationCodeList</b>
 for details.
 
 
 type: string constant in Trading_DisputeExplanationCodeType.h
*/
@property (nonatomic, retain) NSString *disputeExplanation;

/**
 
 A value to indicate whether or not the seller is currently eligible for a Final Value Fee credit. This tag
 only indicates credit eligibility and does not mean that the case can be
 closed. (Credit eligibility determines whether the seller gets the Final Value
 Fee back when the dispute is closed.) The value is usually eligible until 4
 days (for new flow) or 7 days (for old flow) after the dispute was created
 unless the dispute is closed with buyer payment or Final Value Fee credit has
 already been granted.
 
 
 type: string constant in Trading_DisputeCreditEligibilityCodeType.h
*/
@property (nonatomic, retain) NSString *disputeCreditEligibility;

/**
 
 The date and time the dispute was created, in GMT.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *disputeCreatedTime;

/**
 
 The date and time the dispute was modified, in GMT.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *disputeModifiedTime;

/**
 
 The action resulting from the dispute resolution. The
 action might include a Final Value Fee credit to the seller, a strike
 to the buyer, a reversal, or an appeal.
 
 
 entry type : class Trading_DisputeResolutionType
*/

@property (nonatomic, retain) NSMutableArray *disputeResolution;

/**
 
 A response or message posted to a dispute, either by
 an application or by a user on the eBay site.
 
 
 entry type : class Trading_DisputeMessageType
*/

@property (nonatomic, retain) NSMutableArray *disputeMessage;

/**
 
 Whether the buyer can close a dispute unhappy and escalate it
 to the eBay Standard Purchase Protection Program. To escalate, the buyer
 must be eligible for the PPP. Used in Item Not Received disputes.
     
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *escalation;

/**
 
 Whether the buyer is eligible for the eBay Standard Purchase Protection
 Program. The eligibility rules are described in the eBay site online help.
 Used in Item Not Received disputes.
     
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *purchaseProtection;

/**
 
    <b>OrderLineItemID</b> is a unique identifier for an eBay order line item and is
 based upon the concatenation of <b>ItemID</b> and <b>TransactionID</b>, with a hyphen in
 between these two IDs. In the case of <b>GetDispute</b> and <b>GetUserDisputes</b>
 responses, this value identifies the order line item involved in the
 dispute.
 <br>
    
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderLineItemID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end