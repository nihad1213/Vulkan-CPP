CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXrandr -lXi -lXxf86vm

VulkanTest: main.cpp
	g++ $(CFLAGS) -o VulkanTest main.cpp $(LDFLAGS)
.PHONY: clean

test: VulkanTest
	./VulkanTest
clean:
	rm -f VulkanTest