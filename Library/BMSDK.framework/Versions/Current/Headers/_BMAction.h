// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to BMAction.h instead.

#import <CoreData/CoreData.h>
#import "BMObject.h"

extern const struct BMActionAttributes {
	__unsafe_unretained NSString *actionType;
	__unsafe_unretained NSString *activationCount;
	__unsafe_unretained NSString *activationProximity;
	__unsafe_unretained NSString *content;
	__unsafe_unretained NSString *maxActivation;
	__unsafe_unretained NSString *notificationMessage;
	__unsafe_unretained NSString *url;
} BMActionAttributes;

extern const struct BMActionRelationships {
	__unsafe_unretained NSString *beacons;
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





@property (nonatomic, strong) NSNumber* activationCount;



@property int32_t activationCountValue;
- (int32_t)activationCountValue;
- (void)setActivationCountValue:(int32_t)value_;

//- (BOOL)validateActivationCount:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* activationProximity;



//- (BOOL)validateActivationProximity:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* content;



//- (BOOL)validateContent:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* maxActivation;



@property int32_t maxActivationValue;
- (int32_t)maxActivationValue;
- (void)setMaxActivationValue:(int32_t)value_;

//- (BOOL)validateMaxActivation:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* notificationMessage;



//- (BOOL)validateNotificationMessage:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* url;



//- (BOOL)validateUrl:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet *beacons;

- (NSMutableSet*)beaconsSet;





@end

@interface _BMAction (CoreDataGeneratedAccessors)

- (void)addBeacons:(NSSet*)value_;
- (void)removeBeacons:(NSSet*)value_;
- (void)addBeaconsObject:(BMBeacon*)value_;
- (void)removeBeaconsObject:(BMBeacon*)value_;

@end

@interface _BMAction (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveActionType;
- (void)setPrimitiveActionType:(NSString*)value;




- (NSNumber*)primitiveActivationCount;
- (void)setPrimitiveActivationCount:(NSNumber*)value;

- (int32_t)primitiveActivationCountValue;
- (void)setPrimitiveActivationCountValue:(int32_t)value_;




- (NSString*)primitiveActivationProximity;
- (void)setPrimitiveActivationProximity:(NSString*)value;




- (NSString*)primitiveContent;
- (void)setPrimitiveContent:(NSString*)value;




- (NSNumber*)primitiveMaxActivation;
- (void)setPrimitiveMaxActivation:(NSNumber*)value;

- (int32_t)primitiveMaxActivationValue;
- (void)setPrimitiveMaxActivationValue:(int32_t)value_;




- (NSString*)primitiveNotificationMessage;
- (void)setPrimitiveNotificationMessage:(NSString*)value;




- (NSString*)primitiveUrl;
- (void)setPrimitiveUrl:(NSString*)value;





- (NSMutableSet*)primitiveBeacons;
- (void)setPrimitiveBeacons:(NSMutableSet*)value;


@end
