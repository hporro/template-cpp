if(TARGET catch2)
    return()
endif()

include(FetchContent)
FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v3.5.2
)
FetchContent_MakeAvailable(catch2)
