#include <iostream>

void add(int &var, int value) { var += value; }

void setArr(int arr[], int i) { arr[i] = -1; }

int main() {
  int num = 10;
  int t;
  std::cin >> t;
  add(num, t);
  std::cout << num;
  int arr[4] = {1, 3, 5, 3};
  setArr(arr, 2);
  std::cout << arr[2] << std::endl;

  // int num = 10;
  // int& ref = num;
  // std::cin >> ref;
  // std::cout << num;
}
