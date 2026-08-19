//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main (){
    int a ,b, c;
    printf("enter a ");
    scanf("%d",&a );
    printf("enter b ");
    scanf("%d",&b);
    
    c= a;
    a = b;
    b = c;
    
    printf("After swapping, a = %d and b = %d\n", a, b);
    
    return 0;
}