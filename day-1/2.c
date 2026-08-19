//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main (){
    int a ,b;
    printf("enter a ");
    scanf("%d",&a );
    printf("enter b ");
    scanf("%d",&b);
    printf("the sum of the two numbers is %d \n", a+b);
    printf("the difference of the two numbers is %d \n", a-b);
    printf("the product of the two numbers is %d \n", a*b);
    if(b != 0){
        printf("the quotient of the two numbers is %f \n", (float)a/b);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}