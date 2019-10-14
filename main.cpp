//g++-8 main.cpp -std=c++17 -lstdc++fs

#include <string>
#include <iostream>
#include <sstream>

#include <filesystem>



namespace fs = std::filesystem;


int main()
{

      fs::path pathToShow("../main.cpp");
      std::cout << "exists() = " << fs::exists(pathToShow) << "\n"
           << "root_name() = " << pathToShow.root_name() << "\n"
           << "root_path() = " << pathToShow.root_path() << "\n"
           << "relative_path() = " << pathToShow.relative_path() << "\n"
           << "parent_path() = " << pathToShow.parent_path() << "\n"
           << "filename() = " << pathToShow.filename() << "\n"
           << "stem() = " << pathToShow.stem() << "\n"
           << "extension() = " << pathToShow.extension() << "\n";
     return 0;
}
