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
    return 1;
}

/**
 * @brief 某一位是否含有7
 * 
 * @param number 
 * @return int 
 */
int isContains7(int number) {
    while(number >= 10) {
        int mod = number%10;
        if(mod == 7) {
            return 1;
        }
        else {
            number /= 10;
        }
    }
    return number == 7 ? 1 : 0;
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
        if(isContains7(i) == 1 && isPrime(i) == 1) {
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
            cout << list[i] << " " << endl;
        }
        cout << list[size-1] << endl;
    }
    return 0;
}