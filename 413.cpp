#include <iostream>

using namespace std;

int main() {
    for(int i=1000;i<10000;i++) {
        int array[4] = {i/1000, i/100%10, i/10%10, i%10};
        if(array[0] == array[3] && array[1] == array[2]) {
            cout << i << endl;
        }
    }
    return 0;
}