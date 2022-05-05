// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "LuaSwiftBindings",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "LuaSwiftBindings",
            targets: ["LuaSwiftBindings"])
    ],
    dependencies: [],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "LuaSwiftBindings",
            dependencies: [
                "CLua"
            ],
            path: "Sources/lua4swift",
            exclude: ["LICENSE", "README.md"]
        ),
        .target(
            name: "CLua",
            path: "Sources/lua-5.4.4/src",
            cSettings: [.define("NO_STDLIB_SYSTEM", to: "true", .when(platforms: [.iOS, .tvOS, .watchOS, .macCatalyst]))]
        )
    ]
)
