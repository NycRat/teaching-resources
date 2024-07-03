#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> numbers;
  cout << "Enter the number of elements in vector: ";
  int n;
  cin >> n;
  cout << "Enter " << n << " elements: ";
  int t;
  for (int i = 0; i < n; i++) {
    cin >> t;
    numbers.push_back(t);
  }
  sort(numbers.begin(), numbers.begin() + n);
  for (int num : numbers) {
    cout << num << endl;
  }
}
