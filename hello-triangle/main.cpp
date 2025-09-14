#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class HelloTriangleApplication {
    public:
        void run() {
            initVulkan();
            mainLoop();
            cleanup();
        }
    
    private:
        void initVulkan() {
            // Initialization code for Vulkan would go here
        }

        void mainLoop() {
            // Main rendering loop would go here
        }

        void cleanup() {
            // Cleanup code for Vulkan would go here
        }
};

int main() {
    HelloTriangleApplication app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
