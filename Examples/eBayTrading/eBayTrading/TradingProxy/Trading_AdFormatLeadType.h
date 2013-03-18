// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AddressType;
@class Trading_MemberMessageExchangeArrayType;
@class Trading_AmountType;

/**
 
 Contains prospective buyer contact information and other details associated with
 a lead for an ad format listing.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_AdFormatLeadType : NSObject <PicoBindable> {

@private
    NSString *_additionalInformation;
    Trading_AddressType *_address;
    NSString *_bestTimeToCall;
    NSString *_email;
    NSDate *_submittedTime;
    NSString *_itemID;
    NSString *_itemTitle;
    NSString *_userID;
    Trading_MemberMessageExchangeArrayType *_memberMessage;
    NSString *_status;
    Trading_AmountType *_leadFee;
    NSString *_externalEmail;
    NSString *_purchaseTimeFrame;
    NSString *_tradeInYear;
    NSString *_tradeInMake;
    NSString *_tradeInModel;
    NSNumber *_financingAnswer;
    NSNumber *_answer1;
    NSNumber *_answer2;
    NSMutableArray *_any;

}


/**
 
 Message sent from the prospective buyer to the seller. Same
 content as in the AdFormatLead.MemberMessage.MemberMessageExchange.Question.Body node (that is only displayed if IncludeMemberMessages =
 true is included in the request). The advantage of
 retrieving the MemberMessageExchange node, however, is that
 you retrieve the entire exchange between the seller and the
 lead.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *additionalInformation;

/**
 
 Address information for the prospective buyer.
 Not returned or returned self-closed if information is unavailable.
 
 
 type : class Trading_AddressType
*/
@property (nonatomic, retain) Trading_AddressType *address;

/**
 
 The time of day when the prospective buyer prefers to be contacted by the
 seller.
 Not returned if information is unavailable.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *bestTimeToCall;

/**
 
 Email address for the prospective buyer. If the prospective buyer chooses to
 hide his email address when contacting the seller, this element contains two
 dashes (--) instead of an email address.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *email;

/**
 
 Date and time (in GMT) that the lead was submitted.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *submittedTime;

/**
 
 The ID of the item that the lead is for.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 The title of the item listing.
 <br><br>
 <span class="tablenote"><b>Note:</b>
 The maximum length of an eBay Item Title is increasing to 80 characters in
 Version 735.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemTitle;

/**
 
 The eBay ID of the user who is interested in the seller's item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *userID;

/**
 
 Contains any mail message content shared between the seller and lead.
 
 
 type : class Trading_MemberMessageExchangeArrayType
*/
@property (nonatomic, retain) Trading_MemberMessageExchangeArrayType *memberMessage;

/**
 
 Status of the lead.
 
 
 type: string constant in Trading_AdFormatLeadStatusCodeType.h
*/
@property (nonatomic, retain) NSString *status;

/**
 
 The pay-per-lead feature is no longer available, and this field is scheduled to 
 be removed from the WSDL.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *leadFee;

/**
 
 Email address for the prospective buyer as entered in the lead form on the View
 Item page. Provides a way for sellers to contact prospective buyers who choose not to
 log in to eBay. This applies to only eBay Motors and eBay Motors categories.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *externalEmail;

/**
 
 Prospective buyer's time frame for purchasing a vehicle as entered in the
 Lead form on View Item page for eBay Motors and eBay Motors categories.
 Purchasing Time Frames include:
 <ul>
 <li>
 within next 3 days
 </li>
 <li>
 within a week
 </li>
 <li>
 within a month
 </li>
 <li>
 within three months
 </li>
 <li>
 in more than three months
 </li>
 <li>
 within an undecided time frame
 </li>
 </ul>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *purchaseTimeFrame;

/**
 
 The year of the vehicle the prospective buyer would like to trade in. Entered on
 the lead form on the View Item page. Applies to eBay Motors and Motors categories
 only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *tradeInYear;

/**
 
  The make of the vehicle the prospective buyer would like to trade in. Entered on
  the lead form on the View Item page. Applies to eBay Motors and Motors categories
  only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *tradeInMake;

/**
 
 The model of the vehicle the prospective buyer would like to trade in. Entered on the lead form on the View Item page.Applies to eBay Motors and Motors categories only.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *tradeInModel;

/**
 
 Prospective buyer answer whether or not the prospective buyer would like
 financing. Entered on the lead form on the View Item page. Applies to eBay Motors
 and Motors categories only. Financing response meanings: 0= no response,1= yes, 2=
 no.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *financingAnswer;

/**
 
 This field corresponds to a configurable question on the lead form in the View
 Item web page. The corresponding question is site-specific. To determine the
 question for a specific site, you must view the form in the web flow for the given
 site. This field applies to Classified Ad format listings in Motors categories
 only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *answer1;

/**
 
 This field corresponds to a configurable question on the lead form in the View
 Item web page. The corresponding question is site-specific. To determine the
 question for a specific site, you must view the form in the web flow for the given
 site. This field applies to Classified Ad format listings in Motors categories
 only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *answer2;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end