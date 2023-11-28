#include <iostream>

using namespace std;

int main(void) {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        if (1 <= n && n <= 100) {
            int* score = new int[n];

            for (int cnt_i = 0; cnt_i < n; cnt_i++) {
                cin >> score[cnt_i];
            }

            int count[101] = { 0x00, };

            for (int cnt_j = 0; cnt_j < n; cnt_j++) {
                count[score[cnt_j]]++;
            }

            for (int i = 0; i <= 100; i++) {
                if (count[i] > 0) {
                    cout << i << " " << count[i] << " ";
                }
            }

            cout << endl;

            delete[] score;
        }
        else {
            break;
        }
    }
}
