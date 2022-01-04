#include <stdio.h>
int main() {
    int i, j;
    int sum = 0;;
    for(i=0;i<10;i++) {
        for(j=0;j<i+1;j++) {
            sum++;
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}