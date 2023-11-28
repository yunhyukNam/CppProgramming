#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;

    int a, b, c;
    int dot1, dot2;

    while (t--) {
        cin >> a >> b >> c;
        if (a + b <= c) {
            cout << 0 << endl;
        }
        else if (a == b && b == c && c == a) {
            cout << 1 << endl;
        }
        else if (a * a + b * b == c * c) {
            cout << 2 << endl;
        }
        else if (a == b || b == c) {
            cout << 3 << endl;
        }
        else {
            cout << 4 << endl;
        }
    }

    return 0;
}