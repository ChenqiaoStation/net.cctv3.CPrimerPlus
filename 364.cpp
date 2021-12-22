#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    printf("%.*lf\n", 9, a*1./b);
    return 0;
}