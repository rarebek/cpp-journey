CXX = g++
TARGET = main
SRC = main.cpp

all:
	$(CXX) -o $(TARGET) $(SRC)
	./$(TARGET)
