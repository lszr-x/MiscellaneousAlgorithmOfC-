# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pat.dir/flags.make

CMakeFiles/Pat.dir/main.cpp.o: CMakeFiles/Pat.dir/flags.make
CMakeFiles/Pat.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pat.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pat.dir/main.cpp.o -c /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/main.cpp

CMakeFiles/Pat.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pat.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/main.cpp > CMakeFiles/Pat.dir/main.cpp.i

CMakeFiles/Pat.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pat.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/main.cpp -o CMakeFiles/Pat.dir/main.cpp.s

CMakeFiles/Pat.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Pat.dir/main.cpp.o.requires

CMakeFiles/Pat.dir/main.cpp.o.provides: CMakeFiles/Pat.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Pat.dir/build.make CMakeFiles/Pat.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Pat.dir/main.cpp.o.provides

CMakeFiles/Pat.dir/main.cpp.o.provides.build: CMakeFiles/Pat.dir/main.cpp.o


# Object files for target Pat
Pat_OBJECTS = \
"CMakeFiles/Pat.dir/main.cpp.o"

# External object files for target Pat
Pat_EXTERNAL_OBJECTS =

Pat: CMakeFiles/Pat.dir/main.cpp.o
Pat: CMakeFiles/Pat.dir/build.make
Pat: CMakeFiles/Pat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Pat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pat.dir/build: Pat

.PHONY : CMakeFiles/Pat.dir/build

CMakeFiles/Pat.dir/requires: CMakeFiles/Pat.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Pat.dir/requires

CMakeFiles/Pat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pat.dir/clean

CMakeFiles/Pat.dir/depend:
	cd /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/cmake-build-debug /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/cmake-build-debug /Users/apple/Downloads/code/MiscellaneousAlgorithmOfC-/ClionProjects/Pat/cmake-build-debug/CMakeFiles/Pat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pat.dir/depend

