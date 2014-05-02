// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to BMConfig.h instead.

#import <CoreData/CoreData.h>
#import "BMObject.h"

extern const struct BMConfigAttributes {
	__unsafe_unretained NSString *companyId;
	__unsafe_unretained NSString *homeScreenContent;
	__unsafe_unretained NSString *homeScreenType;
	__unsafe_unretained NSString *homeScreenURL;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *notificationThrottle;
	__unsafe_unretained NSString *triggerType;
} BMConfigAttributes;

extern const struct BMConfigRelationships {
} BMConfigRelationships;

extern const struct BMConfigFetchedProperties {
} BMConfigFetchedProperties;










@interface BMConfigID : NSManagedObjectID {}
@end

@interface _BMConfig : BMObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (BMConfigID*)objectID;





@property (nonatomic, strong) NSNumber* companyId;



@property int32_t companyIdValue;
- (int32_t)companyIdValue;
- (void)setCompanyIdValue:(int32_t)value_;

//- (BOOL)validateCompanyId:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* homeScreenContent;



//- (BOOL)validateHomeScreenContent:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* homeScreenType;



//- (BOOL)validateHomeScreenType:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* homeScreenURL;



//- (BOOL)validateHomeScreenURL:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* name;



//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* notificationThrottle;



@property int32_t notificationThrottleValue;
- (int32_t)notificationThrottleValue;
- (void)setNotificationThrottleValue:(int32_t)value_;

//- (BOOL)validateNotificationThrottle:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* triggerType;



//- (BOOL)validateTriggerType:(id*)value_ error:(NSError**)error_;






@end

@interface _BMConfig (CoreDataGeneratedAccessors)

@end

@interface _BMConfig (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveCompanyId;
- (void)setPrimitiveCompanyId:(NSNumber*)value;

- (int32_t)primitiveCompanyIdValue;
- (void)setPrimitiveCompanyIdValue:(int32_t)value_;




- (NSString*)primitiveHomeScreenContent;
- (void)setPrimitiveHomeScreenContent:(NSString*)value;




- (NSString*)primitiveHomeScreenType;
- (void)setPrimitiveHomeScreenType:(NSString*)value;




- (NSString*)primitiveHomeScreenURL;
- (void)setPrimitiveHomeScreenURL:(NSString*)value;




- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;




- (NSNumber*)primitiveNotificationThrottle;
- (void)setPrimitiveNotificationThrottle:(NSNumber*)value;

- (int32_t)primitiveNotificationThrottleValue;
- (void)setPrimitiveNotificationThrottleValue:(int32_t)value_;




- (NSString*)primitiveTriggerType;
- (void)setPrimitiveTriggerType:(NSString*)value;




@end
