// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import Foundation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
enum AuthMethod : NSInteger;

SWIFT_CLASS("_TtC10PaymentSDK11AbstractSDK")
@interface AbstractSDK : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull userSettings;
@property (nonatomic, readonly, copy) NSString * _Nonnull clientSettings;
@property (nonatomic, readonly, copy) NSString * _Nonnull redirectUri;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret authMethod:(enum AuthMethod)authMethod OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK11AccessToken")
@interface AccessToken : NSObject
@property (nonatomic, copy) NSString * _Nullable token;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable scope;
@property (nonatomic, copy) NSString * _Nullable firstName;
@property (nonatomic, copy) NSString * _Nullable lastName;
@property (nonatomic, copy) NSString * _Nullable mobileNo;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable jti;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class NSError;

SWIFT_CLASS("_TtC10PaymentSDK19AccessTokenResponse")
@interface AccessTokenResponse : NSObject
@property (nonatomic, readonly, strong) AccessToken * _Nullable accessToken;
@property (nonatomic, readonly, strong) NSError * _Nullable error;
- (nonnull instancetype)initWithAccessToken:(AccessToken * _Nullable)accessToken error:(NSError * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

enum Algorithm : NSInteger;

SWIFT_CLASS("_TtC10PaymentSDK10AuthConfig")
@interface AuthConfig : NSObject
- (int64_t)getTimestamp SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getNonce SWIFT_WARN_UNUSED_RESULT;
- (enum Algorithm)getCrypto SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getAuthorization SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getSignature SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, Algorithm) {
  AlgorithmSha1 = 0,
  AlgorithmSha256 = 1,
  AlgorithmSha512 = 2,
};

typedef SWIFT_ENUM(NSInteger, AuthMethod) {
  AuthMethodClient = 0,
  AuthMethodPassport = 1,
  AuthMethodPassword = 2,
};


SWIFT_CLASS("_TtC10PaymentSDK24AuthorizePurchaseRequest")
@interface AuthorizePurchaseRequest : NSObject
@property (nonatomic, copy) NSString * _Nonnull paymentId;
@property (nonatomic, copy) NSString * _Nonnull otp;
@property (nonatomic, copy) NSString * _Nonnull authData;
@property (nonatomic, copy) NSString * _Nonnull transactionId;
@property (nonatomic, copy) NSString * _Nonnull eciFlag;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10PaymentSDK20AuthorizeCardRequest")
@interface AuthorizeCardRequest : AuthorizePurchaseRequest
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10PaymentSDK16PurchaseResponse")
@interface PurchaseResponse : NSObject
@property (nonatomic, copy) NSString * _Nullable responseCode;
@property (nonatomic, copy) NSString * _Nonnull transactionIdentifier;
@property (nonatomic, copy) NSString * _Nonnull transactionId;
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
@property (nonatomic, copy) NSString * _Nullable amount;
@property (nonatomic, copy) NSString * _Nullable token;
@property (nonatomic, copy) NSString * _Nullable tokenExpiryDate;
@property (nonatomic, copy) NSString * _Nullable panLast4Digits;
@property (nonatomic, copy) NSString * _Nullable cardType;
@property (nonatomic, copy) NSString * _Nullable otpTransactionIdentifier;
@property (nonatomic, copy) NSString * _Nullable paymentId;
@property (nonatomic, copy) NSString * _Nullable md;
@property (nonatomic, copy) NSString * _Nullable acsUrl;
@property (nonatomic, copy) NSString * _Nullable termUrl;
@property (nonatomic, copy) NSString * _Nullable eciFlag;
@property (nonatomic, copy) NSString * _Nullable paReq;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK20ValidateCardResponse")
@interface ValidateCardResponse : PurchaseResponse
@property (nonatomic, readonly, copy) NSString * _Nonnull balance;
@end


SWIFT_CLASS("_TtC10PaymentSDK21AuthorizeCardResponse")
@interface AuthorizeCardResponse : ValidateCardResponse
@end


SWIFT_CLASS("_TtC10PaymentSDK19AuthorizeOtpRequest")
@interface AuthorizeOtpRequest : NSObject
- (nonnull instancetype)initWithOtpTransactionIdentifier:(NSString * _Nonnull)otpTransactionIdentifier otp:(NSString * _Nonnull)otp transactionRef:(NSString * _Nonnull)transactionRef OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK20AuthorizeOtpResponse")
@interface AuthorizeOtpResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end



