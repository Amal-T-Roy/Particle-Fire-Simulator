

# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall

# Include and library paths
INCLUDE := -IC:\Users\itsme\OneDrive\Desktop\Particle_Simulator\Particle-Fire-Simulator\SDL\SDL-release-3.2.26\include
LIB := -LC:\Users\itsme\OneDrive\Desktop\Particle_Simulator\Particle-Fire-Simulator\SDL\SDL-release-3.2.26\build

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