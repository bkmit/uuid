cmake_minimum_required(VERSION 2.6)

project(uuid)

add_subdirectory(src)

# Options
option (BUILD_SHARED_LIBS "Build shared libraries." OFF)

set(LIBUUID_VERSION "2.19.0")

configure_file(uuid.pc.cmake uuid.pc @ONLY)

install(FILES ${uuid_BINARY_DIR}/uuid.pc DESTINATION lib/pkgconfig)
