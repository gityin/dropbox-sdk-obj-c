///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGEmmAddExceptionDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `EmmAddExceptionDetails` struct.
///
/// Added an exception for one or more team members to optionally use the
/// regular Dropbox app when EMM is enabled.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGEmmAddExceptionDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `EmmAddExceptionDetails` struct.
///
@interface DBTEAMLOGEmmAddExceptionDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGEmmAddExceptionDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGEmmAddExceptionDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGEmmAddExceptionDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGEmmAddExceptionDetails *)instance;

///
/// Deserializes `DBTEAMLOGEmmAddExceptionDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGEmmAddExceptionDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGEmmAddExceptionDetails` object.
///
+ (DBTEAMLOGEmmAddExceptionDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
