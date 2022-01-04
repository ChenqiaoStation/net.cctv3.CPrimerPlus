#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;
    string ways[] = {"Walk", "All", "Bike"};
    cout << ways[n<100 ? 0 : n>100 ? 2 : 1] << endl;
    return 0; 
}