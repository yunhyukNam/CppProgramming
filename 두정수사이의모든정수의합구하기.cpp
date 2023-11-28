#include <cstdio>
#include <iostream>

int main() {
	int t, m, n, cnt = 0;
	int sum[10000] = { 0, };

	std::cin >> t;

	while (1) {
		if (cnt == t) {
			break;
		}
		else {
			std::cin >> m >> n;

			if (0 > m && m > 10000) {
				std::cout << "0 <= m <= 9999" << std::endl;
				continue;
			}
			else if (0 > n && n > 10000) {
				std::cout << "0 <= n <= 9999" << std::endl;
				continue;
			}

			for (int i = m; i <= n; i++) {
				sum[cnt] += i;
			}
			cnt++;
		}
	}

	for (int k = 0; k < t; k++) {
		std::cout << sum[k] << std::endl;
	}

	return 0;
}