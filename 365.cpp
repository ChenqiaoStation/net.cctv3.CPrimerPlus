#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    printf("%.*lf", 3, b*100./a);
    puts("%");
    return 0;
}