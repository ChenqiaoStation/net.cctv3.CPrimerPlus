#include <iostream>

using namespace std;
int main() {
    int n;
    int array[1001];
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> array[i];
    }
    for(int i=0;i<n;i++) {
        if(array[i]%6 == 0 && array[i]%10 == 0) {
            cout << array[i] << " ";
        }
    }
    return 0;
}