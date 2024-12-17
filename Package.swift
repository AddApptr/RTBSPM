// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "RTBSPM",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(name: "RTBSPM", targets: ["RTBSPM_core", "OMSDK"]),
        .library(name: "RTB_GraviteRTBAppLovinMediationAdapter", targets: ["RTB_GraviteRTBAppLovinMediationAdapter"]),
        .library(name: "RTB_GraviteRTBAdMobMediationAdapter", targets: ["RTB_GraviteRTBAdMobMediationAdapter"]),
    ],
    dependencies: [
        .package(name: "AppLovinSDK", url: "https://github.com/AppLovin/AppLovin-MAX-Swift-Package.git", .exact("13.0.1")),
        .package(name: "GoogleMobileAds", url: "https://github.com/googleads/swift-package-manager-google-mobile-ads.git", .exact("11.12.0")),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.

        .target(name:"OMSDK",
                dependencies: ["RTB_OMSDK"],
                path: "./Sources/RTB_OMSDK"),
        
        .binaryTarget(name: "RTBSPM_core", path: "./Dependencies/RTBSDK/RTBSDK.xcframework"),
        .binaryTarget(name: "RTB_OMSDK", path: "./Dependencies/RTB_OMSDK/OMSDK_Addapptr.xcframework"),

        // GraviteRTBAppLovinMediationAdapter target
        .target(name:"RTB_GraviteRTBAppLovinMediationAdapter",
                dependencies: [ "AppLovinSDK", "RTBSPM_core", "OMSDK", "GraviteRTBAppLovinMediationAdapter"],
                path: "./Sources/GraviteRTBAppLovinMediationAdapter"),


        // AATAppLovinMediationAdapter
        .binaryTarget(name: "GraviteRTBAppLovinMediationAdapter", path: "./Dependencies/GraviteRTBAppLovinMediationAdapter/GraviteRTBAppLovinMediationAdapter.xcframework"),

        // GraviteRTBAdMobMediationAdapter target
        .target(name:"RTB_GraviteRTBAdMobMediationAdapter",
                dependencies: [ "GoogleMobileAds", "RTBSPM_core", "OMSDK", "GraviteRTBAdMobMediationAdapter"],
                path: "./Sources/GraviteRTBAdMobMediationAdapter"),

        // AATAdMobMediationAdapter
        .binaryTarget(name: "GraviteRTBAdMobMediationAdapter", path: "./Dependencies/GraviteRTBAdMobMediationAdapter/GraviteRTBAdMobMediationAdapter.xcframework"),
    ]
)
