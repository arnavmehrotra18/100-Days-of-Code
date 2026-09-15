#include<stdio.h>
int main ()
{
int i , product=1 , n ;
printf("enter the number n \n");
scanf("%d",&n);
for (i =2 ; i <= n ; i=i+2)
{
    product = product*i;
}
printf ("the product of the n even numbers is %d",product );
return 0 ;



}