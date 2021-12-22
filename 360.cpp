#include <iostream>

using namespace std;

int time(int a, int b, int years) {
    return (b+years) == 2*(a+years) ? years : time(a, b, years+1);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << time(a, b, 0) << endl;
    return 0;
}