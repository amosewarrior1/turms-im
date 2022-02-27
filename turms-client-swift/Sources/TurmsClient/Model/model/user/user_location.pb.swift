// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/user/user_location.proto
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

public struct UserLocation {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var latitude: Float = 0

    public var longitude: Float = 0

    public var name: String {
        get { return _name ?? String() }
        set { _name = newValue }
    }

    /// Returns true if `name` has been explicitly set.
    public var hasName: Bool { return _name != nil }
    /// Clears the value of `name`. Subsequent reads from it will return its default value.
    public mutating func clearName() { _name = nil }

    public var address: String {
        get { return _address ?? String() }
        set { _address = newValue }
    }

    /// Returns true if `address` has been explicitly set.
    public var hasAddress: Bool { return _address != nil }
    /// Clears the value of `address`. Subsequent reads from it will return its default value.
    public mutating func clearAddress() { _address = nil }

    public var timestamp: Int64 {
        get { return _timestamp ?? 0 }
        set { _timestamp = newValue }
    }

    /// Returns true if `timestamp` has been explicitly set.
    public var hasTimestamp: Bool { return _timestamp != nil }
    /// Clears the value of `timestamp`. Subsequent reads from it will return its default value.
    public mutating func clearTimestamp() { _timestamp = nil }

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _name: String?
    fileprivate var _address: String?
    fileprivate var _timestamp: Int64?
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension UserLocation: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".UserLocation"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .same(proto: "latitude"),
        2: .same(proto: "longitude"),
        3: .same(proto: "name"),
        4: .same(proto: "address"),
        5: .same(proto: "timestamp"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try try decoder.decodeSingularFloatField(value: &latitude)
            case 2: try try decoder.decodeSingularFloatField(value: &longitude)
            case 3: try try decoder.decodeSingularStringField(value: &_name)
            case 4: try try decoder.decodeSingularStringField(value: &_address)
            case 5: try try decoder.decodeSingularInt64Field(value: &_timestamp)
            default: break
            }
        }
    }

    public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
        if latitude != 0 {
            try visitor.visitSingularFloatField(value: latitude, fieldNumber: 1)
        }
        if longitude != 0 {
            try visitor.visitSingularFloatField(value: longitude, fieldNumber: 2)
        }
        try { if let v = self._name {
            try visitor.visitSingularStringField(value: v, fieldNumber: 3)
        } }()
        try { if let v = self._address {
            try visitor.visitSingularStringField(value: v, fieldNumber: 4)
        } }()
        try { if let v = self._timestamp {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 5)
        } }()
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: UserLocation, rhs: UserLocation) -> Bool {
        if lhs.latitude != rhs.latitude { return false }
        if lhs.longitude != rhs.longitude { return false }
        if lhs._name != rhs._name { return false }
        if lhs._address != rhs._address { return false }
        if lhs._timestamp != rhs._timestamp { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}
