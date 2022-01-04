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

/**
 * @brief 统计满足条件的素数
 * 
 * @param m 
 * @param n 
 * @return int 数组元素的个数
 */
int countPrimes(int m, int n) {
    int count = 0;
    for(int i=m;i<=n;i++) {
        if(isPrime(i) == 1) {
            list[count] = i;
            count ++;
        }
    }
    return count;
}

int main() {
    int m, n;
    cin >> m >> n;
    int size = countPrimes(m, n);
    if(size == 0) {
        cout << "none" << endl;
    }
    else {
        for(int i=0;i<size-1;i++) {
            cout << list[i] << " ";
        }
        cout << list[size-1] << endl;
    }
    return 0;
}