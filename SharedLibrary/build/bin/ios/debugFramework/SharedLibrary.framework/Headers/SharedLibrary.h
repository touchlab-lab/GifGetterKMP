#import <Foundation/Foundation.h>

@class SharedLibraryGifResult, SharedLibraryData, SharedLibraryGifResultCompanion, SharedLibraryGifResult$serializer, SharedLibraryKotlinArray, SharedLibraryImages, SharedLibraryDataCompanion, SharedLibraryData$serializer, SharedLibraryOriginal, SharedLibraryImagesCompanion, SharedLibraryImages$serializer, SharedLibraryOriginalCompanion, SharedLibraryOriginal$serializer, SharedLibraryApiError, SharedLibraryKotlinThrowable, SharedLibraryGiphyAPI, SharedLibraryKotlinx_serialization_runtime_nativeEnumDescriptor, SharedLibraryKotlinx_serialization_runtime_nativeSerialKind, SharedLibraryKotlinNothing, SharedLibraryKotlinx_serialization_runtime_nativeUpdateMode, SharedLibraryKotlinx_serialization_runtime_nativeSerialClassDescImpl, SharedLibraryKotlinEnum;

@protocol SharedLibraryKotlinx_serialization_runtime_nativeKSerializer, SharedLibraryKotlinx_serialization_runtime_nativeGeneratedSerializer, SharedLibraryKotlinx_serialization_runtime_nativeSerializationStrategy, SharedLibraryKotlinx_serialization_runtime_nativeEncoder, SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor, SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy, SharedLibraryKotlinx_serialization_runtime_nativeDecoder, SharedLibraryKotlinIterator, SharedLibraryKotlinx_serialization_runtime_nativeCompositeEncoder, SharedLibraryKotlinx_serialization_runtime_nativeSerialContext, SharedLibraryKotlinAnnotation, SharedLibraryKotlinx_serialization_runtime_nativeCompositeDecoder, SharedLibraryKotlinKClass, SharedLibraryKotlinComparable, SharedLibraryKotlinKDeclarationContainer, SharedLibraryKotlinKAnnotatedElement, SharedLibraryKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SharedLibraryMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedLibraryMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SharedLibraryNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SharedLibraryByte : SharedLibraryNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SharedLibraryUByte : SharedLibraryNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SharedLibraryShort : SharedLibraryNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SharedLibraryUShort : SharedLibraryNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SharedLibraryInt : SharedLibraryNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SharedLibraryUInt : SharedLibraryNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SharedLibraryLong : SharedLibraryNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SharedLibraryULong : SharedLibraryNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SharedLibraryFloat : SharedLibraryNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SharedLibraryDouble : SharedLibraryNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SharedLibraryBoolean : SharedLibraryNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GifResult")))
@interface SharedLibraryGifResult : KotlinBase
- (instancetype)initWithData:(NSArray<SharedLibraryData *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedLibraryData *> *)component1 __attribute__((swift_name("component1()")));
- (SharedLibraryGifResult *)doCopyData:(NSArray<SharedLibraryData *> *)data __attribute__((swift_name("doCopy(data:)")));
@property (readonly) NSArray<SharedLibraryData *> *data;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GifResult.Companion")))
@interface SharedLibraryGifResultCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedLibraryKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeKSerializer <SharedLibraryKotlinx_serialization_runtime_nativeSerializationStrategy, SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeGeneratedSerializer <SharedLibraryKotlinx_serialization_runtime_nativeKSerializer>
@required
- (SharedLibraryKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GifResult.$serializer")))
@interface SharedLibraryGifResult$serializer : KotlinBase <SharedLibraryKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedLibraryGifResult *)deserializeDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedLibraryGifResult *)patchDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedLibraryGifResult *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedLibraryGifResult *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data")))
@interface SharedLibraryData : KotlinBase
- (instancetype)initWithImages:(SharedLibraryImages *)images __attribute__((swift_name("init(images:)"))) __attribute__((objc_designated_initializer));
- (SharedLibraryImages *)component1 __attribute__((swift_name("component1()")));
- (SharedLibraryData *)doCopyImages:(SharedLibraryImages *)images __attribute__((swift_name("doCopy(images:)")));
@property (readonly) SharedLibraryImages *images;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data.Companion")))
@interface SharedLibraryDataCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedLibraryKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data.$serializer")))
@interface SharedLibraryData$serializer : KotlinBase <SharedLibraryKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedLibraryData *)deserializeDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedLibraryData *)patchDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedLibraryData *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedLibraryData *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Images")))
@interface SharedLibraryImages : KotlinBase
- (instancetype)initWithOriginal:(SharedLibraryOriginal *)original __attribute__((swift_name("init(original:)"))) __attribute__((objc_designated_initializer));
- (SharedLibraryOriginal *)component1 __attribute__((swift_name("component1()")));
- (SharedLibraryImages *)doCopyOriginal:(SharedLibraryOriginal *)original __attribute__((swift_name("doCopy(original:)")));
@property (readonly) SharedLibraryOriginal *original;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Images.Companion")))
@interface SharedLibraryImagesCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedLibraryKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Images.$serializer")))
@interface SharedLibraryImages$serializer : KotlinBase <SharedLibraryKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedLibraryImages *)deserializeDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedLibraryImages *)patchDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedLibraryImages *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedLibraryImages *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Original")))
@interface SharedLibraryOriginal : KotlinBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedLibraryOriginal *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
@property (readonly) NSString *url;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Original.Companion")))
@interface SharedLibraryOriginalCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedLibraryKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Original.$serializer")))
@interface SharedLibraryOriginal$serializer : KotlinBase <SharedLibraryKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SharedLibraryOriginal *)deserializeDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SharedLibraryOriginal *)patchDecoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SharedLibraryOriginal *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SharedLibraryKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SharedLibraryOriginal *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedLibraryKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedLibraryKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) SharedLibraryKotlinThrowable * _Nullable cause;
@property (readonly) NSString * _Nullable message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError")))
@interface SharedLibraryApiError : SharedLibraryKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GiphyAPI")))
@interface SharedLibraryGiphyAPI : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedLibraryKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SharedLibraryInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedLibraryKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeEncoder
@required
- (id<SharedLibraryKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(SharedLibraryKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<SharedLibraryKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(SharedLibraryKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(SharedLibraryKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<SharedLibraryKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<SharedLibraryKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SharedLibraryKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) SharedLibraryKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeDecoder
@required
- (id<SharedLibraryKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(SharedLibraryKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(SharedLibraryKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedLibraryKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<SharedLibraryKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) SharedLibraryKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedLibraryKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<SharedLibraryKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface SharedLibraryKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<SharedLibraryKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<SharedLibraryKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface SharedLibraryKotlinx_serialization_runtime_nativeEnumDescriptor : SharedLibraryKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(SharedLibraryKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<SharedLibraryKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<SharedLibraryKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<SharedLibraryKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedLibraryKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface SharedLibraryKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol SharedLibraryKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<SharedLibraryKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedLibraryKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<SharedLibraryKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) SharedLibraryKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedLibraryKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedLibraryKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedLibraryKotlinEnum : KotlinBase <SharedLibraryKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SharedLibraryKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface SharedLibraryKotlinx_serialization_runtime_nativeUpdateMode : SharedLibraryKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SharedLibraryKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) SharedLibraryKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) SharedLibraryKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SharedLibraryKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedLibraryKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedLibraryKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedLibraryKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedLibraryKotlinKClass <SharedLibraryKotlinKDeclarationContainer, SharedLibraryKotlinKAnnotatedElement, SharedLibraryKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

NS_ASSUME_NONNULL_END
