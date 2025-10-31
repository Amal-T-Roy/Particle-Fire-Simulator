# Particle-Fire-Simulator
 A C++ program that manages a bunch of virtual particles which  appear on the screen gradually change colour and kind of circle around each other.


# Pre-requisites

## Steps to install mingw

- Goto minlibs : https://winlibs.com/
- Download zip file
- Extract to :/C/<some path>
- Add to Path variable
  - Windows + S, then search for environment variables
  - Select Path variable, press edit, then press new, and browse the folder in which mingw/bin is present
- Check if installation is success by
  - Open new powershell window and run "g++ --version"

## Install SDL (Simple DirectMedia layer)

Simple DirectMedia Layer is a cross-platform development library designed to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via OpenGL and Direct3D. It is used by video playback software, emulators, and popular games including Valve's award winning catalog and many Humble Bundle games.

- Goto https://www.libsdl.org/ and download latest package for windows

- Get https://github.com/libsdl-org/SDL/releases/tag/release-3.2.26

- Add path of the include folder in $PATH


# Build the SDL3 library

Go to path where you download SDL and run below commands

bash
```
cd SDL\SDL-release-3.2.26
mkdir build
cd build

# Remove build artifacts, if any
rm .\CMakeCache.txt

# Build cmake
cmake.exe ..
cmake -G "MinGW Makefiles" ..

# Build the code of sdl3
cmake --build . --config Release

# Check if dll file is created
ls SDL\SDL-release-3.2.26\build\SDL3.dll

```

# Build the project

- Go to src folder in repo
- Call Makefile using below command

bash
```
mingw32-make.exe
```
