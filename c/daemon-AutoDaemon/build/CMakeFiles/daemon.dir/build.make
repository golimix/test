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
CMAKE_SOURCE_DIR = /home/rongtao/test/c/daemon-AutoDaemon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rongtao/test/c/daemon-AutoDaemon/build

# Include any dependencies generated for this target.
include CMakeFiles/daemon.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/daemon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/daemon.dir/flags.make

CMakeFiles/daemon.dir/execute.c.o: CMakeFiles/daemon.dir/flags.make
CMakeFiles/daemon.dir/execute.c.o: ../execute.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rongtao/test/c/daemon-AutoDaemon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/daemon.dir/execute.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/daemon.dir/execute.c.o   -c /home/rongtao/test/c/daemon-AutoDaemon/execute.c

CMakeFiles/daemon.dir/execute.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/daemon.dir/execute.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/c/daemon-AutoDaemon/execute.c > CMakeFiles/daemon.dir/execute.c.i

CMakeFiles/daemon.dir/execute.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/daemon.dir/execute.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/c/daemon-AutoDaemon/execute.c -o CMakeFiles/daemon.dir/execute.c.s

CMakeFiles/daemon.dir/execute.c.o.requires:

.PHONY : CMakeFiles/daemon.dir/execute.c.o.requires

CMakeFiles/daemon.dir/execute.c.o.provides: CMakeFiles/daemon.dir/execute.c.o.requires
	$(MAKE) -f CMakeFiles/daemon.dir/build.make CMakeFiles/daemon.dir/execute.c.o.provides.build
.PHONY : CMakeFiles/daemon.dir/execute.c.o.provides

CMakeFiles/daemon.dir/execute.c.o.provides.build: CMakeFiles/daemon.dir/execute.c.o


CMakeFiles/daemon.dir/timer.c.o: CMakeFiles/daemon.dir/flags.make
CMakeFiles/daemon.dir/timer.c.o: ../timer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rongtao/test/c/daemon-AutoDaemon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/daemon.dir/timer.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/daemon.dir/timer.c.o   -c /home/rongtao/test/c/daemon-AutoDaemon/timer.c

CMakeFiles/daemon.dir/timer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/daemon.dir/timer.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/c/daemon-AutoDaemon/timer.c > CMakeFiles/daemon.dir/timer.c.i

CMakeFiles/daemon.dir/timer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/daemon.dir/timer.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/c/daemon-AutoDaemon/timer.c -o CMakeFiles/daemon.dir/timer.c.s

CMakeFiles/daemon.dir/timer.c.o.requires:

.PHONY : CMakeFiles/daemon.dir/timer.c.o.requires

CMakeFiles/daemon.dir/timer.c.o.provides: CMakeFiles/daemon.dir/timer.c.o.requires
	$(MAKE) -f CMakeFiles/daemon.dir/build.make CMakeFiles/daemon.dir/timer.c.o.provides.build
.PHONY : CMakeFiles/daemon.dir/timer.c.o.provides

CMakeFiles/daemon.dir/timer.c.o.provides.build: CMakeFiles/daemon.dir/timer.c.o


CMakeFiles/daemon.dir/xml.c.o: CMakeFiles/daemon.dir/flags.make
CMakeFiles/daemon.dir/xml.c.o: ../xml.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rongtao/test/c/daemon-AutoDaemon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/daemon.dir/xml.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/daemon.dir/xml.c.o   -c /home/rongtao/test/c/daemon-AutoDaemon/xml.c

CMakeFiles/daemon.dir/xml.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/daemon.dir/xml.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/c/daemon-AutoDaemon/xml.c > CMakeFiles/daemon.dir/xml.c.i

CMakeFiles/daemon.dir/xml.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/daemon.dir/xml.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/c/daemon-AutoDaemon/xml.c -o CMakeFiles/daemon.dir/xml.c.s

CMakeFiles/daemon.dir/xml.c.o.requires:

.PHONY : CMakeFiles/daemon.dir/xml.c.o.requires

CMakeFiles/daemon.dir/xml.c.o.provides: CMakeFiles/daemon.dir/xml.c.o.requires
	$(MAKE) -f CMakeFiles/daemon.dir/build.make CMakeFiles/daemon.dir/xml.c.o.provides.build
.PHONY : CMakeFiles/daemon.dir/xml.c.o.provides

CMakeFiles/daemon.dir/xml.c.o.provides.build: CMakeFiles/daemon.dir/xml.c.o


CMakeFiles/daemon.dir/main.c.o: CMakeFiles/daemon.dir/flags.make
CMakeFiles/daemon.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rongtao/test/c/daemon-AutoDaemon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/daemon.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/daemon.dir/main.c.o   -c /home/rongtao/test/c/daemon-AutoDaemon/main.c

