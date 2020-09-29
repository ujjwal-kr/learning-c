#include<stdio.h>

int main() {
    int x = 50;
    int y = x++; // incremental
    int z = y * ++x; // y multiplied by incremental of x

    printf("%d\n",y);
    printf("%d", z);

}