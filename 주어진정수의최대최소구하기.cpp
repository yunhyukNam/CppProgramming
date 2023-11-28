#include <iostream>

int main() {
    int t, n;
    int cnt = 0;

    int num[100] = { 0x00, };

    int bigger, smaller;

    std::cin >> t;

    while (cnt < t) {
        std::cin >> n;

        if (1 <= n && n <= 100) {
            for (int i = 0; i < n; i++) {
                std::cin >> num[i];
            }

            bigger = smaller = num[0];

            for (int j = 1; j < n; j++) {
                if (num[j] > bigger) {
                    bigger = num[j];
                }
                if (num[j] < smaller) {
                    smaller = num[j];
                }
            }

            std::cout << bigger << " " << smaller << "\n";

        }
        else {
            std::cout << "1 <= n <= 100" << std::endl;
        }

        cnt++;
    }

    return 0;
}
