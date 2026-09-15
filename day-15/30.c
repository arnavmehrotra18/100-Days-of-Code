#include<stdio.h>
int main (){
    int i , reverse = 0 , digits ;
    printf("enter the number to be reversed \n");
    scanf("%d", &i);
    while (i != 0 )
    {
        digits = i %10 ;
        reverse = reverse*10 + digits ;
        i = i / 10  ;
    }
    printf("reversed number is %d ", reverse);
    return 0 ;
}