#pragma once

#include "vulkan_engine.hpp"

namespace ve {
    
    class FirstApp {
        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;

            void run(){};
        
        private:
            VulkanEngine vulkanEngine{WIDTH, HEIGHT, "First Vulkan App"};
    };
}