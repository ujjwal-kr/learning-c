#include<stdio.h>

int main() {
    int x;
    int r;
    x = 1;
    r = 100;

    printf("Enter the divisor: ");
    scanf("%d", &x);

    printf("Enter the range from 0: ");
    scanf("%d", &r);

    int i = 0;
    while (i <= r) {
        if (i % x == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
    
}


