//
//  Test.swift
//  Test
//
//  Created by Chen Guo on 6/10/16.
//  Copyright © 2016 cg. All rights reserved.
//

import XCTest


class Test: XCTestCase {

  func testMath() {
    let math = Math()
    var vecA : [Double] = [2.0, 1.5, 4]
    var vecB : [Double] = [1.0, 2.0, 2]
    let result = math.dotProduct(&vecA, y:&vecB, length:vecA.count)
    XCTAssertEqual(result, 13)
  }

  func testFooStr() {
    let fooStr = FooStr(str: "foo_str")
    let result = fooStr.concatWithStr("_bar_str")
    XCTAssertEqual(result, "foo_str_bar_str")
  }

}
