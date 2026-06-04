#include "ve_pipeline.hpp"

#include <fstream>
#include <stdexcept>
#include <iostream>

namespace ve {

    std::vector<char> VePipeline::readFile(const std::string &filepath) {
        std::ifstream file(filepath, std::ios::ate | std::ios::binary);

        if (!file.is_open()) {
            throw std::runtime_error("failed to open file!");
        }

        size_t fileSize = (size_t) file.tellg();
        std::vector<char> buffer(fileSize);

        file.seekg(0);
        file.read(buffer.data(), fileSize);
        file.close();

        return buffer;
    }

    VePipeline::VePipeline(const std::string &vertFilepath, const std::string &fragFilepath) {
        createGraphicsPipeline(vertFilepath, fragFilepath);
    }

    void VePipeline::createGraphicsPipeline(const std::string &vertFilepath, const std::string &fragFilepath) {
        auto vertShaderCode = readFile(vertFilepath);
        auto fragShaderCode = readFile(fragFilepath);

        std::cout << "Vertex shader code size: " << vertShaderCode.size() << " bytes" << std::endl;
        std::cout << "Fragment shader code size: " << fragShaderCode.size() << " bytes" << std::endl;
    }
}