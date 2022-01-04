#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

typedef struct Point {
    double x;
    double y;
};

double distance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
    Point a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    double ab = distance(a, b);
    double ac = distance(a, c);
    double bc = distance(b, c);
    double p = (ab + ac + bc)/2;
    printf("%.*lf\n", 2, sqrt(p * (p-ab) * (p-ac) * (p-bc)));
    return 0;
}