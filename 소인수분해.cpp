#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> primeFactorization(int n) {
    vector<pair<int, int>> factors;

    for (int i = 2; i * i <= n; ++i) {
        int count = 0;

        while (n % i == 0) {
            n /= i;
            count++;
        }

        if (count > 0) {
            factors.push_back({ i, count });
        }
    }

    if (n > 1) {
        factors.push_back({ n, 1 });
    }

    return factors;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> factors = primeFactorization(n);

        cout << factors.size() << " ";
        for (const auto& factor : factors) {
            cout << factor.first << " " << factor.second << " ";
        }
        cout << endl;
    }

    return 0;
}