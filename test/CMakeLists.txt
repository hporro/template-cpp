include(catch2)

add_executable(test test.cpp)
target_link_libraries(test PUBLIC Catch2 Catch2WithMain template_project)
target_include_directories(test PUBLIC ../include)
