#include <iostream>

#include "../include/detector.hpp"

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
  cout << "This is macOS platform!\n";
#elif defined(PLATFORM_WINDOWS)
  cout << "This is Windows platform!\n";
#elif defined(PLATFORM_LINUX)
  cout << "This is Linux platform!\n";
#elif defined(PLATFORM_FREEBSD)
  cout << "This is freeBSD platform!\n";
#elif defined(PLATFORM_OPENBSD)
  cout << "This is openBSD platform!\n";
#elif defined(PLATFORM_VXWORKS)
  cout << "This is VXWorks platform!\n";
#elif defined(PLATFORM_MOTOROLA)
  cout << "This is Motorola platform!\n";
#elif defined(PLATFORM_ULTRIX)
  cout << "This is Ultrix platform!\n";
#elif defined(PLATFORM_DOS)
  cout << "This is Dos platform!\n";
#elif defined(PLATFORM_WINDOWS_PHONE)
  cout << "This is Windows Phone platform!\n";
#elif defined(PLATFORM_IOS_SIMULATOR)
  cout << "This is iOS Simulator platform!\n";
#elif defined(PLATFORM_IOS)
  cout << "This is iOS platform!\n";
#elif defined(PLATFORM_APPLE_TV)
  cout << "This is AppleTV platform!\n";
#elif defined(PLATFORM_IWATCH)
  cout << "This is iWatch platform!\n";
#elif defined(PLATFORM_ANDROID)
  cout << "This is Android platform!\n";
#endif
  cout << "Detected C++ Standard ISO Value : " << __CPP_VALUE__ << "\n";
  cout << "Detected C++ Standard Version : "   << __CPP_VERSION__ << "\n";

  return 0;
}
