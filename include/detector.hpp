#ifndef DETECTOR_HPP
#define DETECTOR_HPP

#include "preprocessor.hpp"

#include <iostream>
#include <string>

using namespace Preprocessor;

namespace SystemInformation {

struct Detector
{
  /*!
   * \brief getArchitecture gets arch of system.
   * \return string of arch.
   */
  static std::string getArchitecture() noexcept;

  /*!
   * \brief getOperationSystem gets os name.
   * \return string of os.
   */
  static std::string getOperationSystem() noexcept;

  /*!
   * \brief getPlatformType gets platform type such as [PC, macOS and etc.].
   * \return string of platform type.
   */
  static std::string getPlatformType() noexcept;

  /*!
   * \brief getCompilerName gets compiler name such as [Clang, GCC, MSVC and etc.].
   * \return string of compiler name.
   */
  static std::string getCompilerName() noexcept;

  /*!
   * \brief getCompilerVersion gets compiler version.
   * \return string of compiler version.
   */
  static std::string getCompilerVersion() noexcept;

  /*!
   * \brief getProcessorVendor gets processors vendor such as [Intel, AMD and etc.].
   * \return string of processor vendor.
   */
  static std::string getProcessorVendor() noexcept;

};

}

#endif // DETECTOR_HPP
