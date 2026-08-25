//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z) {
        printf("%d is the largest number.\n", x);
    } else if (y > x && y > z) {
        printf("%d is the largest number.\n", y);
    } else {
        printf("%d is the largest number.\n", z);
    }   
    return 0 ;
}