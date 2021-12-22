#include <iostream>
#include <string>

using namespace std;

int isSpecialYear(int year) {
    return year%3200 == 0 ? 0 : (year%400 == 0 ? 1 : (year%100 == 0 ? 0 : (year%4 == 0 ? 1 : 0)));
}

int main() {
    string s = "NY";
    int year;
    cin >> year;
    cout << s[isSpecialYear(year)] << endl;
    return 0;
}