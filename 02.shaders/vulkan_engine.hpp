#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace ve {
    class VulkanEngine {

        public:
            VulkanEngine(int w, int h, std::string name);
            ~VulkanEngine();
            bool shouldClose() {return glfwWindowShouldClose(window);}

            VulkanEngine(const VulkanEngine &) = delete;
            VulkanEngine &operator = (const VulkanEngine);

        private:
            void initWindow();

            const int width;
            const int height;
            const std::string windowName;
            GLFWwindow* window;
    };
}