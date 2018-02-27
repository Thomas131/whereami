#include <iostream>

#include "../src/whereami++.cpp"

int main() {
  std::cout << "executable path: " << whereami::getExecutablePath() << std::endl;
  whereami::whereami_path_t executablePath = whereami::getExecutablePath();
  std::cout << "  dirname: " << executablePath.dirname() << std::endl;
  std::cout << "  basename: " << executablePath.basename() << std::endl;

  return 0;
}
