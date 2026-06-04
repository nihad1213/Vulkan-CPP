#include "first_app.hpp"

namespace ve {
    void FirstApp::run() {
        while (!vulkanEngine.shouldClose()) {
            glfwPollEvents();
        }
    }
}