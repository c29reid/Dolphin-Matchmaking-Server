# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.5.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.5.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server

# Include any dependencies generated for this target.
include CMakeFiles/Dolphin_Matchmaking.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dolphin_Matchmaking.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dolphin_Matchmaking.dir/flags.make

CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o: CMakeFiles/Dolphin_Matchmaking.dir/flags.make
CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o: source/Dolphin-Matchmaking-Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o -c /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/source/Dolphin-Matchmaking-Server.cpp

CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/source/Dolphin-Matchmaking-Server.cpp > CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.i

CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/source/Dolphin-Matchmaking-Server.cpp -o CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.s

CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o.requires:

.PHONY : CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o.requires

CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o.provides: CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolphin_Matchmaking.dir/build.make CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o.provides.build
.PHONY : CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o.provides

CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o.provides.build: CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o


CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o: CMakeFiles/Dolphin_Matchmaking.dir/flags.make
CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o: source/stdafx.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o -c /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/source/stdafx.cpp

CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/source/stdafx.cpp > CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.i

CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/source/stdafx.cpp -o CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.s

CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o.requires:

.PHONY : CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o.requires

CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o.provides: CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolphin_Matchmaking.dir/build.make CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o.provides.build
.PHONY : CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o.provides

CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o.provides.build: CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o


# Object files for target Dolphin_Matchmaking
Dolphin_Matchmaking_OBJECTS = \
"CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o" \
"CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o"

# External object files for target Dolphin_Matchmaking
Dolphin_Matchmaking_EXTERNAL_OBJECTS =

Dolphin_Matchmaking: CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o
Dolphin_Matchmaking: CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o
Dolphin_Matchmaking: CMakeFiles/Dolphin_Matchmaking.dir/build.make
Dolphin_Matchmaking: CMakeFiles/Dolphin_Matchmaking.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Dolphin_Matchmaking"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dolphin_Matchmaking.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dolphin_Matchmaking.dir/build: Dolphin_Matchmaking

.PHONY : CMakeFiles/Dolphin_Matchmaking.dir/build

CMakeFiles/Dolphin_Matchmaking.dir/requires: CMakeFiles/Dolphin_Matchmaking.dir/source/Dolphin-Matchmaking-Server.cpp.o.requires
CMakeFiles/Dolphin_Matchmaking.dir/requires: CMakeFiles/Dolphin_Matchmaking.dir/source/stdafx.cpp.o.requires

.PHONY : CMakeFiles/Dolphin_Matchmaking.dir/requires

CMakeFiles/Dolphin_Matchmaking.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dolphin_Matchmaking.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dolphin_Matchmaking.dir/clean

CMakeFiles/Dolphin_Matchmaking.dir/depend:
	cd /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server /Users/macpeecee/Desktop/projects/Dolphin-Matchmaking-Server/CMakeFiles/Dolphin_Matchmaking.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dolphin_Matchmaking.dir/depend

