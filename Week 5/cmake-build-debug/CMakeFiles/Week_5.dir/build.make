# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "/Users/joe/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4127.32/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/joe/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4127.32/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Week_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Week_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Week_5.dir/flags.make

CMakeFiles/Week_5.dir/main.cpp.o: CMakeFiles/Week_5.dir/flags.make
CMakeFiles/Week_5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Week_5.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Week_5.dir/main.cpp.o -c "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/main.cpp"

CMakeFiles/Week_5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Week_5.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/main.cpp" > CMakeFiles/Week_5.dir/main.cpp.i

CMakeFiles/Week_5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Week_5.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/main.cpp" -o CMakeFiles/Week_5.dir/main.cpp.s

CMakeFiles/Week_5.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Week_5.dir/main.cpp.o.requires

CMakeFiles/Week_5.dir/main.cpp.o.provides: CMakeFiles/Week_5.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Week_5.dir/build.make CMakeFiles/Week_5.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Week_5.dir/main.cpp.o.provides

CMakeFiles/Week_5.dir/main.cpp.o.provides.build: CMakeFiles/Week_5.dir/main.cpp.o


CMakeFiles/Week_5.dir/Queue.cpp.o: CMakeFiles/Week_5.dir/flags.make
CMakeFiles/Week_5.dir/Queue.cpp.o: ../Queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Week_5.dir/Queue.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Week_5.dir/Queue.cpp.o -c "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/Queue.cpp"

CMakeFiles/Week_5.dir/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Week_5.dir/Queue.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/Queue.cpp" > CMakeFiles/Week_5.dir/Queue.cpp.i

CMakeFiles/Week_5.dir/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Week_5.dir/Queue.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/Queue.cpp" -o CMakeFiles/Week_5.dir/Queue.cpp.s

CMakeFiles/Week_5.dir/Queue.cpp.o.requires:

.PHONY : CMakeFiles/Week_5.dir/Queue.cpp.o.requires

CMakeFiles/Week_5.dir/Queue.cpp.o.provides: CMakeFiles/Week_5.dir/Queue.cpp.o.requires
	$(MAKE) -f CMakeFiles/Week_5.dir/build.make CMakeFiles/Week_5.dir/Queue.cpp.o.provides.build
.PHONY : CMakeFiles/Week_5.dir/Queue.cpp.o.provides

CMakeFiles/Week_5.dir/Queue.cpp.o.provides.build: CMakeFiles/Week_5.dir/Queue.cpp.o


# Object files for target Week_5
Week_5_OBJECTS = \
"CMakeFiles/Week_5.dir/main.cpp.o" \
"CMakeFiles/Week_5.dir/Queue.cpp.o"

# External object files for target Week_5
Week_5_EXTERNAL_OBJECTS =

Week_5: CMakeFiles/Week_5.dir/main.cpp.o
Week_5: CMakeFiles/Week_5.dir/Queue.cpp.o
Week_5: CMakeFiles/Week_5.dir/build.make
Week_5: CMakeFiles/Week_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Week_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Week_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Week_5.dir/build: Week_5

.PHONY : CMakeFiles/Week_5.dir/build

CMakeFiles/Week_5.dir/requires: CMakeFiles/Week_5.dir/main.cpp.o.requires
CMakeFiles/Week_5.dir/requires: CMakeFiles/Week_5.dir/Queue.cpp.o.requires

.PHONY : CMakeFiles/Week_5.dir/requires

CMakeFiles/Week_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Week_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Week_5.dir/clean

CMakeFiles/Week_5.dir/depend:
	cd "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5" "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5" "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/cmake-build-debug" "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/cmake-build-debug" "/Users/joe/OneDrive - Ngee Ann Polytechnic/School/Year 2.2/DSA/Practical/Week 5/cmake-build-debug/CMakeFiles/Week_5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Week_5.dir/depend
