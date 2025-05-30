CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
INCLUDES = -Iheaders
SRC_DIR = sources
OBJ_DIR = obj
EXE_DIR = example
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))
TARGET = $(EXE_DIR)/main

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(TARGET): $(OBJS) $(EXE_DIR)/main.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(EXE_DIR)/main.cpp $(OBJS) -o $(TARGET)

clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)

.PHONY: all clean

run: $(TARGET)
	./$(TARGET)