# Particle-Fire-Simulator
 A C++ program that manages a bunch of virtual particles which  appear on the screen gradually change colour and kind of circle around each other.


# Pre-requisites

## Steps to install mingw

- Goto minlibs : https://winlibs.com/
- Download zip file
- Extract to :/C/<some path>
- Add the `$PATH`variable
  - `Windows + S`, then search for environment variables
  - Select `Path` variable, press edit, then press new, and browse the folder in which mingw/bin is present
- Check if installation is success by
  - Open new powershell window and run following command

  ```
  g++ --version
  ```

## Install SDL (Simple DirectMedia layer)

`Simple DirectMedia Layer` is a cross-platform development library designed to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via OpenGL and Direct3D. It is used by video playback software, emulators, and popular games including Valve's award winning catalog and many Humble Bundle games.

- Goto https://www.libsdl.org/ and download latest package for windows

- Get https://github.com/libsdl-org/SDL/releases/tag/release-3.2.26

- Add the path of the `include` folder to the `$PATH` environment variable:
  1. Press `Windows + S` and search for "Environment Variables".
  2. Under "System Variables", find the `Path` variable and click "Edit".
  3. Click "New" and add the full path to the `include` folder (e.g., `C:\path\to\SDL\include`).
  4. Click "OK" to save the changes.


# Build the SDL3 library

Go to path where you download SDL and run below commands

```
cd SDL\SDL-release-3.2.26
mkdir build
cd build

# Remove build artifacts, if any
del CMakeCache.txt # Use 'rm' if you're using a Unix-like shell

# Build cmake
cmake.exe ..
cmake -G "MinGW Makefiles" ..

# Build the code of sdl3
cmake --build . --config Release

# Check if dll file is created
dir SDL\SDL-release-3.2.26\build\SDL3.dll # Use 'rm' if you're using a Unix-like shell

```

# Update makefile

Open the `Makefile` in the `src` folder and update the `SDL_BASE` variable to the path where you installed SDL

```
# Open line 8 in src/Makefile
vim.exe src/Makefile +8
```


I installed it in root folder of project, so it looks like below:

```makefile
SDL_BASE := ../SDL/SDL-release-3.2.26
```

# Build the project

- Invoke the makefile


```
cd src/
mingw32-make.exe
```

- Check if ParticleSimulator.exe is created


```
ls ParticleSimulator.exe
```

# Run the executable

## Make the sdl3.dll available

You can either

- Add the path of sdl3.dll in $PATH env variable, or
- Copy it in the same directory containing

## Invoke the main executable


```
.\ParticleSimulator.exe
```

## Expected output


<img width="812" height="646" alt="Simulator" src="https://github.com/user-attachments/assets/f5c54c22-014b-4a6e-8c5a-55a058a68add" />

# Common Issues

## Code is compiling, but not getting executed

### Steps to debug

- Check the exit code


```
 .\ParticleSimulator.exe

 echo $LASTEXITCODE
```

- If the exit code is non-zero, there was a crash

- Exit code -1073741515 (0xC0000135) means: “The program can’t start because a required DLL was not found.”

- To fix this
  - Add the path of sdl3.dll in $PATH env variable, or
  - copy it in the same directory containing
