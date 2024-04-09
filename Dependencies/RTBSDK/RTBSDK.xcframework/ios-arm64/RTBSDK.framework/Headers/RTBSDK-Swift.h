#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef RTBSDK_SWIFT_H
#define RTBSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RTBSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSNumber;
@class NSString;

SWIFT_CLASS("_TtC6RTBSDK29RTBBannerRequestConfiguration")
@interface RTBBannerRequestConfiguration : NSObject
/// Represents the bid floor price.
@property (nonatomic, strong) NSNumber * _Nullable bidFloor;
@property (nonatomic, copy) NSString * _Nullable sellerId;
/// \param placementId Represents the placement ID on SmartyAd dashboard.
///
/// \param iTunesAppId Represents the AppId on the publisher Apple developer account.
///
- (nonnull instancetype)initWithPlacementId:(NSInteger)placementId iTunesAppId:(NSString * _Nonnull)iTunesAppId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6RTBSDK13RTBBannerSize")
@interface RTBBannerSize : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NSCoder;

SWIFT_CLASS("_TtC6RTBSDK13RTBBannerView")
@interface RTBBannerView : UIView
- (nonnull instancetype)initWithSize:(RTBBannerSize * _Nonnull)size OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)willMoveToSuperview:(UIView * _Nullable)newSuperview;
- (void)didMoveToSuperview;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



@protocol RTBDSPBannerProtocol;

