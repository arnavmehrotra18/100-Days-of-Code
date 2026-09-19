#include<stdio.h>
int main (){
    int sum=0 , digit ,  n  ;
    printf("enter the number \n");
    scanf("%d", &n);
    while (n !=0)
    {
        digit = n %10 ;
        sum = sum + digit;
        n = n / 10 ;
    }


    printf(" sum of the digits is %d ", sum );
    return 0 ; 
}