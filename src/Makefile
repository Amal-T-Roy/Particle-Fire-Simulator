# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall

# Base directory where SDL library is downloaded
SDL_BASE := ../SDL/SDL-release-3.2.26

# Include and library paths
INCLUDE := -I$(SDL_BASE)/include
LIB := -L$(SDL_BASE)/build

# Libraries to link
LIBS := -lSDL3

# Source files (all .cpp files in the src directory)
SRC := main.cpp Particle.cpp Screen.cpp Swarm.cpp

# Output executable
OUT := ParticleSimulator.exe

# Build target
all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(SRC) $(CXXFLAGS) $(INCLUDE) $(LIB) $(LIBS) -o $(OUT)

# Clean up build files
clean:
	del /f $(OUT)