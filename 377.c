#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    printf("%.*lf\n", 2, a<0 ? -a : a);
    return 0;
}