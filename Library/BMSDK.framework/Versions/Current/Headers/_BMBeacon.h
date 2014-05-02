// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to BMBeacon.h instead.

#import <CoreData/CoreData.h>
#import "BMObject.h"

extern const struct BMBeaconAttributes {
	__unsafe_unretained NSString *activatedAt;
	__unsafe_unretained NSString *areaName;
	__unsafe_unretained NSString *batteryLife;
	__unsafe_unretained NSString *beaconType;
	__unsafe_unretained NSString *hardwareUUID;
	__unsafe_unretained NSString *interactionCount;
	__unsafe_unretained NSString *latitude;
	__unsafe_unretained NSString *longitude;
	__unsafe_unretained NSString *major;
	__unsafe_unretained NSString *measuredPower;
	__unsafe_unretained NSString *minor;
	__unsafe_unretained NSString *proximityUUID;
	__unsafe_unretained NSString *txPower;
} BMBeaconAttributes;

extern const struct BMBeaconRelationships {
	__unsafe_unretained NSString *actions;
} BMBeaconRelationships;

extern const struct BMBeaconFetchedProperties {
} BMBeaconFetchedProperties;

@class BMAction;















@interface BMBeaconID : NSManagedObjectID {}
@end

@interface _BMBeacon : BMObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (BMBeaconID*)objectID;





@property (nonatomic, strong) NSDate* activatedAt;



//- (BOOL)validateActivatedAt:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* areaName;



//- (BOOL)validateAreaName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* batteryLife;



@property double batteryLifeValue;
- (double)batteryLifeValue;
- (void)setBatteryLifeValue:(double)value_;

//- (BOOL)validateBatteryLife:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* beaconType;



//- (BOOL)validateBeaconType:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* hardwareUUID;



//- (BOOL)validateHardwareUUID:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* interactionCount;



@property int64_t interactionCountValue;
- (int64_t)interactionCountValue;
- (void)setInteractionCountValue:(int64_t)value_;

//- (BOOL)validateInteractionCount:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* latitude;



@property double latitudeValue;
- (double)latitudeValue;
- (void)setLatitudeValue:(double)value_;

//- (BOOL)validateLatitude:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* longitude;



@property double longitudeValue;
- (double)longitudeValue;
- (void)setLongitudeValue:(double)value_;

//- (BOOL)validateLongitude:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* major;



@property int16_t majorValue;
- (int16_t)majorValue;
- (void)setMajorValue:(int16_t)value_;

//- (BOOL)validateMajor:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* measuredPower;



@property int64_t measuredPowerValue;
- (int64_t)measuredPowerValue;
- (void)setMeasuredPowerValue:(int64_t)value_;

//- (BOOL)validateMeasuredPower:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* minor;



@property int16_t minorValue;
- (int16_t)minorValue;
- (void)setMinorValue:(int16_t)value_;

//- (BOOL)validateMinor:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* proximityUUID;



//- (BOOL)validateProximityUUID:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* txPower;



@property int64_t txPowerValue;
- (int64_t)txPowerValue;
- (void)setTxPowerValue:(int64_t)value_;

//- (BOOL)validateTxPower:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet *actions;

- (NSMutableSet*)actionsSet;





@end

@interface _BMBeacon (CoreDataGeneratedAccessors)

- (void)addActions:(NSSet*)value_;
- (void)removeActions:(NSSet*)value_;
- (void)addActionsObject:(BMAction*)value_;
- (void)removeActionsObject:(BMAction*)value_;

@end

@interface _BMBeacon (CoreDataGeneratedPrimitiveAccessors)


- (NSDate*)primitiveActivatedAt;
- (void)setPrimitiveActivatedAt:(NSDate*)value;




- (NSString*)primitiveAreaName;
- (void)setPrimitiveAreaName:(NSString*)value;




- (NSNumber*)primitiveBatteryLife;
- (void)setPrimitiveBatteryLife:(NSNumber*)value;

- (double)primitiveBatteryLifeValue;
- (void)setPrimitiveBatteryLifeValue:(double)value_;




- (NSString*)primitiveBeaconType;
- (void)setPrimitiveBeaconType:(NSString*)value;




- (NSString*)primitiveHardwareUUID;
- (void)setPrimitiveHardwareUUID:(NSString*)value;




- (NSNumber*)primitiveInteractionCount;
- (void)setPrimitiveInteractionCount:(NSNumber*)value;

- (int64_t)primitiveInteractionCountValue;
- (void)setPrimitiveInteractionCountValue:(int64_t)value_;




- (NSNumber*)primitiveLatitude;
- (void)setPrimitiveLatitude:(NSNumber*)value;

- (double)primitiveLatitudeValue;
- (void)setPrimitiveLatitudeValue:(double)value_;




- (NSNumber*)primitiveLongitude;
- (void)setPrimitiveLongitude:(NSNumber*)value;

- (double)primitiveLongitudeValue;
- (void)setPrimitiveLongitudeValue:(double)value_;




- (NSNumber*)primitiveMajor;
- (void)setPrimitiveMajor:(NSNumber*)value;

- (int16_t)primitiveMajorValue;
- (void)setPrimitiveMajorValue:(int16_t)value_;




- (NSNumber*)primitiveMeasuredPower;
- (void)setPrimitiveMeasuredPower:(NSNumber*)value;

- (int64_t)primitiveMeasuredPowerValue;
- (void)setPrimitiveMeasuredPowerValue:(int64_t)value_;




- (NSNumber*)primitiveMinor;
- (void)setPrimitiveMinor:(NSNumber*)value;

- (int16_t)primitiveMinorValue;
- (void)setPrimitiveMinorValue:(int16_t)value_;




- (NSString*)primitiveProximityUUID;
- (void)setPrimitiveProximityUUID:(NSString*)value;




- (NSNumber*)primitiveTxPower;
- (void)setPrimitiveTxPower:(NSNumber*)value;

- (int64_t)primitiveTxPowerValue;
- (void)setPrimitiveTxPowerValue:(int64_t)value_;





- (NSMutableSet*)primitiveActions;
- (void)setPrimitiveActions:(NSMutableSet*)value;


@end