SWIFT_CLASS("_TtC10PaymentSDK25AuthorizePurchaseResponse")
@interface AuthorizePurchaseResponse : PurchaseResponse
@end

@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC10PaymentSDK23AuthorizeViewController")
@interface AuthorizeViewController : UIViewController
- (nonnull instancetype)initWithResponse:(PurchaseResponse * _Nonnull)response authorizeHandler:(void (^ _Nonnull)(void))authorizeHandler OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK16AuthorizeWebView")
@interface AuthorizeWebView : UIWebView <UIWebViewDelegate>
- (nonnull instancetype)initWithResponse:(PurchaseResponse * _Nonnull)response authorizeHandler:(void (^ _Nonnull)(void))authorizeHandler OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)show;
- (void)webViewDidFinishLoad:(UIWebView * _Nonnull)webView;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType SWIFT_WARN_UNUSED_RESULT;
- (void)webView:(UIWebView * _Nonnull)webView didFailLoadWithError:(NSError * _Nonnull)error;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UILabel;
@class UIColor;

SWIFT_CLASS("_TtC10PaymentSDK24B68UIFloatLabelTextField")
@interface B68UIFloatLabelTextField : UITextField
/// The floating label that is displayed above the text field when there is other
/// text in the text field.
@property (nonatomic, strong) UILabel * _Nonnull floatingLabel;
/// The color of the floating label displayed above the text field when it is in
/// an active state (i.e. the associated text view is first responder).
/// @discussion Note: Default Color is blue.
@property (nonatomic, strong) UIColor * _Nonnull activeTextColorfloatingLabel;
/// The color of the floating label displayed above the text field when it is in
/// an inactive state (i.e. the associated text view is not first responder).
/// @discussion Note: 70% gray is used by default if this is nil.
@property (nonatomic, strong) UIColor * _Nonnull inactiveTextColorfloatingLabel;
/// The default dynamic test size
@property (nonatomic, copy) NSString * _Nonnull placeHolderTextSize;
/// default padding for floatingLabel
@property (nonatomic) CGFloat verticalPadding;
@property (nonatomic) CGFloat horizontalPadding;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@property (nonatomic, copy) NSString * _Nullable placeholder;
@property (nonatomic, readonly) BOOL hasText;
- (void)layoutSubviews;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (CGRect)textRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
- (CGRect)editingRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, HttpMethod) {
  HttpMethodDelete = 0,
  HttpMethodGet = 1,
  HttpMethodJson_post = 2,
  HttpMethodPost = 3,
  HttpMethodPut = 4,
};


SWIFT_CLASS("_TtC10PaymentSDK8Passport")
@interface Passport : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull liveApiBase;)
+ (NSString * _Nonnull)liveApiBase SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret OBJC_DESIGNATED_INITIALIZER;
/// <ul>
///   <li>
///     (FOR TESTING ONLY) If you’d like your API requests to hit your own
///   </li>
///   <li>
///     (mocked) server, you can set this up here by overriding the base api URL.
///   </li>
/// </ul>
+ (void)overrideApiBase:(NSString * _Nonnull)overriddenApiBase;
+ (NSString * _Nonnull)getApiBase SWIFT_WARN_UNUSED_RESULT;
- (void)getAccessToken:(void (^ _Nonnull)(AccessToken * _Nullable, NSError * _Nullable))completionHandler;
- (void)userLogin:(NSString * _Nonnull)username password:(NSString * _Nonnull)password completionHandler:(void (^ _Nonnull)(AccessToken * _Nullable, NSError * _Nullable))completionHandler;
- (void)getUserAccessToken:(NSString * _Nonnull)accessCode redirectUri:(NSString * _Nonnull)redirectUri completionHandler:(void (^ _Nonnull)(AccessToken * _Nullable, NSError * _Nullable))completionHandler;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class SplitSettlementAccount;

