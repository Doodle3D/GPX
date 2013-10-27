cmake_minimum_required(VERSION 2.6)
project(gpx)

set(SOURCES getopt.c gpx.c ini.c)
set(HEADERS getopt.h gpx.h ini.h)

add_executable(gpx ${SOURCES} ${HEADERS})

install(TARGETS gpx RUNTIME DESTINATION bin)
