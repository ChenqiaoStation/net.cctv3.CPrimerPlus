#include <iostream>

using namespace std;

int main() {
    int x, d, k;
    cin >> x >> d >> k;
    for(int i=1;i<k;i++) {
        x+=d;
    }
    cout << x << endl;
    return 0;
}