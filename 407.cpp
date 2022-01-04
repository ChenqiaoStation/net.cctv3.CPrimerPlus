#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

int list[1000000];

/**
 * @brief 判断素数
 * 
 * @param n 
 * @return int 
 */
int isPrime(int n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i == 0) {
            return 0;
        }
    }
    return n<2 ? 0 : 1;
}

int main() {
    int n;
    string strings[] = {"NO", "YES"};
    cin >> n;
    cout << strings[isPrime(n)] << endl;
    return 0;
}