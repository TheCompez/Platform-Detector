#include <iostream>

#include "detector.hpp"

using namespace std;
using namespace SystemInformation;

int main()
{
  cout << "Hello World!" << endl;
  cout << "Platform Architecture : "  << Detector::getArchitecture      () << endl;
  cout << "Processor Vendor : "       << Detector::getProcessorVendor   () << endl;
  cout << "Platform Type : "          << Detector::getPlatformType      () << endl;
  cout << "Operation System : "       << Detector::getOperationSystem   () << endl;
  cout << "Compiler Name : "          << Detector::getCompilerName      () << endl;
  cout << "Compiler Version : "       << Detector::getCompilerVersion   () << endl;

//!Compiler Stataement
#if defined(__COMPILER_CLANG_LLVM_)
  cout << "Clang compiler has been detected!\n";
#elif defined(__COMPILER_INTEL__)
  cout << "Intel compiler has been detected!\n";
#elif defined(__COMPILER_MINGW__)
  cout << "MinGW compiler has been detected!\n";
#elif defined(__COMPILER_MINGW_64__)
  cout << "MinGW64 compiler has been detected!\n";
#elif defined(__COMPILER_GCC__)
  cout << "GCC compiler has been detected!\n";
#elif defined(__COMPILER__HEWLETT_)
  cout << "Hewlett compiler has been detected!\n";
#elif defined(__COMPILER_IBM__)
  cout << "IBM compiler has been detected!\n";
#elif defined(__COMPILER_MSVC__)
  cout << "MSVC compiler has been detected!\n";
#elif defined(__COMPILER_PGCC__)
  cout << "PGCC compiler has been detected!\n";
#elif defined(__COMPILER_ORACLE__)
  cout << "Oracle compiler has been detected!\n";
#endif

//!Platform Stataement

#if defined(PLATFORM_MAC)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_MAC << "\n";
#elif defined(PLATFORM_WINDOWS)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_WINDOWS << "\n";
#elif defined(PLATFORM_LINUX)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_LINUX << "\n";
#elif defined(PLATFORM_FREEBSD)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_FREEBSD << "\n";
#elif defined(PLATFORM_OPENBSD)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_OPENBSD << "\n";
#elif defined(PLATFORM_VXWORKS)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_VXWORKS << "\n";
#elif defined(PLATFORM_MOTOROLA)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_MOTOROLA << "\n";
#elif defined(PLATFORM_ULTRIX)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_ULTRIX << "\n";
#elif defined(PLATFORM_DOS)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_DOS << "\n";
#elif defined(PLATFORM_WINDOWS_PHONE)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_WINDOWS_PHONE << "\n";
#elif defined(PLATFORM_IOS_SIMULATOR)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_IOS_SIMULATOR << "\n";
#elif defined(PLATFORM_IOS)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_IOS << "\n";
#elif defined(PLATFORM_APPLE_TV)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_APPLE_TV << "\n";
#elif defined(PLATFORM_IWATCH)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_IWATCH << "\n";
#elif defined(PLATFORM_ANDROID)
    cout << "Device: " << PLATFORM_DEVICE << "\n";
    cout << "Type: " << PLATFORM_TYPE << "\n";
    cout << "Platform OS: " << PLATFORM_OS << "\n";
    cout << "Platform Architecture: " << PLATFORM_ARCH << "\n";
    cout << "OS Name: " << PLATFORM_ANDROID << "\n";
#endif
  cout << "Detected C++ Standard ISO Value : " << CPP_VALUE << "\n";
  cout << "Detected C++ Standard Version : "   << CPP_VERSION << "\n";
  return 0;
}
