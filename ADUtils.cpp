#include "ADUtils.h"

#include <filesystem>
#include <fstream>
#include <sstream>
#include <stdexcept>

namespace fs = std::filesystem;

namespace ADUtils {

    bool fileExists(const std::string& path) {
        return fs::exists(path) && fs::is_regular_file(path);
    }

    bool directoryExists(const std::string& path) {
        return fs::exists(path) && fs::is_directory(path);
    }

    std::string readFile(const std::string& path) {
        std::ifstream file(path);

        if (!file.is_open()) {
            throw std::runtime_error("Could not open file: " + path);
        }

        std::stringstream buffer;
        buffer << file.rdbuf();

        return buffer.str();
    }

    std::vector<std::string> listDirectory(const std::string& path) {
        if (!directoryExists(path)) {
            throw std::runtime_error("Directory does not exist: " + path);
        }

        std::vector<std::string> files;

        for (const auto& entry : fs::directory_iterator(path)) {
            files.push_back(entry.path().string());
        }

        return files;
    }

}