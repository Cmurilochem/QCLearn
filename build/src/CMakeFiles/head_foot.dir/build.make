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
include src/CMakeFiles/head_foot.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/head_foot.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/head_foot.dir/flags.make

src/CMakeFiles/head_foot.dir/head_foot.cpp.o: src/CMakeFiles/head_foot.dir/flags.make
src/CMakeFiles/head_foot.dir/head_foot.cpp.o: ../src/head_foot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/murilo/QCLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/head_foot.dir/head_foot.cpp.o"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/head_foot.dir/head_foot.cpp.o -c /home/murilo/QCLearn/src/head_foot.cpp

src/CMakeFiles/head_foot.dir/head_foot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/head_foot.dir/head_foot.cpp.i"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/murilo/QCLearn/src/head_foot.cpp > CMakeFiles/head_foot.dir/head_foot.cpp.i

src/CMakeFiles/head_foot.dir/head_foot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/head_foot.dir/head_foot.cpp.s"
	cd /home/murilo/QCLearn/build/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/murilo/QCLearn/src/head_foot.cpp -o CMakeFiles/head_foot.dir/head_foot.cpp.s

# Object files for target head_foot
head_foot_OBJECTS = \
"CMakeFiles/head_foot.dir/head_foot.cpp.o"

# External object files for target head_foot
head_foot_EXTERNAL_OBJECTS =

src/libhead_foot.a: src/CMakeFiles/head_foot.dir/head_foot.cpp.o
src/libhead_foot.a: src/CMakeFiles/head_foot.dir/build.make
src/libhead_foot.a: src/CMakeFiles/head_foot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/murilo/QCLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libhead_foot.a"
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -P CMakeFiles/head_foot.dir/cmake_clean_target.cmake
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/head_foot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/head_foot.dir/build: src/libhead_foot.a

.PHONY : src/CMakeFiles/head_foot.dir/build

src/CMakeFiles/head_foot.dir/clean:
	cd /home/murilo/QCLearn/build/src && $(CMAKE_COMMAND) -P CMakeFiles/head_foot.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/head_foot.dir/clean

src/CMakeFiles/head_foot.dir/depend:
	cd /home/murilo/QCLearn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/murilo/QCLearn /home/murilo/QCLearn/src /home/murilo/QCLearn/build /home/murilo/QCLearn/build/src /home/murilo/QCLearn/build/src/CMakeFiles/head_foot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/head_foot.dir/depend

