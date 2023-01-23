##################################################################################

# FetchContent added in CMake 3.11, downloads during the configure step
# FetchContent_MakeAvailable was added in CMake 3.14; simpler usage

include(FetchContent)

# Testing library

FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v2.13.6)
FetchContent_MakeAvailable(catch)

# Adds Catch2::Catch2

# Tests need to be added as executables first

add_executable(testwfpartbox testwfpartbox.cpp)

# Should be linked to the main library

target_link_libraries(testwfpartbox PRIVATE part_box constants Catch2::Catch2)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.

add_test(NAME wavefunction_1D_box COMMAND testwfpartbox) # Command can be a target

##################################################################################
