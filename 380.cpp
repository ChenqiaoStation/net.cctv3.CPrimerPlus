#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    long a, b;
    cin >> a >> b;
    cout << (a>b ? '>' : a<b ? '<' : '=') << endl;
    return 0;
}