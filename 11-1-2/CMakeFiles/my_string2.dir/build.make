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
CMAKE_SOURCE_DIR = /home/hunji/2019_ITE1015_2019031612/11-1-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hunji/2019_ITE1015_2019031612/11-1-2

# Include any dependencies generated for this target.
include CMakeFiles/my_string2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/my_string2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_string2.dir/flags.make

CMakeFiles/my_string2.dir/main.cpp.o: CMakeFiles/my_string2.dir/flags.make
CMakeFiles/my_string2.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hunji/2019_ITE1015_2019031612/11-1-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_string2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_string2.dir/main.cpp.o -c /home/hunji/2019_ITE1015_2019031612/11-1-2/main.cpp

CMakeFiles/my_string2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_string2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hunji/2019_ITE1015_2019031612/11-1-2/main.cpp > CMakeFiles/my_string2.dir/main.cpp.i

CMakeFiles/my_string2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_string2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hunji/2019_ITE1015_2019031612/11-1-2/main.cpp -o CMakeFiles/my_string2.dir/main.cpp.s

CMakeFiles/my_string2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/my_string2.dir/main.cpp.o.requires

CMakeFiles/my_string2.dir/main.cpp.o.provides: CMakeFiles/my_string2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/my_string2.dir/build.make CMakeFiles/my_string2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/my_string2.dir/main.cpp.o.provides

CMakeFiles/my_string2.dir/main.cpp.o.provides.build: CMakeFiles/my_string2.dir/main.cpp.o


CMakeFiles/my_string2.dir/my_string2.cpp.o: CMakeFiles/my_string2.dir/flags.make
CMakeFiles/my_string2.dir/my_string2.cpp.o: my_string2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hunji/2019_ITE1015_2019031612/11-1-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/my_string2.dir/my_string2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_string2.dir/my_string2.cpp.o -c /home/hunji/2019_ITE1015_2019031612/11-1-2/my_string2.cpp

CMakeFiles/my_string2.dir/my_string2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_string2.dir/my_string2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hunji/2019_ITE1015_2019031612/11-1-2/my_string2.cpp > CMakeFiles/my_string2.dir/my_string2.cpp.i

CMakeFiles/my_string2.dir/my_string2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_string2.dir/my_string2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hunji/2019_ITE1015_2019031612/11-1-2/my_string2.cpp -o CMakeFiles/my_string2.dir/my_string2.cpp.s

CMakeFiles/my_string2.dir/my_string2.cpp.o.requires:

.PHONY : CMakeFiles/my_string2.dir/my_string2.cpp.o.requires

CMakeFiles/my_string2.dir/my_string2.cpp.o.provides: CMakeFiles/my_string2.dir/my_string2.cpp.o.requires
	$(MAKE) -f CMakeFiles/my_string2.dir/build.make CMakeFiles/my_string2.dir/my_string2.cpp.o.provides.build
.PHONY : CMakeFiles/my_string2.dir/my_string2.cpp.o.provides

CMakeFiles/my_string2.dir/my_string2.cpp.o.provides.build: CMakeFiles/my_string2.dir/my_string2.cpp.o


# Object files for target my_string2
my_string2_OBJECTS = \
"CMakeFiles/my_string2.dir/main.cpp.o" \
"CMakeFiles/my_string2.dir/my_string2.cpp.o"

# External object files for target my_string2
my_string2_EXTERNAL_OBJECTS =

my_string2: CMakeFiles/my_string2.dir/main.cpp.o
my_string2: CMakeFiles/my_string2.dir/my_string2.cpp.o
my_string2: CMakeFiles/my_string2.dir/build.make
my_string2: CMakeFiles/my_string2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hunji/2019_ITE1015_2019031612/11-1-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable my_string2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_string2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_string2.dir/build: my_string2

.PHONY : CMakeFiles/my_string2.dir/build

CMakeFiles/my_string2.dir/requires: CMakeFiles/my_string2.dir/main.cpp.o.requires
CMakeFiles/my_string2.dir/requires: CMakeFiles/my_string2.dir/my_string2.cpp.o.requires

.PHONY : CMakeFiles/my_string2.dir/requires

CMakeFiles/my_string2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_string2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_string2.dir/clean

CMakeFiles/my_string2.dir/depend:
	cd /home/hunji/2019_ITE1015_2019031612/11-1-2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hunji/2019_ITE1015_2019031612/11-1-2 /home/hunji/2019_ITE1015_2019031612/11-1-2 /home/hunji/2019_ITE1015_2019031612/11-1-2 /home/hunji/2019_ITE1015_2019031612/11-1-2 /home/hunji/2019_ITE1015_2019031612/11-1-2/CMakeFiles/my_string2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_string2.dir/depend

