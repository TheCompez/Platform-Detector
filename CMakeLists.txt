cmake_minimum_required(VERSION 3.5)

project(Platform-Detector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SUFFIX_HPPHEADER *.hpp)
set(SUFFIX_SOURCE *.cpp)

#set_property(GLOBAL PROPERTY USE_FOLDERS ON)

file(GLOB HEADERS include/${SUFFIX_HPPHEADER})
file(GLOB SOURCES source/${SUFFIX_SOURCE})

file(GLOB CONFIGFILE config/${SUFFIX_CONFIG})

file(GLOB SOURCESFILE
#---C++---
${HEADERS}
${SOURCES}
)

add_executable(Platform-Detector ${SOURCESFILE})
