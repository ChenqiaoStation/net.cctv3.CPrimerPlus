#include <iostream>
#include <string>

using namespace std;

int mods[] = {0, 0, 0};

/**
 * @brief 统计 1 的个数
 * 
 * @return int 
 */
int count() {
    int count = 0;
    for(int i=0;i<3;i++) {
        if(mods[i] == 1) {
            count ++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int array[] = {3, 5, 7};
    for(int i=0;i<3;i++) {
        if(n%array[i] == 0) {
            mods[i] = 1;
        }
    }
    int c = count();
    if(c == 0) {
        cout << "n" << endl;
    }
    else {
        for(int i=0;i<3;i++) {
            if(mods[i] == 1) {
                cout << array[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}