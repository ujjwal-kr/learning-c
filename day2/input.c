#include<stdio.h>

int main() {
    int x;
    int y;
    int z;

    printf("Enter First number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    z = x+y;

    printf("The sum of %d and %d is %d\n", x, y, z);
}