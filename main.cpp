#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path path("S:\\Slillbox\\test 35.3");
    std::string extension = ".cpp";

    auto recursiveGetFileNamesByExtension = [](std::filesystem::path path, const std::string extension)
    {
        for(auto &p : std::filesystem::recursive_directory_iterator(path))
        {
                if(!p.path().extension().compare(extension))
                    std::cout << p.path().filename() << std::endl;
        }
    };

    recursiveGetFileNamesByExtension(path, extension);
}
