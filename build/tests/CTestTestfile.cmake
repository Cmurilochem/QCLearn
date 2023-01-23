# CMake generated Testfile for 
# Source directory: /home/murilo/QCLearn/tests
# Build directory: /home/murilo/QCLearn/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(wavefunction_1D_box "/home/murilo/QCLearn/testwfpartbox")
set_tests_properties(wavefunction_1D_box PROPERTIES  _BACKTRACE_TRIPLES "/home/murilo/QCLearn/tests/CMakeLists.txt;29;add_test;/home/murilo/QCLearn/tests/CMakeLists.txt;0;")
subdirs("../_deps/catch-build")
