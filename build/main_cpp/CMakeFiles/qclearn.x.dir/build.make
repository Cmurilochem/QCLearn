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
include main_cpp/CMakeFiles/qclearn.x.dir/depend.make

# Include the progress variables for this target.
include main_cpp/CMakeFiles/qclearn.x.dir/progress.make

# Include the compile flags for this target's objects.
include main_cpp/CMakeFiles/qclearn.x.dir/flags.make

main_cpp/CMakeFiles/qclearn.x.dir/main.cpp.o: main_cpp/CMakeFiles/qclearn.x.dir/flags.make
main_cpp/CMakeFiles/qclearn.x.dir/main.cpp.o: ../main_cpp/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/murilo/QCLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object main_cpp/CMakeFiles/qclearn.x.dir/main.cpp.o"
	cd /home/murilo/QCLearn/build/main_cpp && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qclearn.x.dir/main.cpp.o -c /home/murilo/QCLearn/main_cpp/main.cpp

main_cpp/CMakeFiles/qclearn.x.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qclearn.x.dir/main.cpp.i"
	cd /home/murilo/QCLearn/build/main_cpp && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/murilo/QCLearn/main_cpp/main.cpp > CMakeFiles/qclearn.x.dir/main.cpp.i

main_cpp/CMakeFiles/qclearn.x.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qclearn.x.dir/main.cpp.s"
	cd /home/murilo/QCLearn/build/main_cpp && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/murilo/QCLearn/main_cpp/main.cpp -o CMakeFiles/qclearn.x.dir/main.cpp.s

# Object files for target qclearn.x
qclearn_x_OBJECTS = \
"CMakeFiles/qclearn.x.dir/main.cpp.o"

# External object files for target qclearn.x
qclearn_x_EXTERNAL_OBJECTS = \
"/home/murilo/QCLearn/build/src/CMakeFiles/head_foot.dir/head_foot.cpp.o" \
"/home/murilo/QCLearn/build/src/CMakeFiles/job_class.dir/classes.cpp.o" \
"/home/murilo/QCLearn/build/src/CMakeFiles/constants.dir/constants.cpp.o"

../qclearn.x: main_cpp/CMakeFiles/qclearn.x.dir/main.cpp.o
../qclearn.x: src/CMakeFiles/head_foot.dir/head_foot.cpp.o
../qclearn.x: src/CMakeFiles/job_class.dir/classes.cpp.o
../qclearn.x: src/CMakeFiles/constants.dir/constants.cpp.o
../qclearn.x: main_cpp/CMakeFiles/qclearn.x.dir/build.make
../qclearn.x: main_cpp/CMakeFiles/qclearn.x.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/murilo/QCLearn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../qclearn.x"
	cd /home/murilo/QCLearn/build/main_cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qclearn.x.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
main_cpp/CMakeFiles/qclearn.x.dir/build: ../qclearn.x

.PHONY : main_cpp/CMakeFiles/qclearn.x.dir/build

main_cpp/CMakeFiles/qclearn.x.dir/clean:
	cd /home/murilo/QCLearn/build/main_cpp && $(CMAKE_COMMAND) -P CMakeFiles/qclearn.x.dir/cmake_clean.cmake
.PHONY : main_cpp/CMakeFiles/qclearn.x.dir/clean

main_cpp/CMakeFiles/qclearn.x.dir/depend:
	cd /home/murilo/QCLearn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/murilo/QCLearn /home/murilo/QCLearn/main_cpp /home/murilo/QCLearn/build /home/murilo/QCLearn/build/main_cpp /home/murilo/QCLearn/build/main_cpp/CMakeFiles/qclearn.x.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : main_cpp/CMakeFiles/qclearn.x.dir/depend

