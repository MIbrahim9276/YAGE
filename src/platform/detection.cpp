#include <platform/detection.hpp>

using namespace YAGE;
using namespace Platform;

// Clear static variables
std::string YAGE::Platform::OS::_type = "";

// Detect OS
#if defined(_WIN32)

  // Detect if Windows 64-bit or 32-bit
  #if defined(_WIN64)
    std::string OS::_type = "Windows 64bit";
  #else
    std::string OS::_type = "Windows 32bit";
  #endif

  std::string OS::getOSType() {
    return _type;
  }

#elif __unix__

  // Detect which unix-based system it is
  #if defined(BSD)

    // Detect which flavor of BSD
    #if defined(__DragonFly__)
      std::string OS::_type = "DragonFly BSD";
    #elif __FreeBSD__
      std::string OS::_type = "FreeBSD";
    #elif __NetBSD__
      std::string OS::_type = "NetBSD";
    #elif __OpenBSD__
      std::string OS::_type = "OpenBSD";
    #else
      std::string OS::_type = "BSD";
    #endif

    std::string OS::getOSType() {
      return _type;
    }

  #elif __linux__

    // Detect Linux disturbution
    std::string OS::getOSType() {

      // Just return the disturbution if already detected
      if (_type.empty()) {

        // Read Version information from os-release
        std::ifstream versionFile("/etc/os-release");
        std::string line;

        // Extract the information
        while (std::getline(versionFile, line)) {

          if (line.find("NAME=") != std::string::npos) {
            
            // Extract information from the line
            _type = line.substr(line.find("=") + 1);

            // Remove any quotes from the string
            _type.erase(std::remove(_type.begin(), _type.end(), '"'), _type.end());
            break;

          }

        }

        versionFile.close();
        
      }

      return _type;

    }

  #elif __sun

    std::string YAGE::Platform::OS::_type = "Solaris";
    std::string OS::getOSType() {
      return _type;
    }

  #elif __hpux

    std::string YAGE::Platform::OS::_type = "HP UX";
    std::string OS::getOSType() {
      return _type;
    }

  #endif

#endif