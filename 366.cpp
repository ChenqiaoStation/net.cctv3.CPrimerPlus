#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, x;
    cin >> x >> a >> b >> c >> d;
    printf("%.*lf\n", 7, a*pow(x, 3) + b*pow(x, 2) + c*x + d);
    return 0;
}