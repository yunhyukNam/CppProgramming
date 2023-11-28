#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        long long n;
        cin >> n;

        long long nN, result;

        bitset<32> num(n);
        nN = num.count();

        if (nN % 2 == 0) {
            num.set(31, false);
        }
        else {
            num.set(31, true);
        }

        result = num.to_ulong();

        if (result < 0) {
            result = 4294967296 + result;
        }

        cout << result << endl;
    }

    return 0;
}
