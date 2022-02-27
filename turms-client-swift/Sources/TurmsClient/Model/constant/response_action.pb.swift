// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: constant/response_action.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
private struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
    struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
    typealias Version = _2
}

public enum ResponseAction: SwiftProtobuf.Enum {
    public typealias RawValue = Int
    case accept // = 0
    case decline // = 1
    case ignore // = 2
    case UNRECOGNIZED(Int)

    public init() {
        self = .accept
    }

    public init?(rawValue: Int) {
        switch rawValue {
        case 0: self = .accept
        case 1: self = .decline
        case 2: self = .ignore
        default: self = .UNRECOGNIZED(rawValue)
        }
    }

    public var rawValue: Int {
        switch self {
        case .accept: return 0
        case .decline: return 1
        case .ignore: return 2
        case let .UNRECOGNIZED(i): return i
        }
    }
}

#if swift(>=4.2)

    extension ResponseAction: CaseIterable {
        // The compiler won't synthesize support with the UNRECOGNIZED case.
        public static var allCases: [ResponseAction] = [
            .accept,
            .decline,
            .ignore,
        ]
    }

#endif // swift(>=4.2)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

extension ResponseAction: SwiftProtobuf._ProtoNameProviding {
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        0: .same(proto: "ACCEPT"),
        1: .same(proto: "DECLINE"),
        2: .same(proto: "IGNORE"),
    ]
}
