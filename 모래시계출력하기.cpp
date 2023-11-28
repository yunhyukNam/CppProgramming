#include <iostream>
using namespace std;

void print_hourglass(int t) {
    for (int i = 0; i < t / 2; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "-";
        }
        for (int j = 0; j < t - 2 * i; j++) {
            if (j % 2 == 0) {
                cout << "*";
            }
            else {
                cout << "+";
            }
        }
        for (int j = 0; j < i; j++) {
            cout << "-";
        }
        cout << endl;
    }

    for (int i = t / 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "-";
        }
        for (int j = 0; j < t - 2 * i; j++) {
            if (j % 2 == 0) {
                cout << "*";
            }
            else {
                cout << "+";
            }
        }
        for (int j = 0; j < i; j++) {
            cout << "-";
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
        print_hourglass(k);
    }

    return 0;
}