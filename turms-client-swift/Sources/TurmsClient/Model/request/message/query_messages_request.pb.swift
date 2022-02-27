// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/message/query_messages_request.proto
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

public struct QueryMessagesRequest {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var ids: [Int64] = []

    public var size: Int32 {
        get { return _size ?? 0 }
        set { _size = newValue }
    }

    /// Returns true if `size` has been explicitly set.
    public var hasSize: Bool { return _size != nil }
    /// Clears the value of `size`. Subsequent reads from it will return its default value.
    public mutating func clearSize() { _size = nil }

    public var areGroupMessages: Bool {
        get { return _areGroupMessages ?? false }
        set { _areGroupMessages = newValue }
    }

    /// Returns true if `areGroupMessages` has been explicitly set.
    public var hasAreGroupMessages: Bool { return _areGroupMessages != nil }
    /// Clears the value of `areGroupMessages`. Subsequent reads from it will return its default value.
    public mutating func clearAreGroupMessages() { _areGroupMessages = nil }

    public var areSystemMessages: Bool {
        get { return _areSystemMessages ?? false }
        set { _areSystemMessages = newValue }
    }

    /// Returns true if `areSystemMessages` has been explicitly set.
    public var hasAreSystemMessages: Bool { return _areSystemMessages != nil }
    /// Clears the value of `areSystemMessages`. Subsequent reads from it will return its default value.
    public mutating func clearAreSystemMessages() { _areSystemMessages = nil }

    public var fromID: Int64 {
        get { return _fromID ?? 0 }
        set { _fromID = newValue }
    }

    /// Returns true if `fromID` has been explicitly set.
    public var hasFromID: Bool { return _fromID != nil }
    /// Clears the value of `fromID`. Subsequent reads from it will return its default value.
    public mutating func clearFromID() { _fromID = nil }

    public var deliveryDateAfter: Int64 {
        get { return _deliveryDateAfter ?? 0 }
        set { _deliveryDateAfter = newValue }
    }

    /// Returns true if `deliveryDateAfter` has been explicitly set.
    public var hasDeliveryDateAfter: Bool { return _deliveryDateAfter != nil }
    /// Clears the value of `deliveryDateAfter`. Subsequent reads from it will return its default value.
    public mutating func clearDeliveryDateAfter() { _deliveryDateAfter = nil }

    public var deliveryDateBefore: Int64 {
        get { return _deliveryDateBefore ?? 0 }
        set { _deliveryDateBefore = newValue }
    }

    /// Returns true if `deliveryDateBefore` has been explicitly set.
    public var hasDeliveryDateBefore: Bool { return _deliveryDateBefore != nil }
    /// Clears the value of `deliveryDateBefore`. Subsequent reads from it will return its default value.
    public mutating func clearDeliveryDateBefore() { _deliveryDateBefore = nil }

    public var withTotal: Bool = false

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _size: Int32?
    fileprivate var _areGroupMessages: Bool?
    fileprivate var _areSystemMessages: Bool?
    fileprivate var _fromID: Int64?
    fileprivate var _deliveryDateAfter: Int64?
    fileprivate var _deliveryDateBefore: Int64?
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension QueryMessagesRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".QueryMessagesRequest"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .same(proto: "ids"),
        2: .same(proto: "size"),
        3: .standard(proto: "are_group_messages"),
        4: .standard(proto: "are_system_messages"),
        5: .standard(proto: "from_id"),
        6: .standard(proto: "delivery_date_after"),
        7: .standard(proto: "delivery_date_before"),
        8: .standard(proto: "with_total"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try try decoder.decodeRepeatedInt64Field(value: &ids)
            case 2: try try decoder.decodeSingularInt32Field(value: &_size)
            case 3: try try decoder.decodeSingularBoolField(value: &_areGroupMessages)
            case 4: try try decoder.decodeSingularBoolField(value: &_areSystemMessages)
            case 5: try try decoder.decodeSingularInt64Field(value: &_fromID)
            case 6: try try decoder.decodeSingularInt64Field(value: &_deliveryDateAfter)
            case 7: try try decoder.decodeSingularInt64Field(value: &_deliveryDateBefore)
            case 8: try try decoder.decodeSingularBoolField(value: &withTotal)
            default: break
            }
        }
    }

    public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
        if !ids.isEmpty {
            try visitor.visitPackedInt64Field(value: ids, fieldNumber: 1)
        }
        try { if let v = self._size {
            try visitor.visitSingularInt32Field(value: v, fieldNumber: 2)
        } }()
        try { if let v = self._areGroupMessages {
            try visitor.visitSingularBoolField(value: v, fieldNumber: 3)
        } }()
        try { if let v = self._areSystemMessages {
            try visitor.visitSingularBoolField(value: v, fieldNumber: 4)
        } }()
        try { if let v = self._fromID {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 5)
        } }()
        try { if let v = self._deliveryDateAfter {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 6)
        } }()
        try { if let v = self._deliveryDateBefore {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 7)
        } }()
        if withTotal != false {
            try visitor.visitSingularBoolField(value: withTotal, fieldNumber: 8)
        }
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: QueryMessagesRequest, rhs: QueryMessagesRequest) -> Bool {
        if lhs.ids != rhs.ids { return false }
        if lhs._size != rhs._size { return false }
        if lhs._areGroupMessages != rhs._areGroupMessages { return false }
        if lhs._areSystemMessages != rhs._areSystemMessages { return false }
        if lhs._fromID != rhs._fromID { return false }
        if lhs._deliveryDateAfter != rhs._deliveryDateAfter { return false }
        if lhs._deliveryDateBefore != rhs._deliveryDateBefore { return false }
        if lhs.withTotal != rhs.withTotal { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}
