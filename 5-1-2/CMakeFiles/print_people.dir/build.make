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
CMAKE_SOURCE_DIR = /home/hunji/2019_ITE1015_2019031612/5-1-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hunji/2019_ITE1015_2019031612/5-1-2

# Include any dependencies generated for this target.
include CMakeFiles/print_people.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/print_people.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/print_people.dir/flags.make

CMakeFiles/print_people.dir/print_people.cpp.o: CMakeFiles/print_people.dir/flags.make
CMakeFiles/print_people.dir/print_people.cpp.o: print_people.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hunji/2019_ITE1015_2019031612/5-1-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/print_people.dir/print_people.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/print_people.dir/print_people.cpp.o -c /home/hunji/2019_ITE1015_2019031612/5-1-2/print_people.cpp

CMakeFiles/print_people.dir/print_people.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/print_people.dir/print_people.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hunji/2019_ITE1015_2019031612/5-1-2/print_people.cpp > CMakeFiles/print_people.dir/print_people.cpp.i

CMakeFiles/print_people.dir/print_people.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/print_people.dir/print_people.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hunji/2019_ITE1015_2019031612/5-1-2/print_people.cpp -o CMakeFiles/print_people.dir/print_people.cpp.s

CMakeFiles/print_people.dir/print_people.cpp.o.requires:

.PHONY : CMakeFiles/print_people.dir/print_people.cpp.o.requires

CMakeFiles/print_people.dir/print_people.cpp.o.provides: CMakeFiles/print_people.dir/print_people.cpp.o.requires
	$(MAKE) -f CMakeFiles/print_people.dir/build.make CMakeFiles/print_people.dir/print_people.cpp.o.provides.build
.PHONY : CMakeFiles/print_people.dir/print_people.cpp.o.provides

CMakeFiles/print_people.dir/print_people.cpp.o.provides.build: CMakeFiles/print_people.dir/print_people.cpp.o


# Object files for target print_people
print_people_OBJECTS = \
"CMakeFiles/print_people.dir/print_people.cpp.o"

# External object files for target print_people
print_people_EXTERNAL_OBJECTS =

print_people: CMakeFiles/print_people.dir/print_people.cpp.o
print_people: CMakeFiles/print_people.dir/build.make
print_people: CMakeFiles/print_people.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hunji/2019_ITE1015_2019031612/5-1-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable print_people"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/print_people.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/print_people.dir/build: print_people

.PHONY : CMakeFiles/print_people.dir/build

CMakeFiles/print_people.dir/requires: CMakeFiles/print_people.dir/print_people.cpp.o.requires

.PHONY : CMakeFiles/print_people.dir/requires

CMakeFiles/print_people.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/print_people.dir/cmake_clean.cmake
.PHONY : CMakeFiles/print_people.dir/clean

CMakeFiles/print_people.dir/depend:
	cd /home/hunji/2019_ITE1015_2019031612/5-1-2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hunji/2019_ITE1015_2019031612/5-1-2 /home/hunji/2019_ITE1015_2019031612/5-1-2 /home/hunji/2019_ITE1015_2019031612/5-1-2 /home/hunji/2019_ITE1015_2019031612/5-1-2 /home/hunji/2019_ITE1015_2019031612/5-1-2/CMakeFiles/print_people.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/print_people.dir/depend

