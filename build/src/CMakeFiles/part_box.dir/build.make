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
include src/CMakeFiles/part_box.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/part_box.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/part_box.dir/flags.make

src/CMakeFiles/part_box.dir/particle_box.cpp.o: src/CMakeFiles/part_box.dir/flags.make
src/CMakeFiles/part_box.dir/particle_box.cpp.o: ../src/particle_box.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/murilo/QCLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/part_box.dir/particle_box.cpp.o"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/part_box.dir/particle_box.cpp.o -c /home/murilo/QCLearn/src/particle_box.cpp

src/CMakeFiles/part_box.dir/particle_box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/part_box.dir/particle_box.cpp.i"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/murilo/QCLearn/src/particle_box.cpp > CMakeFiles/part_box.dir/particle_box.cpp.i

src/CMakeFiles/part_box.dir/particle_box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/part_box.dir/particle_box.cpp.s"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/murilo/QCLearn/src/particle_box.cpp -o CMakeFiles/part_box.dir/particle_box.cpp.s

# Object files for target part_box
part_box_OBJECTS = \
"CMakeFiles/part_box.dir/particle_box.cpp.o"

# External object files for target part_box
part_box_EXTERNAL_OBJECTS =

src/libpart_box.a: src/CMakeFiles/part_box.dir/particle_box.cpp.o
src/libpart_box.a: src/CMakeFiles/part_box.dir/build.make
src/libpart_box.a: src/CMakeFiles/part_box.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/murilo/QCLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libpart_box.a"
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -P CMakeFiles/part_box.dir/cmake_clean_target.cmake
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/part_box.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/part_box.dir/build: src/libpart_box.a

.PHONY : src/CMakeFiles/part_box.dir/build

src/CMakeFiles/part_box.dir/clean:
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -P CMakeFiles/part_box.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/part_box.dir/clean

src/CMakeFiles/part_box.dir/depend:
	cd /home/murilo/QCLearn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/murilo/QCLearn /home/murilo/QCLearn/src /home/murilo/QCLearn/build /home/murilo/QCLearn/build/src /home/murilo/QCLearn/build/src/CMakeFiles/part_box.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/part_box.dir/depend

