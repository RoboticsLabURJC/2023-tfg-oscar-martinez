# Install script for directory: /home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/install/sophus")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sophus/cmake/SophusTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sophus/cmake/SophusTargets.cmake"
         "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/build/sophus/CMakeFiles/Export/share/sophus/cmake/SophusTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sophus/cmake/SophusTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/sophus/cmake/SophusTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sophus/cmake" TYPE FILE FILES "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/build/sophus/CMakeFiles/Export/share/sophus/cmake/SophusTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sophus/cmake" TYPE FILE FILES
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/build/sophus/SophusConfig.cmake"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/build/sophus/SophusConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/sophus" TYPE FILE FILES
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/average.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/common.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/geometry.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/interpolate.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/interpolate_details.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/num_diff.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/rotation_matrix.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/rxso2.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/rxso3.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/se2.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/se3.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/sim2.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/sim3.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/sim_details.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/so2.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/so3.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/types.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/velocities.hpp"
    "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/src/ThirdParty/sophus/sophus/formatstring.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/build/sophus/test/cmake_install.cmake")
  include("/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/build/sophus/examples/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/omartinez/2023-tfg-oscar-martinez/src/webbt_ws/build/sophus/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
