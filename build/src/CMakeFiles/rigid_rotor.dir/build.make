# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/murilo/QCLearn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/murilo/QCLearn/build

# Include any dependencies generated for this target.
include src/CMakeFiles/rigid_rotor.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/rigid_rotor.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/rigid_rotor.dir/flags.make

src/CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.o: src/CMakeFiles/rigid_rotor.dir/flags.make
src/CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.o: ../src/rigid_rotor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/murilo/QCLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.o"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.o -c /home/murilo/QCLearn/src/rigid_rotor.cpp

src/CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.i"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/murilo/QCLearn/src/rigid_rotor.cpp > CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.i

src/CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.s"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/murilo/QCLearn/src/rigid_rotor.cpp -o CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.s

# Object files for target rigid_rotor
rigid_rotor_OBJECTS = \
"CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.o"

# External object files for target rigid_rotor
rigid_rotor_EXTERNAL_OBJECTS =

src/librigid_rotor.a: src/CMakeFiles/rigid_rotor.dir/rigid_rotor.cpp.o
src/librigid_rotor.a: src/CMakeFiles/rigid_rotor.dir/build.make
src/librigid_rotor.a: src/CMakeFiles/rigid_rotor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/murilo/QCLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library librigid_rotor.a"
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -P CMakeFiles/rigid_rotor.dir/cmake_clean_target.cmake
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rigid_rotor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/rigid_rotor.dir/build: src/librigid_rotor.a

.PHONY : src/CMakeFiles/rigid_rotor.dir/build

src/CMakeFiles/rigid_rotor.dir/clean:
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -P CMakeFiles/rigid_rotor.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/rigid_rotor.dir/clean

src/CMakeFiles/rigid_rotor.dir/depend:
	cd /home/murilo/QCLearn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/murilo/QCLearn /home/murilo/QCLearn/src /home/murilo/QCLearn/build /home/murilo/QCLearn/build/src /home/murilo/QCLearn/build/src/CMakeFiles/rigid_rotor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/rigid_rotor.dir/depend

