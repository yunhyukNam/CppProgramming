#include <iostream>
using namespace std;

void print_diamond(int size) {
    for (int i = 1; i <= size; i += 2) {
        int spaces = (size - i) / 2;
        for (int j = 0; j < spaces; j++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
        for (int j = 0; j < spaces; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = size - 2; i >= 1; i -= 2) {
        int spaces = (size - i) / 2;
        for (int j = 0; j < spaces; j++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
        for (int j = 0; j < spaces; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        print_diamond(k);
    }

    return 0;
}
