cmake_minimum_required(VERSION 3.1...3.16)

# just in case, put a condition to version lower than 3.1 and update policies 

if(${CMAKE_VERSION} VERSION_LESS 3.10)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

# project description

project(MyProject VERSION 1.0.0
                  DESCRIPTION "QCLearn"
                  LANGUAGES CXX)

# Generate executable in my main directory
                  
#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${MyProject_SOURCE_DIR})                  
                  
# Let's nicely support folders in IDEs

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# including tests

include(CTest)

# The compiled library code is here

add_subdirectory(src)
                  
# The executable code is here

add_subdirectory(main_cpp)

# Adding also the tests in the path 

add_subdirectory(tests)        
