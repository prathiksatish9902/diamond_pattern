cmake_minimum_required(VERSION 3.16)

project(pattern_matching LANGUAGES C)

add_executable(pattern_matching main.c)

include(GNUInstallDirs)
install(TARGETS pattern_matching
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
