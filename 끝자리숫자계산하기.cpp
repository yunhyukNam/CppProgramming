#include <cstdio>
#include <iostream>
using namespace std;

int main() {

    long long a, n, t, i;
    int arr[100] = { 0, };

    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> n;
        long long b = 1;

        for (int j = 0; j < n; j++) {
            cin >> a;
            b = (a * b) % 10;

        }
        arr[i] = b;
    }

    for (i = 0; i < t; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}