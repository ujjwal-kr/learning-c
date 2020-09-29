#include<stdio.h>

int main() {
    int age;
    printf("Enter your age ");
    scanf("%d", &age);

    if(age <= 0) {
        printf("Wait, what ?\n");
        return 0;
    }
    else if (age < 18) {
        printf("MINOR\n");
        return 0;
    }

    else if (age > 100) {
        printf("Good Luck\n");
        return 0;
    }

    else {
        printf("Not a minor\n");
    }
    
}