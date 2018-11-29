add_library               (banner${suffix} banner.cpp banner.h)
target_include_directories(banner${suffix} PUBLIC .)

if (UPPERCASE)
  target_compile_definitions(banner${suffix} PRIVATE UPPER)
endif()
