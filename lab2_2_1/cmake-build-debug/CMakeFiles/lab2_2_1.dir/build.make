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
CMAKE_COMMAND = "D:\Programs\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programs\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Projects\C\C_Rep\lab2_2_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Projects\C\C_Rep\lab2_2_1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab2_2_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2_2_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2_2_1.dir/flags.make

CMakeFiles/lab2_2_1.dir/main.c.obj: CMakeFiles/lab2_2_1.dir/flags.make
CMakeFiles/lab2_2_1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\C\C_Rep\lab2_2_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab2_2_1.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lab2_2_1.dir\main.c.obj   -c D:\Projects\C\C_Rep\lab2_2_1\main.c

CMakeFiles/lab2_2_1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2_2_1.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Projects\C\C_Rep\lab2_2_1\main.c > CMakeFiles\lab2_2_1.dir\main.c.i

CMakeFiles/lab2_2_1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2_2_1.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Projects\C\C_Rep\lab2_2_1\main.c -o CMakeFiles\lab2_2_1.dir\main.c.s

CMakeFiles/lab2_2_1.dir/test.c.obj: CMakeFiles/lab2_2_1.dir/flags.make
CMakeFiles/lab2_2_1.dir/test.c.obj: ../test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\C\C_Rep\lab2_2_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lab2_2_1.dir/test.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lab2_2_1.dir\test.c.obj   -c D:\Projects\C\C_Rep\lab2_2_1\test.c

CMakeFiles/lab2_2_1.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab2_2_1.dir/test.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Projects\C\C_Rep\lab2_2_1\test.c > CMakeFiles\lab2_2_1.dir\test.c.i

CMakeFiles/lab2_2_1.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab2_2_1.dir/test.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Projects\C\C_Rep\lab2_2_1\test.c -o CMakeFiles\lab2_2_1.dir\test.c.s

# Object files for target lab2_2_1
lab2_2_1_OBJECTS = \
"CMakeFiles/lab2_2_1.dir/main.c.obj" \
"CMakeFiles/lab2_2_1.dir/test.c.obj"

# External object files for target lab2_2_1
lab2_2_1_EXTERNAL_OBJECTS =

lab2_2_1.exe: CMakeFiles/lab2_2_1.dir/main.c.obj
lab2_2_1.exe: CMakeFiles/lab2_2_1.dir/test.c.obj
lab2_2_1.exe: CMakeFiles/lab2_2_1.dir/build.make
lab2_2_1.exe: CMakeFiles/lab2_2_1.dir/linklibs.rsp
lab2_2_1.exe: CMakeFiles/lab2_2_1.dir/objects1.rsp
lab2_2_1.exe: CMakeFiles/lab2_2_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Projects\C\C_Rep\lab2_2_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable lab2_2_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab2_2_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2_2_1.dir/build: lab2_2_1.exe

.PHONY : CMakeFiles/lab2_2_1.dir/build

CMakeFiles/lab2_2_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab2_2_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab2_2_1.dir/clean

CMakeFiles/lab2_2_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Projects\C\C_Rep\lab2_2_1 D:\Projects\C\C_Rep\lab2_2_1 D:\Projects\C\C_Rep\lab2_2_1\cmake-build-debug D:\Projects\C\C_Rep\lab2_2_1\cmake-build-debug D:\Projects\C\C_Rep\lab2_2_1\cmake-build-debug\CMakeFiles\lab2_2_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab2_2_1.dir/depend

