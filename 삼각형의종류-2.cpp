#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float get(float _x1, float _y1, float _x2, float _y2) {
    return sqrt(pow(_x1 - _x2, 2) + pow(_y1 - _y2, 2));
}

void swap(float& _a, float& _b) {
    float temp = _a;
    _a = _b;
    _b = temp;
}

void sortThreeValues(float& _a, float& _b, float& _c) {
    if (_a < _b) {
        swap(_a, _b);
    }
    if (_a < _c) {
        swap(_a, _c);
    }
    if (_b < _c) {
        swap(_b, _c);
    }
}

struct Point {
    double x, y;
};

bool arePointsCollinear(Point p1, Point p2, Point p3) {
    return (p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) == 0;
}

bool canFormTriangle(Point p1, Point p2, Point p3) {

    if (arePointsCollinear(p1, p2, p3)) {
        return false;
    }
    return true;
}

int main() {
    float t;
    Point p1, p2, p3;

    cin >> t;

    float x1, y1, x2, y2, x3, y3;
    float dot1, dot2;

    float sum = 0;
    float a, b, c;

    float tempx, tempy;

    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        p1.x = x1;
        p1.y = y1;

        p2.x = x2;
        p2.y = y2;

        p3.x = x3;
        p3.y = y3;

        if (canFormTriangle(p1, p2, p3)) {
            a = get(x1, y1, x2, y2);
            b = get(x2, y2, x3, y3);
            c = get(x1, y1, x3, y3);

            sortThreeValues(c, b, a);

            if (floor(a * a + 0.5) + floor(b * b + 0.5) == floor(c * c + 0.5)) {
                sum = 1;
            }
            else if (floor(a * a + 0.5) + floor(b * b + 0.5) < floor(c * c + 0.5)) {
                sum = 2;
            }
            else if (floor(a * a + 0.5) + floor(b * b + 0.5) > floor(c * c + 0.5)) {
                sum = 3;
            }
        }
        else {
            sum = 0;
        }
        cout << sum << endl;
    }

    return 0;
}