##################################################################################

# FetchContent added in CMake 3.11, downloads during the configure step
# FetchContent_MakeAvailable was added in CMake 3.14; simpler usage

include(FetchContent)

# Testing library

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.0.1)
FetchContent_MakeAvailable(Catch2)

# Adds Catch2::Catch2

##################################################################################

# Tests need to be added as executables first

add_executable(testwfpartbox testwfpartbox.cpp)

# Should be linked to the main library

target_link_libraries(testwfpartbox PRIVATE part_box constants Catch2::Catch2WithMain)

##################################################################################

add_executable(testenergypartbox testenergypartbox.cpp)
target_link_libraries(testenergypartbox PRIVATE part_box constants Catch2::Catch2WithMain)

##################################################################################

# If you register a test

add_test(NAME wavefunction_1D_box COMMAND testwfpartbox) # Command can be a target
add_test(NAME energy_1D_box COMMAND testenergypartbox) 

##################################################################################
