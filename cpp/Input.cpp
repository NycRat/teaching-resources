#include <iostream>

using namespace std;

int main() {
  string str;
  int n;
  cout << "Enter a String: ";
  cin >> str; // takes input from the user, and assigns the input to the
              // variable 'str'
  cout << "Enter a number: ";
  cin >> n;
  for (int e = 1; e <= n; e++) {
    cout << str << " #" << e << endl;
  }
}
