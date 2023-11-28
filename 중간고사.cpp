#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

void triangle();
void prime();

void distance();

int main() {
	/*triangle();*/
	/*prime();*/

	distance();

	return 0;
}

void triangle() {
	int t, n;
	cin >> t;

	if (2 > t || t > 50) {
		exit(1);
	}

	for (int cnt_i = 0; cnt_i < t; cnt_i++) {
		std::cin >> n;

		if (1 > n || n > 100) {
			break;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i + 1; j++) {
				if (j == 0) {
					cout << "*";
				}
				else if (j == i) {
					cout << "*";
				}
				else {
					if (i == n - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
}

void prime() {
	int t, n, ret_n = 0;
	cin >> t;

	if (2 > t || t > 50) {
		exit(1);
	}

	for (int cnt_i = 0; cnt_i < t; cnt_i++) {
		std::cin >> n;

		for (int i = 2; i < n; i++) {
			if (n % i > 0) {
				ret_n = 1;
			}
			else if (n % i == 0) {
				ret_n = 0;
				break;
			}
		}

		cout << ret_n << endl;
	}
}


double get_manhattan_dist(int x1, int y1, int x2, int y2) {
	int x = x1 - x2;
	int y = y1 - y2;

	double dist = abs(x) + abs(y);

	return dist;
}

double get_euclidean_dist(int x1, int y1, int x2, int y2) {
	int x = x1 - x2;
	int y = y1 - y2;

	double dist = sqrt(pow(x, 2) + pow(y, 2));

	return dist;
}

void distance() {
	cout << fixed;
	cout.precision(2);

	int tc;
	cin >> tc;

	while (tc)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << get_manhattan_dist(x1, y1, x2, y2) << ' ' << get_euclidean_dist(x1,
			y1, x2, y2) << endl;
		--tc;
	}

}