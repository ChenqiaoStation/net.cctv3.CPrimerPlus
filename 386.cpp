#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x;
    cin >> x;
    double result = x>=0 && x<5 ? -x+2.5 : x>=10 && x<20 ? x/2-1.5 : 2-1.5*(x-3)*(x-3);
    printf("%.*lf\n", 3, result);
    return 0; 
}