#include <iostream>
#include <string>

using namespace std;

int main() {
    char c;
    string result[] = {"NO", "YES"};
    cin >> c;
    cout << result[(int)(c) % 2] << endl;
    return 0;
}