// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/user/query_nearby_users_request.proto
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

public struct QueryNearbyUsersRequest {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var latitude: Float = 0

    public var longitude: Float = 0

    public var distance: Int32 {
        get { return _distance ?? 0 }
        set { _distance = newValue }
    }

    /// Returns true if `distance` has been explicitly set.
    public var hasDistance: Bool { return _distance != nil }
    /// Clears the value of `distance`. Subsequent reads from it will return its default value.
    public mutating func clearDistance() { _distance = nil }

    public var maxNumber: Int32 {
        get { return _maxNumber ?? 0 }
        set { _maxNumber = newValue }
    }

    /// Returns true if `maxNumber` has been explicitly set.
    public var hasMaxNumber: Bool { return _maxNumber != nil }
    /// Clears the value of `maxNumber`. Subsequent reads from it will return its default value.
    public mutating func clearMaxNumber() { _maxNumber = nil }

    public var withCoordinates: Bool {
        get { return _withCoordinates ?? false }
        set { _withCoordinates = newValue }
    }

    /// Returns true if `withCoordinates` has been explicitly set.
    public var hasWithCoordinates: Bool { return _withCoordinates != nil }
    /// Clears the value of `withCoordinates`. Subsequent reads from it will return its default value.
    public mutating func clearWithCoordinates() { _withCoordinates = nil }

    public var withDistance: Bool {
        get { return _withDistance ?? false }
        set { _withDistance = newValue }
    }

    /// Returns true if `withDistance` has been explicitly set.
    public var hasWithDistance: Bool { return _withDistance != nil }
    /// Clears the value of `withDistance`. Subsequent reads from it will return its default value.
    public mutating func clearWithDistance() { _withDistance = nil }

    public var withInfo: Bool {
        get { return _withInfo ?? false }
        set { _withInfo = newValue }
    }

    /// Returns true if `withInfo` has been explicitly set.
    public var hasWithInfo: Bool { return _withInfo != nil }
    /// Clears the value of `withInfo`. Subsequent reads from it will return its default value.
    public mutating func clearWithInfo() { _withInfo = nil }

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _distance: Int32?
    fileprivate var _maxNumber: Int32?
    fileprivate var _withCoordinates: Bool?
    fileprivate var _withDistance: Bool?
    fileprivate var _withInfo: Bool?
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension QueryNearbyUsersRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".QueryNearbyUsersRequest"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .same(proto: "latitude"),
        2: .same(proto: "longitude"),
        3: .same(proto: "distance"),
        4: .standard(proto: "max_number"),
        5: .standard(proto: "with_coordinates"),
        6: .standard(proto: "with_distance"),
        7: .standard(proto: "with_info"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try try decoder.decodeSingularFloatField(value: &latitude)
            case 2: try try decoder.decodeSingularFloatField(value: &longitude)
            case 3: try try decoder.decodeSingularInt32Field(value: &_distance)
            case 4: try try decoder.decodeSingularInt32Field(value: &_maxNumber)
            case 5: try try decoder.decodeSingularBoolField(value: &_withCoordinates)
            case 6: try try decoder.decodeSingularBoolField(value: &_withDistance)
            case 7: try try decoder.decodeSingularBoolField(value: &_withInfo)
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
        try { if let v = self._distance {
            try visitor.visitSingularInt32Field(value: v, fieldNumber: 3)
        } }()
        try { if let v = self._maxNumber {
            try visitor.visitSingularInt32Field(value: v, fieldNumber: 4)
        } }()
        try { if let v = self._withCoordinates {
            try visitor.visitSingularBoolField(value: v, fieldNumber: 5)
        } }()
        try { if let v = self._withDistance {
            try visitor.visitSingularBoolField(value: v, fieldNumber: 6)
        } }()
        try { if let v = self._withInfo {
            try visitor.visitSingularBoolField(value: v, fieldNumber: 7)
        } }()
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: QueryNearbyUsersRequest, rhs: QueryNearbyUsersRequest) -> Bool {
        if lhs.latitude != rhs.latitude { return false }
        if lhs.longitude != rhs.longitude { return false }
        if lhs._distance != rhs._distance { return false }
        if lhs._maxNumber != rhs._maxNumber { return false }
        if lhs._withCoordinates != rhs._withCoordinates { return false }
        if lhs._withDistance != rhs._withDistance { return false }
        if lhs._withInfo != rhs._withInfo { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}