SWIFT_CLASS("_TtC10PaymentSDK3Pay")
@interface Pay : NSObject
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount currency:(NSString * _Nonnull)currency;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount currency:(NSString * _Nonnull)currency splitSettlementInformation:(NSArray<SplitSettlementAccount *> * _Nullable)splitSettlementInformation OBJC_DESIGNATED_INITIALIZER;
- (UIViewController * _Nonnull)start:(void (^ _Nonnull)(PurchaseResponse * _Nullable, NSError * _Nullable))completionHandler SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK11PayWithCard")
@interface PayWithCard : NSObject
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount currency:(NSString * _Nonnull)currency;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount currency:(NSString * _Nonnull)currency splitSettlementInformation:(NSArray<SplitSettlementAccount *> * _Nullable)splitSettlementInformation OBJC_DESIGNATED_INITIALIZER;
- (UIViewController * _Nonnull)start:(void (^ _Nonnull)(PurchaseResponse * _Nullable, NSError * _Nullable))completionHandler SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK12PayWithToken")
@interface PayWithToken : NSObject
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount token:(NSString * _Nonnull)token currency:(NSString * _Nonnull)currency expiryDate:(NSString * _Nonnull)expiryDate cardType:(NSString * _Nonnull)cardType last4Digits:(NSString * _Nonnull)last4Digits;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount token:(NSString * _Nonnull)token currency:(NSString * _Nonnull)currency expiryDate:(NSString * _Nonnull)expiryDate cardType:(NSString * _Nonnull)cardType last4Digits:(NSString * _Nonnull)last4Digits isRecurrent:(BOOL)isRecurrent;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount token:(NSString * _Nonnull)token currency:(NSString * _Nonnull)currency expiryDate:(NSString * _Nonnull)expiryDate cardType:(NSString * _Nonnull)cardType last4Digits:(NSString * _Nonnull)last4Digits splitSettlementInformation:(NSArray<SplitSettlementAccount *> * _Nullable)splitSettlementInformation OBJC_DESIGNATED_INITIALIZER;
- (UIViewController * _Nonnull)start:(void (^ _Nonnull)(PurchaseResponse * _Nullable, NSError * _Nullable))completionHandler SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK13PayWithWallet")
@interface PayWithWallet : NSObject
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount currency:(NSString * _Nonnull)currency;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId description:(NSString * _Nonnull)description amount:(NSString * _Nonnull)amount currency:(NSString * _Nonnull)currency splitSettlementInformation:(NSArray<SplitSettlementAccount *> * _Nullable)splitSettlementInformation OBJC_DESIGNATED_INITIALIZER;
- (UIViewController * _Nonnull)start:(void (^ _Nonnull)(PurchaseResponse * _Nullable, NSError * _Nullable))completionHandler SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK7Payment")
@interface Payment : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull liveApiBase;)
+ (NSString * _Nonnull)liveApiBase SWIFT_WARN_UNUSED_RESULT;
/// (FOR TESTING ONLY) If you’d like your API requests to hit your own
/// (mocked) server, you can set this up here by overriding the base api URL.
+ (void)overrideApiBase:(NSString * _Nonnull)overriddenApiBase;
+ (NSString * _Nonnull)getApiBase SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)formatAuthData:(NSString * _Nonnull)pan pin:(NSString * _Nonnull)pin expiryDate:(NSString * _Nonnull)expiryDate cvv2:(NSString * _Nonnull)cvv2 SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)randomStringWithLength:(NSInteger)len SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10PaymentSDK13PaymentMethod")
@interface PaymentMethod : NSObject
@property (nonatomic, copy) NSString * _Nonnull token;
@property (nonatomic, copy) NSString * _Nonnull tokenExpiry;
@property (nonatomic, copy) NSString * _Nonnull panLast4Digits;
@property (nonatomic, copy) NSString * _Nonnull cardProduct;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class PurchaseRequest;
@class ValidateCardRequest;
@class PaymentStatusResponse;

