#include <iostream>

using namespace std;

void print(char c) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<i;j++) {
            cout << " ";
        }
        for(int j=0;j<5;j++) {
            cout << c;
        }
        cout << endl;
    }
}

int main() {
    char c;
    cin >> c;
    print(c);
    return 0;
}