/*
Copyright (c) <year>, <copyright holder>
All rights reserved.

This source code is licensed under the BSD-style license found in the
LICENSE file in the root directory of this source tree. 
*/

#pragma once

// Libraries
#include <string>
#include <fstream>
#include <algorithm>
#include <iostream>
namespace YAGE {

  namespace Platform {

    class OS {

      private:
        static std::string _type;

      public:
        static std::string getOSType();

    };

  }

}