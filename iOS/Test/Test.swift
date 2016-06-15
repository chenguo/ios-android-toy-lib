//
//  Test.swift
//  Test
//
//  Created by Chen Guo on 6/10/16.
//  Copyright © 2016 cg. All rights reserved.
//

import XCTest


class Test: XCTestCase {

  func testMathDotProduct() {
    let mathLib = MathLib()
    var vecA : [Double] = [2.0, 1.5, 4]
    var vecB : [Double] = [1.0, 2.0, 2]
    let result = mathLib.dotProduct(&vecA, y:&vecB, length:vecA.count)
    XCTAssertEqual(result, 13)
  }

  func testStrGet() {
    let strLib = StringLib(str: "foobarbaz");
    let result = strLib.getInternal();
    XCTAssertEqual(result, "foobarbaz")
  }

  func testStrConcat() {
    let strLib = StringLib(str: "foo")
    let result = strLib.concatWithStr("bar")
    XCTAssertEqual(result, "foobar")
  }

}