SWIFT_PROTOCOL("_TtP6RTBSDK20RTBDSPBannerDelegate_")
@protocol RTBDSPBannerDelegate
/// Tells the delegate that an ad request successfully received an ad. The delegate may want to add
- (void)dspAdViewDidReceiveAd:(id <RTBDSPBannerProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that an ad request failed.
- (void)dspAdView:(id <RTBDSPBannerProtocol> _Nonnull)ad didFailToReceiveAd:(NSString * _Nonnull)errorMessage networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that a click has been recorded for the ad.
- (void)dspAdViewDidRecordClick:(id <RTBDSPBannerProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that ad has opened external browser.
- (void)dspAdViewDidPauseForAd:(id <RTBDSPBannerProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that Ad has been dismissed.
- (void)dspAdViewDidResumeAfterAd:(id <RTBDSPBannerProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
@end


@interface RTBBannerView (SWIFT_EXTENSION(RTBSDK)) <RTBDSPBannerDelegate>
- (void)dspAdViewDidReceiveAd:(id <RTBDSPBannerProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
- (void)dspAdView:(id <RTBDSPBannerProtocol> _Nonnull)ad didFailToReceiveAd:(NSString * _Nonnull)errorMessage networkName:(NSString * _Nonnull)networkName;
- (void)dspAdViewDidRecordClick:(id <RTBDSPBannerProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
- (void)dspAdViewDidPauseForAd:(id <RTBDSPBannerProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
- (void)dspAdViewDidResumeAfterAd:(id <RTBDSPBannerProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
@end


SWIFT_PROTOCOL("_TtP6RTBSDK21RTBBannerViewDelegate_")
@protocol RTBBannerViewDelegate
/// Tells the delegate that an ad request successfully received an ad. The delegate may want to add
/// \param bannerView the banner view to the view hierarchy if it hasn’t been added yet.
///
/// \param priceCPM BidPrice of the Ad
///
- (void)bannerViewDidReceiveAd:(RTBBannerView * _Nonnull)bannerView priceCPM:(float)priceCPM networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that an ad request failed.
- (void)bannerView:(RTBBannerView * _Nonnull)bannerView didFailToReceiveAd:(NSString * _Nonnull)errorMessage networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that a click has been recorded for the ad.
- (void)bannerViewDidRecordClick:(RTBBannerView * _Nonnull)bannerView networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that ad has opened external browser.
- (void)bannerViewDidPauseForAd:(RTBBannerView * _Nonnull)bannerView networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that Ad has been dismissed.
- (void)bannerViewDidResumeAfterAd:(RTBBannerView * _Nonnull)bannerView networkName:(NSString * _Nonnull)networkName;
@end


SWIFT_CLASS("_TtC6RTBSDK18RTBBidderExtraInfo")
@interface RTBBidderExtraInfo : NSObject
@property (nonatomic, copy) NSString * _Nullable clickURL;
@property (nonatomic, copy) NSString * _Nullable impressionURL;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol RTBDSPDelegate;

SWIFT_PROTOCOL("_TtP6RTBSDK14RTBDSPProtocol_")
@protocol RTBDSPProtocol
@property (nonatomic, readonly, copy) NSString * _Nonnull bidderName;
@property (nonatomic, strong) id <RTBDSPDelegate> _Nullable signalsDelegate;
- (nonnull instancetype)init;
- (void)loadSignals;
- (void)renderCreative:(NSString * _Nonnull)creative extraInfo:(RTBBidderExtraInfo * _Nonnull)extraInfo;
@end

@class UIViewController;

SWIFT_PROTOCOL("_TtP6RTBSDK16RTBDSAdPProtocol_")
@protocol RTBDSAdPProtocol <RTBDSPProtocol>
@property (nonatomic, copy) NSString * _Nullable requestId;
@property (nonatomic, strong) UIViewController * _Nullable viewController;
@property (nonatomic, copy) NSString * _Nullable adID;
- (void)unload;
- (void)pause;
- (void)resumeWithController:(UIViewController * _Nonnull)controller;
@end



SWIFT_PROTOCOL("_TtP6RTBSDK20RTBDSPBannerProtocol_")
@protocol RTBDSPBannerProtocol <RTBDSAdPProtocol>
@property (nonatomic, strong) id <RTBDSPBannerDelegate> _Nullable bannerDelegate;
- (void)setBannerSizeWithSize:(CGSize)size;
- (UIView * _Nullable)getBannerView SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP6RTBSDK14RTBDSPDelegate_")
@protocol RTBDSPDelegate
- (void)didCollectSignals:(id <RTBDSPProtocol> _Nonnull)dsp signals:(NSDictionary<NSString *, id> * _Nonnull)signals;
- (void)didFailToCollectSignals:(id <RTBDSPProtocol> _Nonnull)dsp error:(NSString * _Nonnull)error;
@end

@protocol RTBDSPInterstitialProtocol;

SWIFT_PROTOCOL("_TtP6RTBSDK26RTBDSPInterstitialDelegate_")
@protocol RTBDSPInterstitialDelegate
/// Tells the delegate that an ad request successfully received an ad. The delegate may want to add
- (void)dspAdViewDidReceiveAd:(id <RTBDSPInterstitialProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that an ad request failed.
- (void)dspAdView:(id <RTBDSPInterstitialProtocol> _Nonnull)ad didFailToReceiveAd:(NSString * _Nonnull)errorMessage networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that a click has been recorded for the ad.
- (void)dspAdViewDidRecordClick:(id <RTBDSPInterstitialProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that ad has opened external browser.
- (void)dspAdViewDidPauseForAd:(id <RTBDSPInterstitialProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
/// Tells the delegate that Ad has been dismissed.
- (void)dspAdViewDidResumeAfterAd:(id <RTBDSPInterstitialProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
@end


SWIFT_PROTOCOL("_TtP6RTBSDK26RTBDSPInterstitialProtocol_")
@protocol RTBDSPInterstitialProtocol <RTBDSAdPProtocol>
@property (nonatomic, strong) id <RTBDSPInterstitialDelegate> _Nullable adDelegate;
- (BOOL)showWithViewController:(UIViewController * _Nonnull)viewController;
@end


@class RTBFullscreenRequestConfiguration;

SWIFT_CLASS("_TtC6RTBSDK15RTBFullscreenAd")
@interface RTBFullscreenAd : NSObject
/// Start loading a fullscreen ad
/// \param configuration Fullscreen request configuration that is needed to request a new Ad, see <code>RTBFullscreenRequestConfiguration</code>
///
- (BOOL)loadWithConfiguration:(RTBFullscreenRequestConfiguration * _Nonnull)configuration;
/// Show the loaded fullscreen ad
/// \param viewController The view controller that will be used to present the fullscreen ad
///
- (BOOL)showWithViewController:(UIViewController * _Nonnull)viewController;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




@interface RTBFullscreenAd (SWIFT_EXTENSION(RTBSDK)) <RTBDSPInterstitialDelegate>
- (void)dspAdViewDidReceiveAd:(id <RTBDSPInterstitialProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
- (void)dspAdView:(id <RTBDSPInterstitialProtocol> _Nonnull)ad didFailToReceiveAd:(NSString * _Nonnull)errorMessage networkName:(NSString * _Nonnull)networkName;
- (void)dspAdViewDidRecordClick:(id <RTBDSPInterstitialProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
- (void)dspAdViewDidPauseForAd:(id <RTBDSPInterstitialProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
- (void)dspAdViewDidResumeAfterAd:(id <RTBDSPInterstitialProtocol> _Nonnull)ad networkName:(NSString * _Nonnull)networkName;
@end


SWIFT_PROTOCOL("_TtP6RTBSDK21RTBFullscreenDelegate_")
@protocol RTBFullscreenDelegate
/// Called when the fullscreen ad has been loaded and ready to be shown
/// \param fullscreenAd The loaded <code>RTBFullscreenAd</code>
///
/// \param priceCPM The ad price CPM
///
- (void)fullscreenAdDidReceiveAd:(RTBFullscreenAd * _Nonnull)fullscreenAd priceCPM:(float)priceCPM networkName:(NSString * _Nonnull)networkName;
/// Called when the ad loading is failed
/// \param fullscreenAd The <code>RTBFullscreenAd</code> that failed to load
///
/// \param errorMessage A message describing the reason for the failure.
///
- (void)fullscreenAd:(RTBFullscreenAd * _Nonnull)fullscreenAd didFailToReceiveAd:(NSString * _Nonnull)errorMessage networkName:(NSString * _Nonnull)networkName;
/// Called when the use clicks on the fullscreen ad
/// \param fullscreenAd The <code>RTBFullscreenAd</code> that received the click
///
- (void)fullscreenAdDidRecordClick:(RTBFullscreenAd * _Nonnull)fullscreenAd networkName:(NSString * _Nonnull)networkName;
/// Called when the fullscreen ad has been displayed
/// \param fullscreenAd The <code>RTBFullscreenAd</code> that has been shown
///
- (void)fullscreenAdDidPauseForAd:(RTBFullscreenAd * _Nonnull)fullscreenAd networkName:(NSString * _Nonnull)networkName;
/// Called when the fullscreen ad has been dismisseed
/// \param fullscreenAd The <code>RTBFullscreenAd</code> that has been dismissed
///
- (void)fullscreenAdDidResumeAfterAd:(RTBFullscreenAd * _Nonnull)fullscreenAd networkName:(NSString * _Nonnull)networkName;
@end


SWIFT_CLASS("_TtC6RTBSDK33RTBFullscreenRequestConfiguration")
@interface RTBFullscreenRequestConfiguration : NSObject
/// Represents the bid floor price.
@property (nonatomic, strong) NSNumber * _Nullable bidFloor;
@property (nonatomic, copy) NSString * _Nullable sellerId;
/// \param placementId Represents the placement ID on SmartyAd dashboard.
///
/// \param iTunesAppId Represents the AppId on the publisher Apple developer account.
///
- (nonnull instancetype)initWithPlacementId:(NSInteger)placementId iTunesAppId:(NSString * _Nonnull)iTunesAppId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Desired log level
typedef SWIFT_ENUM(NSInteger, RTBLogLevel, open) {
/// Verbose-level messages are intended to capture verbose, debug, info, warning and error messages. It’s convenient in an intensive development environment.
  RTBLogLevelVerbose = 1,
/// Debug-level messages are intended to capture debug, info, warning and error messages. It’s convenient in a normal development environment.
  RTBLogLevelDebug = 2,
/// Info-level messages are intended to capture info, warning and error messages. Info-level may be helpful but isn’t enough for troubleshooting.
  RTBLogLevelInfo = 3,
/// Warn-level messages are intended to capture warning and error messages only.
  RTBLogLevelWarn = 4,
/// Error-level messages are intended to capture error messages only.
  RTBLogLevelError = 5,
};


SWIFT_CLASS("_TtC6RTBSDK9RTBLogger")
@interface RTBLogger : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC6RTBSDK13RTBSDKManager")
@interface RTBSDKManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
