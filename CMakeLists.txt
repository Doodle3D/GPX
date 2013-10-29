cmake_minimum_required(VERSION 2.6)
project(gpx)

option(BUILD_AS_LIBRARY "build a static library instead of an executable" OFF)

set(SOURCES gpx.c)
set(HEADERS gpx.h)

if(WIN32)
	set(SOURCES ${SOURCES} getopt.c)
	set(HEADERS ${HEADERS} getopt.h)
endif(WIN32)

if(BUILD_AS_LIBRARY)

	set(HEADERS ${HEADERS} libgpx.h)
	add_library(gpx ${SOURCES} ${HEADERS})
	set_target_properties(gpx PROPERTIES COMPILE_FLAGS "-DBUILD_AS_LIBRARY")

else(BUILD_AS_LIBRARY)

	set(SOURCES ${SOURCES} ini.c)
	set(HEADERS ${HEADERS} ini.h)

	add_executable(gpx ${SOURCES} ${HEADERS})
	install(TARGETS gpx RUNTIME DESTINATION bin)

endif(BUILD_AS_LIBRARY)
