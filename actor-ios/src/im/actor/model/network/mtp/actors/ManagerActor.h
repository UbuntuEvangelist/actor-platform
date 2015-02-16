//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/network/mtp/actors/ManagerActor.java
//

#ifndef _MTManagerActor_H_
#define _MTManagerActor_H_

@class AMAtomicIntegerCompat;
@class AMEndpoints;
@class AMExponentialBackoff;
@class DKActorRef;
@class IOSByteArray;
@class MTMTProto;
@protocol AMConnection;

#include "J2ObjC_header.h"
#include "im/actor/model/droidkit/actors/Actor.h"
#include "im/actor/model/droidkit/actors/ActorCreator.h"
#include "im/actor/model/network/ConnectionCallback.h"
#include "im/actor/model/network/CreateConnectionCallback.h"

@interface MTManagerActor : DKActor {
}

+ (DKActorRef *)managerWithMTMTProto:(MTMTProto *)mtProto;

- (instancetype)initWithMTMTProto:(MTMTProto *)mtProto;

- (void)preStart;

- (void)onReceiveWithId:(id)message;

@end

FOUNDATION_EXPORT BOOL MTManagerActor_initialized;
J2OBJC_STATIC_INIT(MTManagerActor)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT DKActorRef *MTManagerActor_managerWithMTMTProto_(MTMTProto *mtProto);

FOUNDATION_EXPORT NSString *MTManagerActor_TAG_;
J2OBJC_STATIC_FIELD_GETTER(MTManagerActor, TAG_, NSString *)

FOUNDATION_EXPORT AMAtomicIntegerCompat *MTManagerActor_NEXT_CONNECTION_;
J2OBJC_STATIC_FIELD_GETTER(MTManagerActor, NEXT_CONNECTION_, AMAtomicIntegerCompat *)
CF_EXTERN_C_END

typedef MTManagerActor ImActorModelNetworkMtpActorsManagerActor;

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor)

@interface MTManagerActor_OutMessage : NSObject {
}

- (instancetype)initWithByteArray:(IOSByteArray *)message
                          withInt:(jint)offset
                          withInt:(jint)len;

- (jint)getOffset;

- (jint)getLen;

- (IOSByteArray *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_OutMessage)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_OutMessage)

@interface MTManagerActor_InMessage : NSObject {
}

- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)offset
                          withInt:(jint)len;

- (IOSByteArray *)getData;

- (jint)getOffset;

- (jint)getLen;

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_InMessage)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_InMessage)

@interface MTManagerActor_NetworkChanged : NSObject {
}

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_NetworkChanged)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_NetworkChanged)

@interface MTManagerActor_PerformConnectionCheck : NSObject {
}

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_PerformConnectionCheck)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_PerformConnectionCheck)

@interface MTManagerActor_ConnectionDie : NSObject {
}

- (instancetype)initWithInt:(jint)connectionId;

- (jint)getConnectionId;

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_ConnectionDie)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_ConnectionDie)

@interface MTManagerActor_ConnectionCreateFailure : NSObject {
}

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_ConnectionCreateFailure)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_ConnectionCreateFailure)

@interface MTManagerActor_ConnectionCreated : NSObject {
}

- (instancetype)initWithInt:(jint)connectionId
           withAMConnection:(id<AMConnection>)connection;

- (jint)getConnectionId;

- (id<AMConnection>)getConnection;

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_ConnectionCreated)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_ConnectionCreated)

@interface MTManagerActor_$1 : NSObject < DKActorCreator > {
}

- (MTManagerActor *)create;

- (instancetype)initWithMTMTProto:(MTMTProto *)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_$1)

@interface MTManagerActor_$2 : NSObject < AMConnectionCallback > {
}

- (void)onMessage:(IOSByteArray *)data withOffset:(jint)offset withLen:(jint)len;

- (void)onConnectionDie;

- (instancetype)initWithMTManagerActor:(MTManagerActor *)outer$
                               withInt:(jint)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_$2)

@interface MTManagerActor_$3 : NSObject < AMCreateConnectionCallback > {
}

- (void)onConnectionCreated:(id<AMConnection>)connection;

- (void)onConnectionCreateError;

- (instancetype)initWithMTManagerActor:(MTManagerActor *)outer$
                               withInt:(jint)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(MTManagerActor_$3)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(MTManagerActor_$3)

#endif // _MTManagerActor_H_
