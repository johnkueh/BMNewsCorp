// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to BMObject.h instead.

#import <CoreData/CoreData.h>


extern const struct BMObjectAttributes {
	__unsafe_unretained NSString *createdAt;
	__unsafe_unretained NSString *id;
	__unsafe_unretained NSString *updatedAt;
} BMObjectAttributes;

extern const struct BMObjectRelationships {
} BMObjectRelationships;

extern const struct BMObjectFetchedProperties {
} BMObjectFetchedProperties;






@interface BMObjectID : NSManagedObjectID {}
@end

@interface _BMObject : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (BMObjectID*)objectID;





@property (nonatomic, strong) NSDate* createdAt;



//- (BOOL)validateCreatedAt:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* id;



@property int64_t idValue;
- (int64_t)idValue;
- (void)setIdValue:(int64_t)value_;

//- (BOOL)validateId:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSDate* updatedAt;



//- (BOOL)validateUpdatedAt:(id*)value_ error:(NSError**)error_;






@end

@interface _BMObject (CoreDataGeneratedAccessors)

@end

@interface _BMObject (CoreDataGeneratedPrimitiveAccessors)


- (NSDate*)primitiveCreatedAt;
- (void)setPrimitiveCreatedAt:(NSDate*)value;




- (NSNumber*)primitiveId;
- (void)setPrimitiveId:(NSNumber*)value;

- (int64_t)primitiveIdValue;
- (void)setPrimitiveIdValue:(int64_t)value_;




- (NSDate*)primitiveUpdatedAt;
- (void)setPrimitiveUpdatedAt:(NSDate*)value;




@end
