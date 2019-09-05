set (Boost_USE_STATIC_LIBS OFF)
find_package (Boost REQUIRED COMPONENTS unit_test_framework)
#include_directories (${Boost_INCLUDE_DIRS})
include_directories(/usr/local/opt/boost/include/)
link_directories(/usr/local/opt/boost/lib/)
# 'Boost_Tests_run' is the target name

add_executable (test test.cpp)
target_link_libraries(${TARGET}
        ${Boost_LOG_SETUP_LIBRARY}
        ${Boost_LOG_LIBRARY}
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_THREAD_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        )