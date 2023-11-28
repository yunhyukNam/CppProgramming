#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    unsigned long long i = 0;
    unsigned long long k;
    unsigned long check = 0;

    cin >> i;

    while (i--) {
        int num = 0;
        long sum = 0;

        k = 0;
        cin >> k;

        unsigned long n = 1;
        unsigned long long  m = 1;

        for (long cnt_i = 0; cnt_i < k; cnt_i++) {
            cin >> n;

            while (n % 10 == 0) {
                n = n / 10;
                num += 1;
            }

            m = m * n;

            while (m % 10 == 0) {
                m = (m) / 10;
                num += 1;
            }

            if (m > 1000000000) {
                m = m % 1000000000;
            }
        }

        cout << (m % 10) << ' ' << num << endl;
        num = 0;

    }

    return 0;
}