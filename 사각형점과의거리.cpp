#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;

    int x1 = 0; int x2 = 0; int y1 = 0; int y2 = 0;
    int dot1, dot2;
    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> dot1 >> dot2;
        int sum;
        if (x1 <= dot1 && dot1 <= x2 && y1 <= dot2 && dot2 <= y2) {
            cout << 0 << ' ' << 0 << endl;
        }
        else if (x1 <= dot1 && dot1 <= x2) {
            dot2 > y2 ? sum = dot2 - y2 : sum = y1 - dot2;
            cout << sum * sum << ' ' << sum << endl;
        }
        else if (y1 <= dot2 && dot2 <= y2) {
            dot1 > x2 ? sum = dot1 - x2 : sum = x1 - dot1;
            cout << sum * sum << ' ' << sum << endl;
        }
        else {
            if (dot1 > x2) {
                dot2 > y2 ? (x1 = x2) & (y1 = y2) : x1 = x2;

            }
            else {
                dot2 > y2 ? (y1 = y2) : sum = 0;
            }
            cout << ((dot2 - y1) * (dot2 - y1) + (dot1 - x1) * (dot1 - x1)) << ' ' << abs(dot2 - y1) + abs(dot1 - x1) << endl;
        }
    }

    return 0;
}