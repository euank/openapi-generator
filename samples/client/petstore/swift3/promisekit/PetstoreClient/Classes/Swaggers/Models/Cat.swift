//
// Cat.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class Cat: JSONEncodable {
    public var className: String?
    public var color: String?
    public var declawed: Bool?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["className"] = self.className
        nillableDictionary["color"] = self.color
        nillableDictionary["declawed"] = self.declawed
        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}