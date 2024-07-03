#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int &e : arr) {
    cin >> e;
  }
  for (int i = 0; i < 100; i++) {
    cout << arr[i] << endl;
  }
}