CMakeFiles/daemon.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/daemon.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/c/daemon-AutoDaemon/main.c > CMakeFiles/daemon.dir/main.c.i

CMakeFiles/daemon.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/daemon.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/c/daemon-AutoDaemon/main.c -o CMakeFiles/daemon.dir/main.c.s

CMakeFiles/daemon.dir/main.c.o.requires:

.PHONY : CMakeFiles/daemon.dir/main.c.o.requires

CMakeFiles/daemon.dir/main.c.o.provides: CMakeFiles/daemon.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/daemon.dir/build.make CMakeFiles/daemon.dir/main.c.o.provides.build
.PHONY : CMakeFiles/daemon.dir/main.c.o.provides

CMakeFiles/daemon.dir/main.c.o.provides.build: CMakeFiles/daemon.dir/main.c.o


CMakeFiles/daemon.dir/log.c.o: CMakeFiles/daemon.dir/flags.make
CMakeFiles/daemon.dir/log.c.o: ../log.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rongtao/test/c/daemon-AutoDaemon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/daemon.dir/log.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/daemon.dir/log.c.o   -c /home/rongtao/test/c/daemon-AutoDaemon/log.c

CMakeFiles/daemon.dir/log.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/daemon.dir/log.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rongtao/test/c/daemon-AutoDaemon/log.c > CMakeFiles/daemon.dir/log.c.i

CMakeFiles/daemon.dir/log.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/daemon.dir/log.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rongtao/test/c/daemon-AutoDaemon/log.c -o CMakeFiles/daemon.dir/log.c.s

CMakeFiles/daemon.dir/log.c.o.requires:

.PHONY : CMakeFiles/daemon.dir/log.c.o.requires

CMakeFiles/daemon.dir/log.c.o.provides: CMakeFiles/daemon.dir/log.c.o.requires
	$(MAKE) -f CMakeFiles/daemon.dir/build.make CMakeFiles/daemon.dir/log.c.o.provides.build
.PHONY : CMakeFiles/daemon.dir/log.c.o.provides

CMakeFiles/daemon.dir/log.c.o.provides.build: CMakeFiles/daemon.dir/log.c.o


# Object files for target daemon
daemon_OBJECTS = \
"CMakeFiles/daemon.dir/execute.c.o" \
"CMakeFiles/daemon.dir/timer.c.o" \
"CMakeFiles/daemon.dir/xml.c.o" \
"CMakeFiles/daemon.dir/main.c.o" \
"CMakeFiles/daemon.dir/log.c.o"

# External object files for target daemon
daemon_EXTERNAL_OBJECTS =

daemon: CMakeFiles/daemon.dir/execute.c.o
daemon: CMakeFiles/daemon.dir/timer.c.o
daemon: CMakeFiles/daemon.dir/xml.c.o
daemon: CMakeFiles/daemon.dir/main.c.o
daemon: CMakeFiles/daemon.dir/log.c.o
daemon: CMakeFiles/daemon.dir/build.make
daemon: /usr/lib64/libm.so
daemon: /usr/local/lib/libxml2.so
daemon: /usr/lib64/libpthread.so
daemon: CMakeFiles/daemon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rongtao/test/c/daemon-AutoDaemon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable daemon"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/daemon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/daemon.dir/build: daemon

.PHONY : CMakeFiles/daemon.dir/build

CMakeFiles/daemon.dir/requires: CMakeFiles/daemon.dir/execute.c.o.requires
CMakeFiles/daemon.dir/requires: CMakeFiles/daemon.dir/timer.c.o.requires
CMakeFiles/daemon.dir/requires: CMakeFiles/daemon.dir/xml.c.o.requires
CMakeFiles/daemon.dir/requires: CMakeFiles/daemon.dir/main.c.o.requires
CMakeFiles/daemon.dir/requires: CMakeFiles/daemon.dir/log.c.o.requires

.PHONY : CMakeFiles/daemon.dir/requires

CMakeFiles/daemon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/daemon.dir/cmake_clean.cmake
.PHONY : CMakeFiles/daemon.dir/clean

CMakeFiles/daemon.dir/depend:
	cd /home/rongtao/test/c/daemon-AutoDaemon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rongtao/test/c/daemon-AutoDaemon /home/rongtao/test/c/daemon-AutoDaemon /home/rongtao/test/c/daemon-AutoDaemon/build /home/rongtao/test/c/daemon-AutoDaemon/build /home/rongtao/test/c/daemon-AutoDaemon/build/CMakeFiles/daemon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/daemon.dir/depend
