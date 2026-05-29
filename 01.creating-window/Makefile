CXX      := g++
CXXFLAGS := -std=c++26 -Wall -Wextra -O2
LDFLAGS  := -lglfw -lvulkan

TARGET   := app
SRCS     := main.cpp vulkan_engine.cpp
OBJS     := $(SRCS:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
