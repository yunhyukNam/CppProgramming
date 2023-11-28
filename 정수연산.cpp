#include <cstdio>
#include <iostream>
#include <cstdlib>

int main() {
	int t, a, b;
	int cnt = 0;
	int sum, sub, sub_abs, mul, div, remainder, bigger;
	bool same;

	std::cin >> t;

	while (1) {
		if (cnt >= t) {
			break;
		}
		else {
			std::cin >> a >> b;

			sum = a + b;
			sub = a - b;
			sub_abs = abs(sub);
			mul = a * b;
			div = a / b;
			remainder = a % b;

			if (a >= b) {
				bigger = a;
			}
			else if (b >= a) {
				bigger = b;
			}
			if (a == b) {
				same = true;
			}
			else {
				same = false;
			}
			std::cout << sum << " " << sub << " " << sub_abs << " " << mul << " " 
				<< div << " " << remainder << " " << bigger << " " << same << std::endl;
		}
		cnt++;
	}
}