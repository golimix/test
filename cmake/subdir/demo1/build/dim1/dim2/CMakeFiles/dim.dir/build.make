# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.3

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rongtao/test/cmake/subdir/demo1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rongtao/test/cmake/subdir/demo1/build

# Include any dependencies generated for this target.
include dim1/dim2/CMakeFiles/dim.dir/depend.make

# Include the progress variables for this target.
include dim1/dim2/CMakeFiles/dim.dir/progress.make

# Include the compile flags for this target's objects.
include dim1/dim2/CMakeFiles/dim.dir/flags.make

dim1/dim2/CMakeFiles/dim.dir/dim.c.o: dim1/dim2/CMakeFiles/dim.dir/flags.make
dim1/dim2/CMakeFiles/dim.dir/dim.c.o: ../dim1/dim2/dim.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rongtao/test/cmake/subdir/demo1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object dim1/dim2/CMakeFiles/dim.dir/dim.c.o"
	cd /home/rongtao/test/cmake/subdir/demo1/build/dim1/dim2 && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/dim.dir/dim.c.o   -c /home/rongtao/test/cmake/subdir/demo1/dim1/dim2/dim.c

dim1/dim2/CMakeFiles/dim.dir/dim.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dim.dir/dim.c.i"
	cd /home/rongtao/test/cmake/subdir/demo1/build/dim1/dim2 && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/cmake/subdir/demo1/dim1/dim2/dim.c > CMakeFiles/dim.dir/dim.c.i

dim1/dim2/CMakeFiles/dim.dir/dim.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dim.dir/dim.c.s"
	cd /home/rongtao/test/cmake/subdir/demo1/build/dim1/dim2 && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/cmake/subdir/demo1/dim1/dim2/dim.c -o CMakeFiles/dim.dir/dim.c.s

dim1/dim2/CMakeFiles/dim.dir/dim.c.o.requires:

.PHONY : dim1/dim2/CMakeFiles/dim.dir/dim.c.o.requires

dim1/dim2/CMakeFiles/dim.dir/dim.c.o.provides: dim1/dim2/CMakeFiles/dim.dir/dim.c.o.requires
	$(MAKE) -f dim1/dim2/CMakeFiles/dim.dir/build.make dim1/dim2/CMakeFiles/dim.dir/dim.c.o.provides.build
.PHONY : dim1/dim2/CMakeFiles/dim.dir/dim.c.o.provides

dim1/dim2/CMakeFiles/dim.dir/dim.c.o.provides.build: dim1/dim2/CMakeFiles/dim.dir/dim.c.o


# Object files for target dim
dim_OBJECTS = \
"CMakeFiles/dim.dir/dim.c.o"

# External object files for target dim
dim_EXTERNAL_OBJECTS =

dim1/dim2/libdim.a: dim1/dim2/CMakeFiles/dim.dir/dim.c.o
dim1/dim2/libdim.a: dim1/dim2/CMakeFiles/dim.dir/build.make
dim1/dim2/libdim.a: dim1/dim2/CMakeFiles/dim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rongtao/test/cmake/subdir/demo1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libdim.a"
	cd /home/rongtao/test/cmake/subdir/demo1/build/dim1/dim2 && $(CMAKE_COMMAND) -P CMakeFiles/dim.dir/cmake_clean_target.cmake
	cd /home/rongtao/test/cmake/subdir/demo1/build/dim1/dim2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dim1/dim2/CMakeFiles/dim.dir/build: dim1/dim2/libdim.a

.PHONY : dim1/dim2/CMakeFiles/dim.dir/build

dim1/dim2/CMakeFiles/dim.dir/requires: dim1/dim2/CMakeFiles/dim.dir/dim.c.o.requires

.PHONY : dim1/dim2/CMakeFiles/dim.dir/requires

dim1/dim2/CMakeFiles/dim.dir/clean:
	cd /home/rongtao/test/cmake/subdir/demo1/build/dim1/dim2 && $(CMAKE_COMMAND) -P CMakeFiles/dim.dir/cmake_clean.cmake
.PHONY : dim1/dim2/CMakeFiles/dim.dir/clean

dim1/dim2/CMakeFiles/dim.dir/depend:
	cd /home/rongtao/test/cmake/subdir/demo1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rongtao/test/cmake/subdir/demo1 /home/rongtao/test/cmake/subdir/demo1/dim1/dim2 /home/rongtao/test/cmake/subdir/demo1/build /home/rongtao/test/cmake/subdir/demo1/build/dim1/dim2 /home/rongtao/test/cmake/subdir/demo1/build/dim1/dim2/CMakeFiles/dim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dim1/dim2/CMakeFiles/dim.dir/depend

