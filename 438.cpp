#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

/**
 * @brief 判断数组元素是否都相同
 * 
 * @param array 
 * @param n 
 * @return int 
 */
int isOnlyOneInArray(int array[], int n) {
    for(int i=0;i<n;i++) {
        if(array[i] != array[0]) {
            return 0;
        }
    }
    return 1;
}

/**
 * @brief 判断是否 Jully Array
 * 
 * @param array 
 * @param n 
 * @return int 
 */
int isJully(int array[], int n) {
    if(isOnlyOneInArray(array, n)) {
        return 1;
    }
    else {
        int marker[n];
        for(int i=0;i<n-1;i++) {
            marker[i] = 0;
        }
        for(int i=1;i<n;i++) {
            int index = abs(array[i] - array[i-1]);
            if(index > n-1) {
                return 0; // 如果不满足 0~n-1，就不用比了
            }
            else if(marker[index-1] == 1) {
                return 0;
            }
            else {
                marker[index-1] = 1;
            }
        }
        return 1;
    }
}

int main() {
    int n;
    int array[3001];
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> array[i];
    }
    cout << (isJully(array, n) == 1 ? "Jolly" : "Not jolly") << endl;
    return 0;
}