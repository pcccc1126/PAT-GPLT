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
CMAKE_COMMAND = "/Users/zhangpeicheng/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4203.549/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/zhangpeicheng/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4203.549/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/L1_053.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/L1_053.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/L1_053.dir/flags.make

CMakeFiles/L1_053.dir/main.cpp.o: CMakeFiles/L1_053.dir/flags.make
CMakeFiles/L1_053.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/L1_053.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/L1_053.dir/main.cpp.o -c "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/main.cpp"

CMakeFiles/L1_053.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L1_053.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/main.cpp" > CMakeFiles/L1_053.dir/main.cpp.i

CMakeFiles/L1_053.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L1_053.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/main.cpp" -o CMakeFiles/L1_053.dir/main.cpp.s

CMakeFiles/L1_053.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/L1_053.dir/main.cpp.o.requires

CMakeFiles/L1_053.dir/main.cpp.o.provides: CMakeFiles/L1_053.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/L1_053.dir/build.make CMakeFiles/L1_053.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/L1_053.dir/main.cpp.o.provides

CMakeFiles/L1_053.dir/main.cpp.o.provides.build: CMakeFiles/L1_053.dir/main.cpp.o


# Object files for target L1_053
L1_053_OBJECTS = \
"CMakeFiles/L1_053.dir/main.cpp.o"

# External object files for target L1_053
L1_053_EXTERNAL_OBJECTS =

L1_053: CMakeFiles/L1_053.dir/main.cpp.o
L1_053: CMakeFiles/L1_053.dir/build.make
L1_053: CMakeFiles/L1_053.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable L1_053"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/L1_053.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/L1_053.dir/build: L1_053

.PHONY : CMakeFiles/L1_053.dir/build

CMakeFiles/L1_053.dir/requires: CMakeFiles/L1_053.dir/main.cpp.o.requires

.PHONY : CMakeFiles/L1_053.dir/requires

CMakeFiles/L1_053.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/L1_053.dir/cmake_clean.cmake
.PHONY : CMakeFiles/L1_053.dir/clean

CMakeFiles/L1_053.dir/depend:
	cd "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053" "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053" "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/cmake-build-debug" "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/cmake-build-debug" "/Users/zhangpeicheng/Library/Mobile Documents/com~apple~CloudDocs/北京邮电大学/学习作业/C/CLionProjects/PAT天梯赛/L1-053/cmake-build-debug/CMakeFiles/L1_053.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/L1_053.dir/depend

