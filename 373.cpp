#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    cout << n-(y%x == 0 ? y/x : y/x+1) << endl;
    return 0;
}