// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Container for individual message information.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MemberMessageType : NSObject <PicoBindable> {

@private
    NSString *_messageType;
    NSString *_questionType;
    NSNumber *_emailCopyToSender;
    NSNumber *_hideSendersEmailAddress;
    NSNumber *_displayToPublic;
    NSString *_senderID;
    NSString *_senderEmail;
    NSMutableArray *_recipientID;
    NSString *_subject;
    NSString *_body;
    NSString *_messageID;
    NSString *_parentMessageID;
    NSMutableArray *_any;

}


/**
 
 The type of message being retrieved. Note that some message
 types can only be created via the eBay Web site.
 
 
 type: string constant in Trading_MessageTypeCodeType.h
*/
@property (nonatomic, retain) NSString *messageType;

/**
 
 The context of the question (e.g. Shipping, General).
 
 
 type: string constant in Trading_QuestionTypeCodeType.h
*/
@property (nonatomic, retain) NSString *questionType;

/**
 
 Specifies whether or not to email a copy of the
 message to the sender. If omitted, this defaults to whatever
 the user set in preferences.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *emailCopyToSender;

/**
 
 Specifies whether or not to hide sender's email address
 from the recipient. If omitted, this defaults to whatever
 the user set in preferences--or on site policy, which
 determines whether or not this field is recognized.
 <br><br> <span class="tablenote"><b>Note:</b>
 This tag is no longer operational.
 </span>
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *hideSendersEmailAddress;

/**
 
 If True, the member message is viewable in the item listing.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *displayToPublic;

/**
 
 The eBay user ID of the person who asked the question or sent
 the message.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *senderID;

/**
 
 SenderEmail contains the static email address of an eBay member,
 used within the "reply to"
 email address when the eBay member sends a message.
 (Each eBay member is assigned a static alias. The alias is
 used within a static email address.)
 SenderEmail is returned if MessageType is AskSellerQuestion.
 SenderEmail is also returned in the AskSellerQuestion notification.
 The following functionality of this field has been deprecated:
 return of a dynamic email address.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *senderEmail;

/**
 
 Recipient's eBay user ID. For
 AddMemberMessagesAAQToBidder, it must be the seller of an
 item, that item's bidder, or a user who has made an
 offer on that item using Best Offer. Note: maxOccurs is a shared schema
 element and needs to be unbounded for AddMemberMessagesAAQToBidder.
 For AddMemberMessageRTQ, this field is mandatory if ItemID is not in the request.
 For all other uses, there can only be one RecipientID.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *recipientID;

/**
 
 Subject of this email message.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *subject;

/**
 
 The content of the message is input into this string field. HTML formatting is not
 allowed in the body of the message. If plain HTML is used, an error occurs and the 
 message will not go through. If encoded HTML is used, the message may go through but 
 the formatting will not be successful, and the recipient of the message will just 
 see the HTML formatting tags.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *body;

/**
 
 An ID that uniquely identifies a message for a given
 user.
 <br><br>
 This value is not the same as the value used for the
 GetMyMessages MessageID. However, this MessageID value can be
 used as the GetMyMessages ExternalID.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *messageID;

/**
 
 ID number of the question this message is responding to.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *parentMessageID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end