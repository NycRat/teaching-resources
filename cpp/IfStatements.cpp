#include <iostream>

using namespace std;

int main() {
  // determine if the number is greater than 10
  int number;
  cin >> number;
  if (number > 10) {
    cout << "The number is greater than 10" << endl;
  } else {
    cout << "The number is not greater than 10" << endl;
  }

  // bool variable
#if false
    bool greaterThan10;
    int number;
    cin >> number;
    greaterThan10=number>10;
    if (greaterThan10) {
        cout << "The number is greater than 10" << endl;
    } else {
        cout << "The number is not greater than 10" << endl;
    }
#endif
}
