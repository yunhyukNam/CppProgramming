#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<long long> hamming;
    hamming.push_back(1);

    int factors[] = { 2, 3, 5 };

    vector<long long> nextNums(3, 0);

    for (int i = 0; i < t; ++i) {
        int k;
        cin >> k;

        while (hamming.size() < k) {
            for (int j = 0; j < 3; ++j) {
                nextNums[j] = *lower_bound(hamming.begin(), hamming.end(), hamming.back() / factors[j] + 1) * factors[j];
            }

            long long next = *min_element(nextNums.begin(), nextNums.end());
            hamming.push_back(next);
        }

        cout << hamming[k - 1] << endl;
    }

    return 0;
}