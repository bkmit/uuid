prefix=@CMAKE_INSTALL_PREFIX@
libdir=${prefix}/lib
includedir=${prefix}/includedir

Name: uuid
Description: Universally unique id library
Version: @LIBUUID_VERSION@
Requires:
Cflags: -I${includedir}/uuid
Libs: -L${libdir} -luuid
