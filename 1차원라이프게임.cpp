#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    int m, num;
    while (cnt--) {
        cin >> m >> num;

        int* k = new int[m];
        int* temp = new int[m];

        for (size_t i = 0; i < m; i++) {
            cin >> k[i];
        }

        int sum = 0;

        for (int a = 0; a < num; a++) {
            for (size_t mm = 0; mm < m; mm++) {
                temp[mm] = k[mm];
            }

            sum = 0;

            for (size_t i = 0; i < m; i++) {
                if (i == 0) {
                    sum = k[i + 1];
                }
                else if (i == m - 1) {
                    sum = k[i - 1];
                }
                else {
                    sum = k[i + 1] + k[i - 1];
                }

                if (sum < 3 && k[i] > 0) {
                    temp[i]--;
                }
                else if (sum > 7 && k[i] > 0) {
                    temp[i]--;
                }
                else if (sum == 4 || sum == 5 || sum == 6 || sum == 7) {
                    if (k[i] < 9) {
                        temp[i]++;
                    }
                }
            }

            for (size_t mm = 0; mm < m; mm++) {
                k[mm] = temp[mm];
            }
        }

        for (size_t i = 0; i < m; i++) {
            cout << k[i] << ' ';
        }
        cout << endl;

        delete[] k;
        delete[] temp;
    }
}