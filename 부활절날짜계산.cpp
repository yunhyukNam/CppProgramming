#include <cstdio>
#include <iostream>

int main() {
    int t, cnt = 0;
    int Y, C, T, N, I, J, K, L, P, Q, M, day;
    int tmp = 0;

    std::cin >> t;

    while (cnt < t) {
        std::cin >> Y;

        if (1583 > Y || Y > 99999) {
            std::cout << "1583 <= Y < 99999" << std::endl;

            continue;
        }

        C = Y / 100;    // 2
        N = Y - (Y / 19) * 19;  // 3
        T = (C - 17) / 25;  // 4

        tmp = C - (C / 4) - ((C - T) / 3);  // 5
        tmp = tmp + ((N * 19) + 15);    // 6

        I = tmp;    // 7
        J = I - ((I / 30) * 30);    // 8

        tmp = J / 28;   // 9
        tmp = tmp * (1 - (J / 28)); // 10
        tmp = tmp * (29 / (J + 1)); // 11
        tmp = tmp * ((21 - N) / 11);    // 12

        K = J - tmp;    // 13

        tmp = Y + (Y / 4) + J + 2;  // 14

        L = tmp - C + (C / 4);  // 15
        P = L - ((L / 7) * 7);  // 16
        Q = K - P;  // 17

        M = ((Q + 40) / 44) + 3;
        day = (Q + 28) - ((M / 4) * 31);

        std::cout << M << " " << day << std::endl;

        cnt++;
    }

    return 0;
}
