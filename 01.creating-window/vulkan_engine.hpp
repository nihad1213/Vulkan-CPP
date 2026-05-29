#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace ve {
    class VulkanEngine {

        public:
            VulkanEngine(int w, int h, std::string name);
            ~VulkanEngine();

        private:
            GLFWwindow* window;

            void initWindow();

            const int width;
            const int height;
    };
}