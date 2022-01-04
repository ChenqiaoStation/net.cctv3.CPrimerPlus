#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    cout << (c < 'x' ? (char)(int(c+3)) : "abc"[int(c-'x')]) << endl;
    return 0;
}