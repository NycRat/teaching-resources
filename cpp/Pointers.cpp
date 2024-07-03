#include <iostream>

void add(int *var, int value) { *var += value; }

int main() {
  // int num = 10;
  // int t;
  // std::cin >> t;
  // add(&num,t);
  // std::cout << num;

  // int num = 10;
  // int* point = &num;
  // std::cin >> *point;
  // std::cout << num;

  int num = 10;
  int *point = &num;
  std::cout << *point << std::endl << &num;
}
