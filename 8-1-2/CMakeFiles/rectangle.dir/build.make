# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/hunji/2019_ITE1015_2019031612/8-1-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hunji/2019_ITE1015_2019031612/8-1-2

# Include any dependencies generated for this target.
include CMakeFiles/rectangle.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rectangle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rectangle.dir/flags.make

CMakeFiles/rectangle.dir/main.cpp.o: CMakeFiles/rectangle.dir/flags.make
CMakeFiles/rectangle.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hunji/2019_ITE1015_2019031612/8-1-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rectangle.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rectangle.dir/main.cpp.o -c /home/hunji/2019_ITE1015_2019031612/8-1-2/main.cpp

CMakeFiles/rectangle.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rectangle.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hunji/2019_ITE1015_2019031612/8-1-2/main.cpp > CMakeFiles/rectangle.dir/main.cpp.i

CMakeFiles/rectangle.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rectangle.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hunji/2019_ITE1015_2019031612/8-1-2/main.cpp -o CMakeFiles/rectangle.dir/main.cpp.s

CMakeFiles/rectangle.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/rectangle.dir/main.cpp.o.requires

CMakeFiles/rectangle.dir/main.cpp.o.provides: CMakeFiles/rectangle.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/rectangle.dir/build.make CMakeFiles/rectangle.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/rectangle.dir/main.cpp.o.provides

CMakeFiles/rectangle.dir/main.cpp.o.provides.build: CMakeFiles/rectangle.dir/main.cpp.o


CMakeFiles/rectangle.dir/rect.cpp.o: CMakeFiles/rectangle.dir/flags.make
CMakeFiles/rectangle.dir/rect.cpp.o: rect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hunji/2019_ITE1015_2019031612/8-1-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/rectangle.dir/rect.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rectangle.dir/rect.cpp.o -c /home/hunji/2019_ITE1015_2019031612/8-1-2/rect.cpp

CMakeFiles/rectangle.dir/rect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rectangle.dir/rect.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hunji/2019_ITE1015_2019031612/8-1-2/rect.cpp > CMakeFiles/rectangle.dir/rect.cpp.i

CMakeFiles/rectangle.dir/rect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rectangle.dir/rect.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hunji/2019_ITE1015_2019031612/8-1-2/rect.cpp -o CMakeFiles/rectangle.dir/rect.cpp.s

CMakeFiles/rectangle.dir/rect.cpp.o.requires:

.PHONY : CMakeFiles/rectangle.dir/rect.cpp.o.requires

CMakeFiles/rectangle.dir/rect.cpp.o.provides: CMakeFiles/rectangle.dir/rect.cpp.o.requires
	$(MAKE) -f CMakeFiles/rectangle.dir/build.make CMakeFiles/rectangle.dir/rect.cpp.o.provides.build
.PHONY : CMakeFiles/rectangle.dir/rect.cpp.o.provides

CMakeFiles/rectangle.dir/rect.cpp.o.provides.build: CMakeFiles/rectangle.dir/rect.cpp.o


# Object files for target rectangle
rectangle_OBJECTS = \
"CMakeFiles/rectangle.dir/main.cpp.o" \
"CMakeFiles/rectangle.dir/rect.cpp.o"

# External object files for target rectangle
rectangle_EXTERNAL_OBJECTS =

rectangle: CMakeFiles/rectangle.dir/main.cpp.o
rectangle: CMakeFiles/rectangle.dir/rect.cpp.o
rectangle: CMakeFiles/rectangle.dir/build.make
rectangle: CMakeFiles/rectangle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hunji/2019_ITE1015_2019031612/8-1-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable rectangle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rectangle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rectangle.dir/build: rectangle

.PHONY : CMakeFiles/rectangle.dir/build

CMakeFiles/rectangle.dir/requires: CMakeFiles/rectangle.dir/main.cpp.o.requires
CMakeFiles/rectangle.dir/requires: CMakeFiles/rectangle.dir/rect.cpp.o.requires

.PHONY : CMakeFiles/rectangle.dir/requires

CMakeFiles/rectangle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rectangle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rectangle.dir/clean

CMakeFiles/rectangle.dir/depend:
	cd /home/hunji/2019_ITE1015_2019031612/8-1-2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hunji/2019_ITE1015_2019031612/8-1-2 /home/hunji/2019_ITE1015_2019031612/8-1-2 /home/hunji/2019_ITE1015_2019031612/8-1-2 /home/hunji/2019_ITE1015_2019031612/8-1-2 /home/hunji/2019_ITE1015_2019031612/8-1-2/CMakeFiles/rectangle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rectangle.dir/depend

