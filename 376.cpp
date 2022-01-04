#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string s[] = {"positive", "zero", "negative"};
    long n;
    cin >> n;
    cout << s[n>0 ? 0 : n<0 ? 2 : 1] << endl;
    return 0;
}