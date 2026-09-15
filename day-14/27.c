#include<stdio.h>
int main ()
{
    int i,n ,sum=0 ;
    printf("enter the number n \n");
        scanf("%d",&n);
for (i = 1;i <= 2*n-1 ; i= i+2)
{
    sum = sum +i ;

}
printf("sum of first n odd numbers is %d", sum );
return 0 ;
}