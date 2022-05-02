project (bence-sample)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

set (SOURCES 
    src/base_clock.cxx
    src/local_clock.cxx
    src/utc_clock.cxx
    src/base_clock_displayer.cxx
    src/simple_clock_displayer.cxx
    src/pretty_clock_displayer.cxx
    main.cxx
)

add_executable(clock
    ${SOURCES}
)
