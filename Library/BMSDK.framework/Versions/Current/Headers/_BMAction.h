// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to BMAction.h instead.

#import <CoreData/CoreData.h>
#import "BMObject.h"

extern const struct BMActionAttributes {
	__unsafe_unretained NSString *actionType;
	__unsafe_unretained NSString *activationProximity;
	__unsafe_unretained NSString *content;
	__unsafe_unretained NSString *notificationMessage;
	__unsafe_unretained NSString *url;
} BMActionAttributes;

extern const struct BMActionRelationships {
	__unsafe_unretained NSString *beacon;
} BMActionRelationships;

extern const struct BMActionFetchedProperties {
} BMActionFetchedProperties;

@class BMBeacon;







@interface BMActionID : NSManagedObjectID {}
@end

@interface _BMAction : BMObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (BMActionID*)objectID;





@property (nonatomic, strong) NSString* actionType;



//- (BOOL)validateActionType:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* activationProximity;



//- (BOOL)validateActivationProximity:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* content;



//- (BOOL)validateContent:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* notificationMessage;



//- (BOOL)validateNotificationMessage:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* url;



//- (BOOL)validateUrl:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) BMBeacon *beacon;

//- (BOOL)validateBeacon:(id*)value_ error:(NSError**)error_;





@end

@interface _BMAction (CoreDataGeneratedAccessors)

@end

@interface _BMAction (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveActionType;
- (void)setPrimitiveActionType:(NSString*)value;




- (NSString*)primitiveActivationProximity;
- (void)setPrimitiveActivationProximity:(NSString*)value;




- (NSString*)primitiveContent;
- (void)setPrimitiveContent:(NSString*)value;




- (NSString*)primitiveNotificationMessage;
- (void)setPrimitiveNotificationMessage:(NSString*)value;




- (NSString*)primitiveUrl;
- (void)setPrimitiveUrl:(NSString*)value;





- (BMBeacon*)primitiveBeacon;
- (void)setPrimitiveBeacon:(BMBeacon*)value;


@end
