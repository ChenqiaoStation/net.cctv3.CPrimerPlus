#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double r;
    double PI = acos(-1);
    cin >> r;
    printf("%.*lf %.*lf %.*lf\n", 4, 2*r, 4, 2*PI*r, 4, PI*r*r);
    return 0;
}