#include<Stdio.h>
int main (){
    int n,i ;
    printf("enter a number \n");
    scanf("%d",&n);
    printf("the factors are ");
    for (i = 1 ;  i <= n ; i++)
    {
        if (n %1 ==0)
        {
            printf("%d",i )
            ;
        }
    }
    return  0 ;
}