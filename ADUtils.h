#ifndef ADUTILS_H
#define ADUTILS_H

#include <string>
#include <vector>

namespace ADUtils {

    /**
     * @brief Checks whether a file exists.
     * @param path Path to the file.
     * @return true if file exists, false otherwise.
     */
    bool fileExists(const std::string& path);

    /**
     * @brief Checks whether a directory exists.
     * @param path Path to the directory.
     * @return true if directory exists, false otherwise.
     */
    bool directoryExists(const std::string& path);

    /**
     * @brief Reads the entire contents of a file into a string.
     * @param path Path to file.
     * @return File contents as a string.
     * @throws std::runtime_error if file cannot be opened.
     */
    std::string readFile(const std::string& path);

    /**
     * @brief Lists files in a directory (non-recursive).
     * @param path Path to directory.
     * @return Vector of file names.
     * @throws std::runtime_error if directory cannot be opened.
     */
    std::vector<std::string> listDirectory(const std::string& path);

}

#endif