#include "detector.hpp"

#include <sstream>

using namespace Preprocessor;

namespace SystemInformation {

  std::string Detector::getArchitecture() noexcept
  {
    return PLATFORM_ARCH;
  }

  std::string Detector::getOperationSystem() noexcept
  {
    return PLATFORM_OS;
  }

  std::string Detector::getPlatformType() noexcept
  {
    return PLATFORM_TYPE;
  }

  std::string Detector::getCompilerName() noexcept
  {
    return COMPILER;
  }

  std::string Detector::getCompilerVersion() noexcept
  {
    std::ostringstream strStream;
    strStream << COMPILER_VER;
    return std::string(strStream.str());
  }

  std::string Detector::getProcessorVendor() noexcept
  {
    return PROCESSOR;
  }

}
