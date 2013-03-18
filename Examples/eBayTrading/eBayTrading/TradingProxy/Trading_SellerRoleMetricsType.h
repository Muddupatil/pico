// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Specifies 1 year feedback metrics for a seller.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellerRoleMetricsType : NSObject <PicoBindable> {

@private
    NSNumber *_positiveFeedbackLeftCount;
    NSNumber *_negativeFeedbackLeftCount;
    NSNumber *_neutralFeedbackLeftCount;
    NSNumber *_feedbackLeftPercent;
    NSNumber *_repeatBuyerCount;
    NSNumber *_repeatBuyerPercent;
    NSNumber *_uniqueBuyerCount;
    NSNumber *_transactionPercent;
    NSNumber *_crossBorderTransactionCount;
    NSNumber *_crossBorderTransactionPercent;
    NSMutableArray *_any;

}


/**
 
 Count of positive feedback entries given as a seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *positiveFeedbackLeftCount;

/**
 
 Count of negative feedback entries given as a seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *negativeFeedbackLeftCount;

/**
 
 Count of neutral feedback entries given as a seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *neutralFeedbackLeftCount;

/**
 
 Percentage of leaving feedback as a seller.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *feedbackLeftPercent;

/**
 
 Number of buyers who bought more than once from this seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *repeatBuyerCount;

/**
 
 Percentage of repeat buyers.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *repeatBuyerPercent;

/**
 
 Count of unique buyers from this seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *uniqueBuyerCount;

/**
 
 Percentage of number of times a member has sold successfully vs. the number of
 times a member has bought an item in the preceding 365 days.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *transactionPercent;

/**
 
 The count of Cross-Border Trade order line items.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *crossBorderTransactionCount;

/**
 
 The percentage of order line items that are Cross-Border Trade order line items.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *crossBorderTransactionPercent;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end