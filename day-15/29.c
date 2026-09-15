#include<stdio.h>
int main ()
{
int i , n , factorial=1 ;
printf("enter the number \n");
scanf("%d", &n );

for (i=1 ; i <=n ; i= i +1)
{
    factorial= factorial*i ;
}
printf("the factorial of the number is %d", factorial);
return 0 ;




}