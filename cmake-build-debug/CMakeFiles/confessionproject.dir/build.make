# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/yana/Documents/uni/процпрога/clion/clion-2020.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yana/Documents/uni/процпрога/clion/clion-2020.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yana/Documents/uni/процпрога/confession/confession

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/confessionproject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/confessionproject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/confessionproject.dir/flags.make

CMakeFiles/confessionproject.dir/main.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/confessionproject.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/main.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/main.cpp

CMakeFiles/confessionproject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/main.cpp > CMakeFiles/confessionproject.dir/main.cpp.i

CMakeFiles/confessionproject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/main.cpp -o CMakeFiles/confessionproject.dir/main.cpp.s

CMakeFiles/confessionproject.dir/Engine/Engine.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/Engine.cpp.o: ../Engine/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/confessionproject.dir/Engine/Engine.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/Engine.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/Engine.cpp

CMakeFiles/confessionproject.dir/Engine/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/Engine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/Engine.cpp > CMakeFiles/confessionproject.dir/Engine/Engine.cpp.i

CMakeFiles/confessionproject.dir/Engine/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/Engine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/Engine.cpp -o CMakeFiles/confessionproject.dir/Engine/Engine.cpp.s

CMakeFiles/confessionproject.dir/Engine/Tile.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/Tile.cpp.o: ../Engine/Tile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/confessionproject.dir/Engine/Tile.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/Tile.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/Tile.cpp

CMakeFiles/confessionproject.dir/Engine/Tile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/Tile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/Tile.cpp > CMakeFiles/confessionproject.dir/Engine/Tile.cpp.i

CMakeFiles/confessionproject.dir/Engine/Tile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/Tile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/Tile.cpp -o CMakeFiles/confessionproject.dir/Engine/Tile.cpp.s

CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.o: ../Engine/Bullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/Bullet.cpp

CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/Bullet.cpp > CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.i

CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/Bullet.cpp -o CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.s

CMakeFiles/confessionproject.dir/Engine/Ego.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/Ego.cpp.o: ../Engine/Ego.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/confessionproject.dir/Engine/Ego.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/Ego.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/Ego.cpp

CMakeFiles/confessionproject.dir/Engine/Ego.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/Ego.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/Ego.cpp > CMakeFiles/confessionproject.dir/Engine/Ego.cpp.i

CMakeFiles/confessionproject.dir/Engine/Ego.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/Ego.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/Ego.cpp -o CMakeFiles/confessionproject.dir/Engine/Ego.cpp.s

CMakeFiles/confessionproject.dir/Engine/Interface.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/Interface.cpp.o: ../Engine/Interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/confessionproject.dir/Engine/Interface.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/Interface.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/Interface.cpp

CMakeFiles/confessionproject.dir/Engine/Interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/Interface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/Interface.cpp > CMakeFiles/confessionproject.dir/Engine/Interface.cpp.i

CMakeFiles/confessionproject.dir/Engine/Interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/Interface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/Interface.cpp -o CMakeFiles/confessionproject.dir/Engine/Interface.cpp.s

CMakeFiles/confessionproject.dir/Engine/Button.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/Button.cpp.o: ../Engine/Button.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/confessionproject.dir/Engine/Button.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/Button.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/Button.cpp

CMakeFiles/confessionproject.dir/Engine/Button.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/Button.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/Button.cpp > CMakeFiles/confessionproject.dir/Engine/Button.cpp.i

CMakeFiles/confessionproject.dir/Engine/Button.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/Button.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/Button.cpp -o CMakeFiles/confessionproject.dir/Engine/Button.cpp.s

CMakeFiles/confessionproject.dir/Engine/Generator.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/Generator.cpp.o: ../Engine/Generator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/confessionproject.dir/Engine/Generator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/Generator.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/Generator.cpp

CMakeFiles/confessionproject.dir/Engine/Generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/Generator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/Generator.cpp > CMakeFiles/confessionproject.dir/Engine/Generator.cpp.i

CMakeFiles/confessionproject.dir/Engine/Generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/Generator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/Generator.cpp -o CMakeFiles/confessionproject.dir/Engine/Generator.cpp.s

CMakeFiles/confessionproject.dir/Engine/Game.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/Game.cpp.o: ../Engine/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/confessionproject.dir/Engine/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/Game.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/Game.cpp

CMakeFiles/confessionproject.dir/Engine/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/Game.cpp > CMakeFiles/confessionproject.dir/Engine/Game.cpp.i

CMakeFiles/confessionproject.dir/Engine/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/Game.cpp -o CMakeFiles/confessionproject.dir/Engine/Game.cpp.s

CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.o: CMakeFiles/confessionproject.dir/flags.make
CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.o: ../Engine/KeyHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.o -c /home/yana/Documents/uni/процпрога/confession/confession/Engine/KeyHandler.cpp

CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yana/Documents/uni/процпрога/confession/confession/Engine/KeyHandler.cpp > CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.i

CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yana/Documents/uni/процпрога/confession/confession/Engine/KeyHandler.cpp -o CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.s

# Object files for target confessionproject
confessionproject_OBJECTS = \
"CMakeFiles/confessionproject.dir/main.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/Engine.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/Tile.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/Ego.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/Interface.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/Button.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/Generator.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/Game.cpp.o" \
"CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.o"

# External object files for target confessionproject
confessionproject_EXTERNAL_OBJECTS =

confessionproject: CMakeFiles/confessionproject.dir/main.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/Engine.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/Tile.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/Bullet.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/Ego.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/Interface.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/Button.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/Generator.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/Game.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/Engine/KeyHandler.cpp.o
confessionproject: CMakeFiles/confessionproject.dir/build.make
confessionproject: ../resources/SFML-2.5.1/lib/libsfml-graphics.so.2.5.1
confessionproject: ../resources/SFML-2.5.1/lib/libsfml-window.so.2.5.1
confessionproject: ../resources/SFML-2.5.1/lib/libsfml-system.so.2.5.1
confessionproject: CMakeFiles/confessionproject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable confessionproject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/confessionproject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/confessionproject.dir/build: confessionproject

.PHONY : CMakeFiles/confessionproject.dir/build

CMakeFiles/confessionproject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/confessionproject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/confessionproject.dir/clean

CMakeFiles/confessionproject.dir/depend:
	cd /home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yana/Documents/uni/процпрога/confession/confession /home/yana/Documents/uni/процпрога/confession/confession /home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug /home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug /home/yana/Documents/uni/процпрога/confession/confession/cmake-build-debug/CMakeFiles/confessionproject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/confessionproject.dir/depend

