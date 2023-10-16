#include <iostream>
#include <filesystem>

int main() {

    std::filesystem::path path("S:\\Slillbox\\test 35.3");
    std::string extension = ".cpp";

    for(auto &p : std::filesystem::recursive_directory_iterator("S:\\Slillbox\\test 35.3"))
    {
        std::cout << p.path() << " ";
        std::filesystem::path ob = p.path();
        std::cout << is_regular_file(ob) << std::endl;
        if(is_regular_file(ob))
        {
            std::cout << ob.extension() << std::endl;
            if(!ob.extension().compare(ex))
                std::cout << "Yes!!!" << std::endl;
            else std::cout << "No!!!" << std::endl;
        }
    }

    auto recursiveGetFileNamesByExtension = [](std::filesystem::path path, const std::string extension)
    {

    };

}
