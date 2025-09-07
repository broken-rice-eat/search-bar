#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main(){
  fs::path dir_path = "/home";
  if (fs::exists(dir_path) && fs::is_directory(dir_path)){
    for (const auto& entry : fs::recursive_directory_iterator(dir_path)){
      std::cout << entry.path() << " ";
    }
  }
}