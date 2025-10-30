# Makefile for compiling main.cpp

CXX := g++
CXXFLAGS := -std=c++11 -Wall
SRC := main.cpp
OUT := ParticleFireSimulator

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC)

clean:
	del /f $(OUT).exe