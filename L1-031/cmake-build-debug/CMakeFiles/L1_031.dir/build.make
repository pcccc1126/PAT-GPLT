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
CMAKE_COMMAND = "/Users/zhangpeicheng/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.3727.114/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/zhangpeicheng/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.3727.114/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/L1_031.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/L1_031.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/L1_031.dir/flags.make

CMakeFiles/L1_031.dir/main.c.o: CMakeFiles/L1_031.dir/flags.make
CMakeFiles/L1_031.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/L1_031.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/L1_031.dir/main.c.o   -c /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/main.c

CMakeFiles/L1_031.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/L1_031.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/main.c > CMakeFiles/L1_031.dir/main.c.i

CMakeFiles/L1_031.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/L1_031.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/main.c -o CMakeFiles/L1_031.dir/main.c.s

CMakeFiles/L1_031.dir/main.c.o.requires:

.PHONY : CMakeFiles/L1_031.dir/main.c.o.requires

CMakeFiles/L1_031.dir/main.c.o.provides: CMakeFiles/L1_031.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/L1_031.dir/build.make CMakeFiles/L1_031.dir/main.c.o.provides.build
.PHONY : CMakeFiles/L1_031.dir/main.c.o.provides

CMakeFiles/L1_031.dir/main.c.o.provides.build: CMakeFiles/L1_031.dir/main.c.o


# Object files for target L1_031
L1_031_OBJECTS = \
"CMakeFiles/L1_031.dir/main.c.o"

# External object files for target L1_031
L1_031_EXTERNAL_OBJECTS =

L1_031: CMakeFiles/L1_031.dir/main.c.o
L1_031: CMakeFiles/L1_031.dir/build.make
L1_031: CMakeFiles/L1_031.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable L1_031"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/L1_031.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/L1_031.dir/build: L1_031

.PHONY : CMakeFiles/L1_031.dir/build

CMakeFiles/L1_031.dir/requires: CMakeFiles/L1_031.dir/main.c.o.requires

.PHONY : CMakeFiles/L1_031.dir/requires

CMakeFiles/L1_031.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/L1_031.dir/cmake_clean.cmake
.PHONY : CMakeFiles/L1_031.dir/clean

CMakeFiles/L1_031.dir/depend:
	cd /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031 /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031 /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/cmake-build-debug /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/cmake-build-debug /Users/zhangpeicheng/CLionProjects/PAT天梯赛/L1-031/cmake-build-debug/CMakeFiles/L1_031.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/L1_031.dir/depend

