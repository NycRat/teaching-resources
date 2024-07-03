#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main () {
    unordered_set <int> unordered;
    set <int> ordered;
    int t;
    for (int e = 0; e<10; e++) {
        cin >> t;
        ordered.insert(t);
        unordered.insert(t);
    }
    cout << "Ordered : ";
    for (int e : ordered) {
        cout << e << " ";
    }
    cout << endl << "Unordered : ";
    for (int e : unordered) {
        cout << e << " ";
    }

}