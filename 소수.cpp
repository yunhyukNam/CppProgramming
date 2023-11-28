#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        if (2 <= n && n <= 100000) {
            bool prime = true;

            for (int cnt = 2; cnt <= sqrt(n); cnt++) {
                if (n % cnt == 0) {
                    prime = false;
                    break;
                }
            }

            cout << prime << endl;
        }
        else {
            break;
        }
    }

    return 0;
}
