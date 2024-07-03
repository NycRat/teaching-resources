#include <iostream>

using namespace std;

void printSum(int num1, int num2) { cout << num1 + num2 << endl; }

int getSum(int a, int b) {
  cout << a + b << endl;
  return a + b;
}

int main() {
  int num = getSum(4, 5);
  cout << getSum(4, 5);
}

#if 0
int sum (int a, int b) {
    return a+b;
}

void printNum (int num) {
    cout << "Number: " << num << endl;
}

// doesn't work
void addToVar1 (int num) {
    num++;
}

// actually works
void addToVar2 (int& num) {
    num++;
}
void addToVar3 (int* num) {
    *num += 1;
}

int main () {
    /*
    int a,b;
    cin >> a >> b;
    cout << sum(a,b);
    */
    int n;
    cin >> n;
    addToVar1(n);
    cout << n << endl;
    addToVar2(n);
    cout << n << endl;
    addToVar3(&n);
    cout << n << endl;
    return 0;
}

#endif
