# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.5\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.5\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C\workPlace\StudySystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C\workPlace\StudySystem\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StudySystem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StudySystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StudySystem.dir/flags.make

CMakeFiles/StudySystem.dir/main.c.obj: CMakeFiles/StudySystem.dir/flags.make
CMakeFiles/StudySystem.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C\workPlace\StudySystem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/StudySystem.dir/main.c.obj"
	D:\C\new_dev_cpp\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\StudySystem.dir\main.c.obj   -c D:\C\workPlace\StudySystem\main.c

CMakeFiles/StudySystem.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudySystem.dir/main.c.i"
	D:\C\new_dev_cpp\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\C\workPlace\StudySystem\main.c > CMakeFiles\StudySystem.dir\main.c.i

CMakeFiles/StudySystem.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudySystem.dir/main.c.s"
	D:\C\new_dev_cpp\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\C\workPlace\StudySystem\main.c -o CMakeFiles\StudySystem.dir\main.c.s

CMakeFiles/StudySystem.dir/main.c.obj.requires:

.PHONY : CMakeFiles/StudySystem.dir/main.c.obj.requires

CMakeFiles/StudySystem.dir/main.c.obj.provides: CMakeFiles/StudySystem.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\StudySystem.dir\build.make CMakeFiles/StudySystem.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/StudySystem.dir/main.c.obj.provides

CMakeFiles/StudySystem.dir/main.c.obj.provides.build: CMakeFiles/StudySystem.dir/main.c.obj


# Object files for target StudySystem
StudySystem_OBJECTS = \
"CMakeFiles/StudySystem.dir/main.c.obj"

# External object files for target StudySystem
StudySystem_EXTERNAL_OBJECTS =

StudySystem.exe: CMakeFiles/StudySystem.dir/main.c.obj
StudySystem.exe: CMakeFiles/StudySystem.dir/build.make
StudySystem.exe: CMakeFiles/StudySystem.dir/linklibs.rsp
StudySystem.exe: CMakeFiles/StudySystem.dir/objects1.rsp
StudySystem.exe: CMakeFiles/StudySystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C\workPlace\StudySystem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable StudySystem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StudySystem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StudySystem.dir/build: StudySystem.exe

.PHONY : CMakeFiles/StudySystem.dir/build

CMakeFiles/StudySystem.dir/requires: CMakeFiles/StudySystem.dir/main.c.obj.requires

.PHONY : CMakeFiles/StudySystem.dir/requires

CMakeFiles/StudySystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StudySystem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StudySystem.dir/clean

CMakeFiles/StudySystem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C\workPlace\StudySystem D:\C\workPlace\StudySystem D:\C\workPlace\StudySystem\cmake-build-debug D:\C\workPlace\StudySystem\cmake-build-debug D:\C\workPlace\StudySystem\cmake-build-debug\CMakeFiles\StudySystem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StudySystem.dir/depend
