# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/mflavio/workspace/C++/projects/structlib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mflavio/workspace/C++/projects/structlib/out/build

# Include any dependencies generated for this target.
include CMakeFiles/StructLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/StructLib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/StructLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StructLib.dir/flags.make

CMakeFiles/StructLib.dir/main.cpp.o: CMakeFiles/StructLib.dir/flags.make
CMakeFiles/StructLib.dir/main.cpp.o: /home/mflavio/workspace/C++/projects/structlib/main.cpp
CMakeFiles/StructLib.dir/main.cpp.o: CMakeFiles/StructLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mflavio/workspace/C++/projects/structlib/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StructLib.dir/main.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/StructLib.dir/main.cpp.o -MF CMakeFiles/StructLib.dir/main.cpp.o.d -o CMakeFiles/StructLib.dir/main.cpp.o -c /home/mflavio/workspace/C++/projects/structlib/main.cpp

CMakeFiles/StructLib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/StructLib.dir/main.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mflavio/workspace/C++/projects/structlib/main.cpp > CMakeFiles/StructLib.dir/main.cpp.i

CMakeFiles/StructLib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/StructLib.dir/main.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mflavio/workspace/C++/projects/structlib/main.cpp -o CMakeFiles/StructLib.dir/main.cpp.s

# Object files for target StructLib
StructLib_OBJECTS = \
"CMakeFiles/StructLib.dir/main.cpp.o"

# External object files for target StructLib
StructLib_EXTERNAL_OBJECTS =

StructLib: CMakeFiles/StructLib.dir/main.cpp.o
StructLib: CMakeFiles/StructLib.dir/build.make
StructLib: lib/libStructLib_lib.a
StructLib: CMakeFiles/StructLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mflavio/workspace/C++/projects/structlib/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StructLib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StructLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StructLib.dir/build: StructLib
.PHONY : CMakeFiles/StructLib.dir/build

CMakeFiles/StructLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StructLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StructLib.dir/clean

CMakeFiles/StructLib.dir/depend:
	cd /home/mflavio/workspace/C++/projects/structlib/out/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mflavio/workspace/C++/projects/structlib /home/mflavio/workspace/C++/projects/structlib /home/mflavio/workspace/C++/projects/structlib/out/build /home/mflavio/workspace/C++/projects/structlib/out/build /home/mflavio/workspace/C++/projects/structlib/out/build/CMakeFiles/StructLib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/StructLib.dir/depend

