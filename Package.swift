// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "RTBSPM",
    defaultLocalization: "en",
    platforms: [.iOS(.v12)],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(name: "RTBSPM", targets: ["RTBSPM_core", "RTBOMSDK"]),
        .library(name: "RTB_GraviteRTBAppLovinMediationAdapter", targets: ["RTB_GraviteRTBAppLovinMediationAdapter"]),
        .library(name: "RTB_GraviteRTBAdMobMediationAdapter", targets: ["RTB_GraviteRTBAdMobMediationAdapter"]),
    ],
    dependencies: [
        .package(url: "https://github.com/AppLovin/AppLovin-MAX-Swift-Package.git", exact: Version(13, 3, 1)),
        .package(url: "https://github.com/googleads/swift-package-manager-google-mobile-ads.git", exact: Version(12, 7, 0))
    ],
    targets: [
        .target(name:"RTBOMSDK",
                dependencies: ["RTB_OMSDK"],
                path: "./Sources/RTB_OMSDK"),
        // GraviteRTBAppLovinMediationAdapter target
        .target(name:"RTB_GraviteRTBAppLovinMediationAdapter",
                dependencies: [
                    .product(name: "AppLovinSDK", package: "AppLovin-MAX-Swift-Package"),
                    "RTBSPM_core",
                    "RTBOMSDK",
                    "GraviteRTBAppLovinMediationAdapter",
                ],
                path: "./Sources/GraviteRTBAppLovinMediationAdapter"),

        // GraviteRTBAdMobMediationAdapter target
        .target(name:"RTB_GraviteRTBAdMobMediationAdapter",
                dependencies: [
                    .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads"),
                    "RTBSPM_core",
                    "RTBOMSDK",
                    "GraviteRTBAdMobMediationAdapter"
                ],
                path: "./Sources/GraviteRTBAdMobMediationAdapter"),

        // RTBSDK
        .binaryTarget(name: "RTBSPM_core", path: "./Dependencies/RTBSDK/RTBSDK.xcframework"),
        .binaryTarget(name: "RTB_OMSDK", path: "./Dependencies/RTB_OMSDK/OMSDK_Addapptr.xcframework"),
        // AATAppLovinMediationAdapter
        .binaryTarget(name: "GraviteRTBAppLovinMediationAdapter", path: "./Dependencies/GraviteRTBAppLovinMediationAdapter/GraviteRTBAppLovinMediationAdapter.xcframework"),
        // AATAdMobMediationAdapter
        .binaryTarget(name: "GraviteRTBAdMobMediationAdapter", path: "./Dependencies/GraviteRTBAdMobMediationAdapter/GraviteRTBAdMobMediationAdapter.xcframework"),
    ]
)
