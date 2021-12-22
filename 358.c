#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    printf("%.*lf\n", 8, c);
    return 0;
}