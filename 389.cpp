#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    int array[3];
    cin >> array[0] >> array[1] >> array[2];
    for(int i=0;i<3;i++) {
        for(int j=i+1;j<3;j++) {
            if(array[i] > array[j]) {
                int t = array[i]; array[i] = array[j]; array[j] = t;
            }
        }
    }
    cout << array[0] << " " << array[1] << " " << array[2] << endl;
    return 0; 
}