/*
Copyright (c) <year>, <copyright holder>
All rights reserved.

This source code is licensed under the BSD-style license found in the
LICENSE file in the root directory of this source tree. 
*/

#include <platform/detection.hpp>

int main() {
  std::cout << "Hello World" << std::endl;

  std::cout << YAGE::Platform::OS::getOSType() << std::endl;

  return 0;
}