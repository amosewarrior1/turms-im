// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: constant/request_status.proto
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

public enum RequestStatus: SwiftProtobuf.Enum {
    public typealias RawValue = Int
    case pending // = 0
    case accepted // = 1
    case acceptedWithoutConfirm // = 2
    case declined // = 3
    case ignored // = 4
    case expired // = 5
    case canceled // = 6
    case UNRECOGNIZED(Int)

    public init() {
        self = .pending
    }

    public init?(rawValue: Int) {
        switch rawValue {
        case 0: self = .pending
        case 1: self = .accepted
        case 2: self = .acceptedWithoutConfirm
        case 3: self = .declined
        case 4: self = .ignored
        case 5: self = .expired
        case 6: self = .canceled
        default: self = .UNRECOGNIZED(rawValue)
        }
    }

    public var rawValue: Int {
        switch self {
        case .pending: return 0
        case .accepted: return 1
        case .acceptedWithoutConfirm: return 2
        case .declined: return 3
        case .ignored: return 4
        case .expired: return 5
        case .canceled: return 6
        case let .UNRECOGNIZED(i): return i
        }
    }
}

#if swift(>=4.2)

    extension RequestStatus: CaseIterable {
        // The compiler won't synthesize support with the UNRECOGNIZED case.
        public static var allCases: [RequestStatus] = [
            .pending,
            .accepted,
            .acceptedWithoutConfirm,
            .declined,
            .ignored,
            .expired,
            .canceled,
        ]
    }

#endif // swift(>=4.2)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

extension RequestStatus: SwiftProtobuf._ProtoNameProviding {
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        0: .same(proto: "PENDING"),
        1: .same(proto: "ACCEPTED"),
        2: .same(proto: "ACCEPTED_WITHOUT_CONFIRM"),
        3: .same(proto: "DECLINED"),
        4: .same(proto: "IGNORED"),
        5: .same(proto: "EXPIRED"),
        6: .same(proto: "CANCELED"),
    ]
}
