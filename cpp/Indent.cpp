#include <iostream>

using namespace std;

int main() {
  int breakNum = 4;
  for (int i = 0; i < 10; i++) {
    cout << i << ' ';

    if (i == breakNum)
      break;
  }
}