SWIFT_CLASS("_TtC10PaymentSDK10PaymentSDK")
@interface PaymentSDK : AbstractSDK
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull SAFE_TOKEN_RESPONSE_CODE;)
+ (NSString * _Nonnull)SAFE_TOKEN_RESPONSE_CODE SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull CARDINAL_RESPONSE_CODE;)
+ (NSString * _Nonnull)CARDINAL_RESPONSE_CODE SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret OBJC_DESIGNATED_INITIALIZER;
- (void)purchase:(PurchaseRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(PurchaseResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)validateCard:(ValidateCardRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(ValidateCardResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)authorizeOtp:(AuthorizeOtpRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(AuthorizeOtpResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)authorizePurchase:(AuthorizePurchaseRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(AuthorizePurchaseResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)authorizeCard:(AuthorizeCardRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(AuthorizeCardResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)getPaymentStatus:(NSString * _Nonnull)transactionRef amount:(NSString * _Nonnull)amount completionHandler:(void (^ _Nonnull)(PaymentStatusResponse * _Nullable, NSError * _Nullable))completionHandler;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret authMethod:(enum AuthMethod)authMethod SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK21PaymentStatusResponse")
@interface PaymentStatusResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
@property (nonatomic, copy) NSString * _Nonnull amount;
@property (nonatomic, copy) NSDate * _Nonnull transactionDate;
@property (nonatomic, copy) NSString * _Nonnull panLast4Digits;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK15PurchaseRequest")
@interface PurchaseRequest : NSObject
@property (nonatomic, copy) NSString * _Nonnull authData;
- (nonnull instancetype)initWithCustomerId:(NSString * _Nullable)customerId amount:(NSString * _Nonnull)amount pan:(NSString * _Nonnull)pan pin:(NSString * _Nonnull)pin expiryDate:(NSString * _Nonnull)expiryDate cvv2:(NSString * _Nonnull)cvv2 transactionRef:(NSString * _Nonnull)transactionRef currency:(NSString * _Nonnull)currency requestorId:(NSString * _Nullable)requestorId;
- (nonnull instancetype)initWithCustomerId:(NSString * _Nullable)customerId amount:(NSString * _Nonnull)amount tokenExpiryDate:(NSString * _Nonnull)tokenExpiryDate payableId:(NSString * _Nonnull)payableId transactionRef:(NSString * _Nonnull)transactionRef currency:(NSString * _Nonnull)currency token:(NSString * _Nonnull)token splitSettlementInformation:(NSArray<SplitSettlementAccount *> * _Nullable)splitSettlementInformation isRecurrent:(BOOL)isRecurrent;
- (nonnull instancetype)initWithCustomerId:(NSString * _Nullable)customerId amount:(NSString * _Nonnull)amount pan:(NSString * _Nonnull)pan pin:(NSString * _Nonnull)pin expiryDate:(NSString * _Nonnull)expiryDate cvv2:(NSString * _Nonnull)cvv2 transactionRef:(NSString * _Nonnull)transactionRef currency:(NSString * _Nonnull)currency requestorId:(NSString * _Nullable)requestorId splitSettlementInformation:(NSArray<SplitSettlementAccount *> * _Nullable)splitSettlementInformation OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end



SWIFT_CLASS("_TtC10PaymentSDK22SplitSettlementAccount")
@interface SplitSettlementAccount : NSObject
- (nonnull instancetype)init:(NSString * _Nonnull)accountIdentifier :(NSString * _Nonnull)amount OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface UIColor (SWIFT_EXTENSION(PaymentSDK))
@end


SWIFT_CLASS("_TtC10PaymentSDK12ValidateCard")
@interface ValidateCard : NSObject
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret customerId:(NSString * _Nonnull)customerId isRecurrent:(BOOL)isRecurrent OBJC_DESIGNATED_INITIALIZER;
- (UIViewController * _Nonnull)start:(void (^ _Nonnull)(ValidateCardResponse * _Nullable, NSError * _Nullable))completionHandler SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK19ValidateCardRequest")
@interface ValidateCardRequest : NSObject
@property (nonatomic, copy) NSString * _Nonnull authData;
- (nonnull instancetype)initWithCustomerId:(NSString * _Nullable)customerId pan:(NSString * _Nonnull)pan pin:(NSString * _Nonnull)pin expiryDate:(NSString * _Nonnull)expiryDate cvv2:(NSString * _Nonnull)cvv2 transactionRef:(NSString * _Nonnull)transactionRef requestorId:(NSString * _Nullable)requestorId isRecurrent:(BOOL)isRecurrent OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end



SWIFT_CLASS("_TtC10PaymentSDK14WalletResponse")
@interface WalletResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull transactionRef;
@property (nonatomic, copy) NSArray<PaymentMethod *> * _Nonnull paymentMethods;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK9WalletSDK")
@interface WalletSDK : AbstractSDK
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret OBJC_DESIGNATED_INITIALIZER;
- (void)purchase:(PurchaseRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(PurchaseResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)authorizeOtp:(AuthorizeOtpRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(AuthorizeOtpResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)getPaymentStatus:(NSString * _Nonnull)transactionRef amount:(NSString * _Nonnull)amount completionHandler:(void (^ _Nonnull)(PaymentStatusResponse * _Nullable, NSError * _Nullable))completionHandler;
- (void)getPaymentMethods:(void (^ _Nonnull)(WalletResponse * _Nullable, NSError * _Nullable))completionHandler;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret authMethod:(enum AuthMethod)authMethod SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10PaymentSDK17WebViewController")
@interface WebViewController : UIViewController <UIWebViewDelegate>
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType SWIFT_WARN_UNUSED_RESULT;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)handle;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

#pragma clang diagnostic pop
