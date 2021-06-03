#include <iostream>

namespace MyNamespace {
  void cout(char* name) {
    std::cout << "Your Input is " << name;
  }
}

int main() {
  char name[30];
  std::cout << "Write your input:";
  std::cin.getline(name,sizeof(name));
  MyNamespace::cout(name);
  return 0;
}
