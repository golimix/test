# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work/workspace/test/cpp/boost/study/asio-master/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/workspace/test/cpp/boost/study/asio-master/src

# Include any dependencies generated for this target.
include log/CMakeFiles/log4_test.dir/depend.make

# Include the progress variables for this target.
include log/CMakeFiles/log4_test.dir/progress.make

# Include the compile flags for this target's objects.
include log/CMakeFiles/log4_test.dir/flags.make

log/CMakeFiles/log4_test.dir/log4cplus.cc.o: log/CMakeFiles/log4_test.dir/flags.make
log/CMakeFiles/log4_test.dir/log4cplus.cc.o: log/log4cplus.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /work/workspace/test/cpp/boost/study/asio-master/src/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object log/CMakeFiles/log4_test.dir/log4cplus.cc.o"
	cd /work/workspace/test/cpp/boost/study/asio-master/src/log && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/log4_test.dir/log4cplus.cc.o -c /work/workspace/test/cpp/boost/study/asio-master/src/log/log4cplus.cc

log/CMakeFiles/log4_test.dir/log4cplus.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/log4_test.dir/log4cplus.cc.i"
	cd /work/workspace/test/cpp/boost/study/asio-master/src/log && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /work/workspace/test/cpp/boost/study/asio-master/src/log/log4cplus.cc > CMakeFiles/log4_test.dir/log4cplus.cc.i

log/CMakeFiles/log4_test.dir/log4cplus.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/log4_test.dir/log4cplus.cc.s"
	cd /work/workspace/test/cpp/boost/study/asio-master/src/log && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /work/workspace/test/cpp/boost/study/asio-master/src/log/log4cplus.cc -o CMakeFiles/log4_test.dir/log4cplus.cc.s

log/CMakeFiles/log4_test.dir/log4cplus.cc.o.requires:
.PHONY : log/CMakeFiles/log4_test.dir/log4cplus.cc.o.requires

log/CMakeFiles/log4_test.dir/log4cplus.cc.o.provides: log/CMakeFiles/log4_test.dir/log4cplus.cc.o.requires
	$(MAKE) -f log/CMakeFiles/log4_test.dir/build.make log/CMakeFiles/log4_test.dir/log4cplus.cc.o.provides.build
.PHONY : log/CMakeFiles/log4_test.dir/log4cplus.cc.o.provides

log/CMakeFiles/log4_test.dir/log4cplus.cc.o.provides.build: log/CMakeFiles/log4_test.dir/log4cplus.cc.o

# Object files for target log4_test
log4_test_OBJECTS = \
"CMakeFiles/log4_test.dir/log4cplus.cc.o"

# External object files for target log4_test
log4_test_EXTERNAL_OBJECTS =

log/log4_test: log/CMakeFiles/log4_test.dir/log4cplus.cc.o
log/log4_test: log/CMakeFiles/log4_test.dir/build.make
log/log4_test: /usr/lib64/libboost_thread-mt.so
log/log4_test: /usr/lib64/libboost_system-mt.so
log/log4_test: /usr/lib64/libboost_chrono-mt.so
log/log4_test: log/CMakeFiles/log4_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable log4_test"
	cd /work/workspace/test/cpp/boost/study/asio-master/src/log && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/log4_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
log/CMakeFiles/log4_test.dir/build: log/log4_test
.PHONY : log/CMakeFiles/log4_test.dir/build

log/CMakeFiles/log4_test.dir/requires: log/CMakeFiles/log4_test.dir/log4cplus.cc.o.requires
.PHONY : log/CMakeFiles/log4_test.dir/requires

log/CMakeFiles/log4_test.dir/clean:
	cd /work/workspace/test/cpp/boost/study/asio-master/src/log && $(CMAKE_COMMAND) -P CMakeFiles/log4_test.dir/cmake_clean.cmake
.PHONY : log/CMakeFiles/log4_test.dir/clean

log/CMakeFiles/log4_test.dir/depend:
	cd /work/workspace/test/cpp/boost/study/asio-master/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/workspace/test/cpp/boost/study/asio-master/src /work/workspace/test/cpp/boost/study/asio-master/src/log /work/workspace/test/cpp/boost/study/asio-master/src /work/workspace/test/cpp/boost/study/asio-master/src/log /work/workspace/test/cpp/boost/study/asio-master/src/log/CMakeFiles/log4_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : log/CMakeFiles/log4_test.dir/depend
