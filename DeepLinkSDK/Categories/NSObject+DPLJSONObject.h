@import Foundation;

@interface NSObject (DPLJSONObject)

/**
 Returns a JSON compatible version of the receiver.
 
 @discussion
 
 - NSDictionary and NSArray will call `DPLJSONObject' on all of their items.
 - Objects in an NSDictionary not keyed by NSString will be removed.
 - NSNumbers that are NaN or Inf will be represented by a string.
 - JSON incompatible objects will return their description.
 - All NSNulls will be removed because who wants an NSNull.
 
 @see NSJSONSerialization
 */
- (id)DPL_JSONObject;

@end
