#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double r;
    double PI = acos(-1);
    cin >> r;
    printf("%.*lf\n", 2, 4*PI*r*r*r/3);
    return 0;
}