# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ExoCnamForks.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ExoCnamForks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ExoCnamForks.dir/flags.make

CMakeFiles/ExoCnamForks.dir/main.c.o: CMakeFiles/ExoCnamForks.dir/flags.make
CMakeFiles/ExoCnamForks.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ExoCnamForks.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ExoCnamForks.dir/main.c.o -c "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/main.c"

CMakeFiles/ExoCnamForks.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ExoCnamForks.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/main.c" > CMakeFiles/ExoCnamForks.dir/main.c.i

CMakeFiles/ExoCnamForks.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ExoCnamForks.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/main.c" -o CMakeFiles/ExoCnamForks.dir/main.c.s

# Object files for target ExoCnamForks
ExoCnamForks_OBJECTS = \
"CMakeFiles/ExoCnamForks.dir/main.c.o"

# External object files for target ExoCnamForks
ExoCnamForks_EXTERNAL_OBJECTS =

ExoCnamForks: CMakeFiles/ExoCnamForks.dir/main.c.o
ExoCnamForks: CMakeFiles/ExoCnamForks.dir/build.make
ExoCnamForks: CMakeFiles/ExoCnamForks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ExoCnamForks"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ExoCnamForks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ExoCnamForks.dir/build: ExoCnamForks
.PHONY : CMakeFiles/ExoCnamForks.dir/build

CMakeFiles/ExoCnamForks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ExoCnamForks.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ExoCnamForks.dir/clean

CMakeFiles/ExoCnamForks.dir/depend:
	cd "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks" "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks" "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/cmake-build-debug" "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/cmake-build-debug" "/mnt/d/CNAM I1/Licence I1/NSY103 - Programmation C/ExoCnamForks/cmake-build-debug/CMakeFiles/ExoCnamForks.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ExoCnamForks.dir/depend

