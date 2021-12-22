#include <iostream>

using namespace std;

/**
 * @brief 提交错了三次
 * 1. 因为最后返回 index，所以一直想控制 index
 * 2. 没有注意到题目里面人家要是递增序列，所以还是围绕这个条件展开的，最后想到了可以用一个变量每次保存一下当前满足条件的最大值
 * 
 * @param array 
 * @param length 
 * @return int 
 */
int findIndex(int array[], int length) {
    int max = -1; // 当前满足条件的最大值
    int count = 0;
    for(int i=0;i<length;i++) {
        if(array[i]%6 == 0 && array[i]%10 == 0) {
            if(array[i] > max) {
                max = array[i];
                count ++;
                if(count == 5) {
                    return i-3;
                }
            }
            else {
                count = 1; // 当前这个仍然满足条件
            }
        }
        else {
            max = -1;
            count = 0;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int array[1001];
    for(int i=0;i<n;i++) {
        cin >> array[i];
    }
    int index = findIndex(array, n);
    if(index < 0) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << "\n" << index << endl;
    }
    return 0;
}