# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.6\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.6\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Peter\Documents\year2\quadtree\quadtree-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Peter\Documents\year2\quadtree\quadtree-project\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/quadtree_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/quadtree_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quadtree_project.dir/flags.make

CMakeFiles/quadtree_project.dir/program/program.c.obj: CMakeFiles/quadtree_project.dir/flags.make
CMakeFiles/quadtree_project.dir/program/program.c.obj: CMakeFiles/quadtree_project.dir/includes_C.rsp
CMakeFiles/quadtree_project.dir/program/program.c.obj: ../program/program.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Peter\Documents\year2\quadtree\quadtree-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/quadtree_project.dir/program/program.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\quadtree_project.dir\program\program.c.obj   -c C:\Users\Peter\Documents\year2\quadtree\quadtree-project\program\program.c

CMakeFiles/quadtree_project.dir/program/program.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/quadtree_project.dir/program/program.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Peter\Documents\year2\quadtree\quadtree-project\program\program.c > CMakeFiles\quadtree_project.dir\program\program.c.i

CMakeFiles/quadtree_project.dir/program/program.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/quadtree_project.dir/program/program.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Peter\Documents\year2\quadtree\quadtree-project\program\program.c -o CMakeFiles\quadtree_project.dir\program\program.c.s

# Object files for target quadtree_project
quadtree_project_OBJECTS = \
"CMakeFiles/quadtree_project.dir/program/program.c.obj"

# External object files for target quadtree_project
quadtree_project_EXTERNAL_OBJECTS =

quadtree_project.exe: CMakeFiles/quadtree_project.dir/program/program.c.obj
quadtree_project.exe: CMakeFiles/quadtree_project.dir/build.make
quadtree_project.exe: CMakeFiles/quadtree_project.dir/linklibs.rsp
quadtree_project.exe: CMakeFiles/quadtree_project.dir/objects1.rsp
quadtree_project.exe: CMakeFiles/quadtree_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Peter\Documents\year2\quadtree\quadtree-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable quadtree_project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\quadtree_project.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quadtree_project.dir/build: quadtree_project.exe

.PHONY : CMakeFiles/quadtree_project.dir/build

CMakeFiles/quadtree_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\quadtree_project.dir\cmake_clean.cmake
.PHONY : CMakeFiles/quadtree_project.dir/clean

CMakeFiles/quadtree_project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Peter\Documents\year2\quadtree\quadtree-project C:\Users\Peter\Documents\year2\quadtree\quadtree-project C:\Users\Peter\Documents\year2\quadtree\quadtree-project\cmake-build-debug C:\Users\Peter\Documents\year2\quadtree\quadtree-project\cmake-build-debug C:\Users\Peter\Documents\year2\quadtree\quadtree-project\cmake-build-debug\CMakeFiles\quadtree_project.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quadtree_project.dir/depend
