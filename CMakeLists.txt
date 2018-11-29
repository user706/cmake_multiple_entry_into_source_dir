cmake_minimum_required(VERSION 3.12)

project(go)

set(suffix "_upper")
set(UPPERCASE ON)
add_subdirectory(banner banner${suffix})

set(suffix "_lower")
set(UPPERCASE OFF)
add_subdirectory(banner banner${suffix})


add_executable       (app_upper main.cpp)
target_link_libraries(app_upper banner_upper)

add_executable       (app_lower main.cpp)
target_link_libraries(app_lower banner_lower)
