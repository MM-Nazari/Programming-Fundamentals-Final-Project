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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.5\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\MMNazari1380\CLionProjects\proje_payan_term

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\MMNazari1380\CLionProjects\proje_payan_term\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/proje_payan_term.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/proje_payan_term.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proje_payan_term.dir/flags.make

CMakeFiles/proje_payan_term.dir/proje.c.obj: CMakeFiles/proje_payan_term.dir/flags.make
CMakeFiles/proje_payan_term.dir/proje.c.obj: ../proje.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MMNazari1380\CLionProjects\proje_payan_term\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/proje_payan_term.dir/proje.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proje_payan_term.dir\proje.c.obj   -c C:\Users\MMNazari1380\CLionProjects\proje_payan_term\proje.c

CMakeFiles/proje_payan_term.dir/proje.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proje_payan_term.dir/proje.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\MMNazari1380\CLionProjects\proje_payan_term\proje.c > CMakeFiles\proje_payan_term.dir\proje.c.i

CMakeFiles/proje_payan_term.dir/proje.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proje_payan_term.dir/proje.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\MMNazari1380\CLionProjects\proje_payan_term\proje.c -o CMakeFiles\proje_payan_term.dir\proje.c.s

# Object files for target proje_payan_term
proje_payan_term_OBJECTS = \
"CMakeFiles/proje_payan_term.dir/proje.c.obj"

# External object files for target proje_payan_term
proje_payan_term_EXTERNAL_OBJECTS =

proje_payan_term.exe: CMakeFiles/proje_payan_term.dir/proje.c.obj
proje_payan_term.exe: CMakeFiles/proje_payan_term.dir/build.make
proje_payan_term.exe: CMakeFiles/proje_payan_term.dir/linklibs.rsp
proje_payan_term.exe: CMakeFiles/proje_payan_term.dir/objects1.rsp
proje_payan_term.exe: CMakeFiles/proje_payan_term.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\MMNazari1380\CLionProjects\proje_payan_term\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable proje_payan_term.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\proje_payan_term.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proje_payan_term.dir/build: proje_payan_term.exe

.PHONY : CMakeFiles/proje_payan_term.dir/build

CMakeFiles/proje_payan_term.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\proje_payan_term.dir\cmake_clean.cmake
.PHONY : CMakeFiles/proje_payan_term.dir/clean

CMakeFiles/proje_payan_term.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\MMNazari1380\CLionProjects\proje_payan_term C:\Users\MMNazari1380\CLionProjects\proje_payan_term C:\Users\MMNazari1380\CLionProjects\proje_payan_term\cmake-build-debug C:\Users\MMNazari1380\CLionProjects\proje_payan_term\cmake-build-debug C:\Users\MMNazari1380\CLionProjects\proje_payan_term\cmake-build-debug\CMakeFiles\proje_payan_term.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/proje_payan_term.dir/depend

