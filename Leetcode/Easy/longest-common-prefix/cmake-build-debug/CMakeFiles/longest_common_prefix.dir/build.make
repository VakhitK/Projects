# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/longest_common_prefix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/longest_common_prefix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/longest_common_prefix.dir/flags.make

CMakeFiles/longest_common_prefix.dir/main.cpp.obj: CMakeFiles/longest_common_prefix.dir/flags.make
CMakeFiles/longest_common_prefix.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/longest_common_prefix.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\longest_common_prefix.dir\main.cpp.obj -c C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\main.cpp

CMakeFiles/longest_common_prefix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/longest_common_prefix.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\main.cpp > CMakeFiles\longest_common_prefix.dir\main.cpp.i

CMakeFiles/longest_common_prefix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/longest_common_prefix.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\main.cpp -o CMakeFiles\longest_common_prefix.dir\main.cpp.s

# Object files for target longest_common_prefix
longest_common_prefix_OBJECTS = \
"CMakeFiles/longest_common_prefix.dir/main.cpp.obj"

# External object files for target longest_common_prefix
longest_common_prefix_EXTERNAL_OBJECTS =

longest_common_prefix.exe: CMakeFiles/longest_common_prefix.dir/main.cpp.obj
longest_common_prefix.exe: CMakeFiles/longest_common_prefix.dir/build.make
longest_common_prefix.exe: CMakeFiles/longest_common_prefix.dir/linklibs.rsp
longest_common_prefix.exe: CMakeFiles/longest_common_prefix.dir/objects1.rsp
longest_common_prefix.exe: CMakeFiles/longest_common_prefix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable longest_common_prefix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\longest_common_prefix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/longest_common_prefix.dir/build: longest_common_prefix.exe

.PHONY : CMakeFiles/longest_common_prefix.dir/build

CMakeFiles/longest_common_prefix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\longest_common_prefix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/longest_common_prefix.dir/clean

CMakeFiles/longest_common_prefix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\cmake-build-debug C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\cmake-build-debug C:\Users\vahit.k\projects\Leetcode\Easy\longest-common-prefix\cmake-build-debug\CMakeFiles\longest_common_prefix.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/longest_common_prefix.dir/depend

