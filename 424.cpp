#include <iostream>

using namespace std;

int isSpecialYear(int year) {
    return year%172800 == 0 ? 1: (year%3200 == 0 ? 0 : (year%400 == 0 ? 1 : (year%100 == 0 ? 0 : (year%4 == 0 ? 1 : 0))));
}

int main() {
    int year, month;
    cin >> year >> month;
    int days[] = {31, 28+isSpecialYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << days[month-1] << endl;
    return 0;
}