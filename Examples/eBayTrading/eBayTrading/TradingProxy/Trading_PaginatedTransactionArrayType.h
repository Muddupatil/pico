// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_TransactionArrayType;
@class Trading_PaginationResultType;

/**
 
 Contains a paginated list of order line items.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_PaginatedTransactionArrayType : NSObject <PicoBindable> {

@private
    Trading_TransactionArrayType *_transactionArray;
    Trading_PaginationResultType *_paginationResult;

}


/**
 
 Contains a list of Transaction objects. Returned as an
 empty tag if no applicable order line items exist.
 
 
 type : class Trading_TransactionArrayType
*/
@property (nonatomic, retain) Trading_TransactionArrayType *transactionArray;

/**
 
 Provides information about the list of order line items,
 including number of pages and number of entries.
 
 
 type : class Trading_PaginationResultType
*/
@property (nonatomic, retain) Trading_PaginationResultType *paginationResult;


@end