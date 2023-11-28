#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        int x1, x2, y1, y2;
        int a1, a2, b1, b2;

        cin >> x1 >> y1 >> x2 >> y2;
        cin >> a1 >> b1 >> a2 >> b2;

        if (x1 == x2) {
            if (((a1 > x1 && a2 < x1) || (a1 < x1 && a2 > x1)) && ((y1 > b1 && y2 < b1) || (y1 < b1 && y2 > b1))) {
                cout << "1";
            }
            else if (((a1 == x1 || a2 == x1) && ((y1 >= b1 && y2 <= b1) || (y1 <= b1 && y2 >= b1))) || ((y1 == b1 || y2 == b1) && ((a1 >= x1 && a2 <= x1) || (a1 <= x1 && a2 >= x1)))) {
                cout << "2";
            }
            else {
                cout << "0";
            }
        }
        else if (y1 == y2) {
            if (((b1 > y1 && b2 < y1) || (b1 < y1 && b2 > y1)) && ((x1 > a1 && x2 < a1) || (x1 < a1 && x2 > a1))) {
                cout << "1";
            }
            else if (((b1 == y1 || b2 == y1) && ((x1 >= a1 && x2 <= a1) || (x1 <= a1 && x2 >= a1))) || ((x1 == a1 || x2 == a1) && ((b1 >= y1 && b2 <= y1) || (b1 <= y1 && b2 >= y1)))) {
                cout << "2";
            }
            else {
                cout << "0";
            }
        }
        cout << endl;
    }
}