/*
Copyright (c) <year>, <copyright holder>
All rights reserved.

This source code is licensed under the BSD-style license found in the
LICENSE file in the root directory of this source tree. 
*/

#pragma once

// Libraries
#include <string>

namespace YAGE {

  // Windows
    #if defined(_WIN32)

      // Detect 64-bit vs 32-bit
      #if defined(_WIN64)
        #define YAGE_OS_TYPE "WIN64"
      #else
        #define YAGE_OS_TYPE "WIN32"
      #endif

      // Windows Libraries
      #include <Windows.h>

      // Detect OS version
      unsigned long majorVersion;
      unsigned long minorVersion;
      unsigned long buildNumber;
      unsigned long platformId;
      unsigned long productType

      // Get the info
      GetProductInfo(
            majorVersion,
            minorVersion,
            buildNumber,
            platformId,
            productType);

      // Assign the values to global variables
      const unsigned long YAGE_OS_VERSION_MAJOR = majorVersion;
      const unsigned long YAGE_OS_VERSION_MINOR = minorVersion;
      const unsigned long YAGE_OS_BUILD_NUMBER = buildNumber;
      const unsigned long YAGE_OS_PLATFORM_ID = platformId;
      const unsigned long YAGE_OS_PRODUCT_TYPE = productType;
    #endif

}