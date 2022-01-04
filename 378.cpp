#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string s[] = {"even", "odd"};
    long n;
    cin >> n;
    cout << s[n%2] << endl;
    return 0;
}