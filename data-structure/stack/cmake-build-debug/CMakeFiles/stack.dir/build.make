# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack.dir/flags.make

CMakeFiles/stack.dir/stack.c.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stack.c.o: ../stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/stack.dir/stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stack.dir/stack.c.o   -c /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/stack.c

CMakeFiles/stack.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stack.dir/stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/stack.c > CMakeFiles/stack.dir/stack.c.i

CMakeFiles/stack.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stack.dir/stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/stack.c -o CMakeFiles/stack.dir/stack.c.s

CMakeFiles/stack.dir/stack.c.o.requires:

.PHONY : CMakeFiles/stack.dir/stack.c.o.requires

CMakeFiles/stack.dir/stack.c.o.provides: CMakeFiles/stack.dir/stack.c.o.requires
	$(MAKE) -f CMakeFiles/stack.dir/build.make CMakeFiles/stack.dir/stack.c.o.provides.build
.PHONY : CMakeFiles/stack.dir/stack.c.o.provides

CMakeFiles/stack.dir/stack.c.o.provides.build: CMakeFiles/stack.dir/stack.c.o


CMakeFiles/stack.dir/list.c.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/list.c.o: ../list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/stack.dir/list.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stack.dir/list.c.o   -c /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/list.c

CMakeFiles/stack.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stack.dir/list.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/list.c > CMakeFiles/stack.dir/list.c.i

CMakeFiles/stack.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stack.dir/list.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/list.c -o CMakeFiles/stack.dir/list.c.s

CMakeFiles/stack.dir/list.c.o.requires:

.PHONY : CMakeFiles/stack.dir/list.c.o.requires

CMakeFiles/stack.dir/list.c.o.provides: CMakeFiles/stack.dir/list.c.o.requires
	$(MAKE) -f CMakeFiles/stack.dir/build.make CMakeFiles/stack.dir/list.c.o.provides.build
.PHONY : CMakeFiles/stack.dir/list.c.o.provides

CMakeFiles/stack.dir/list.c.o.provides.build: CMakeFiles/stack.dir/list.c.o


CMakeFiles/stack.dir/main.c.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/stack.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stack.dir/main.c.o   -c /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/main.c

CMakeFiles/stack.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stack.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/main.c > CMakeFiles/stack.dir/main.c.i

CMakeFiles/stack.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stack.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/main.c -o CMakeFiles/stack.dir/main.c.s

CMakeFiles/stack.dir/main.c.o.requires:

.PHONY : CMakeFiles/stack.dir/main.c.o.requires

CMakeFiles/stack.dir/main.c.o.provides: CMakeFiles/stack.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/stack.dir/build.make CMakeFiles/stack.dir/main.c.o.provides.build
.PHONY : CMakeFiles/stack.dir/main.c.o.provides

CMakeFiles/stack.dir/main.c.o.provides.build: CMakeFiles/stack.dir/main.c.o


# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/stack.c.o" \
"CMakeFiles/stack.dir/list.c.o" \
"CMakeFiles/stack.dir/main.c.o"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

stack: CMakeFiles/stack.dir/stack.c.o
stack: CMakeFiles/stack.dir/list.c.o
stack: CMakeFiles/stack.dir/main.c.o
stack: CMakeFiles/stack.dir/build.make
stack: CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack.dir/build: stack

.PHONY : CMakeFiles/stack.dir/build

CMakeFiles/stack.dir/requires: CMakeFiles/stack.dir/stack.c.o.requires
CMakeFiles/stack.dir/requires: CMakeFiles/stack.dir/list.c.o.requires
CMakeFiles/stack.dir/requires: CMakeFiles/stack.dir/main.c.o.requires

.PHONY : CMakeFiles/stack.dir/requires

CMakeFiles/stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack.dir/clean

CMakeFiles/stack.dir/depend:
	cd /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug /Users/luxiaoxiao/Documents/ClangProjects/c-programming-language-exercise/data-structure/stack/cmake-build-debug/CMakeFiles/stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack.dir/depend

