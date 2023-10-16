#include <iostream>
#include <filesystem>

int main() {

    for(auto &p : std::filesystem::recursive_directory_iterator("S:\\Slillbox\\test 35.3"))
    {
        std::cout << p.path() << std::endl;
    }

}
