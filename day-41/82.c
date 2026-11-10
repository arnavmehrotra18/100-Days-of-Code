#include<stdio.h>
int main ()
{
    int num , rem , result=0 , count=0,mul=1 ,cnt ;
    printf("enter the number you want to check ");
    scanf ("%d", &num );
    
     int q =num ;
        
        while(q!=0 )
        { q = q/ 10;
            count++;

        }
        cnt = count ;
        q = num;
        
        while (q!=0)
        {rem = q %10 ;
            while(cnt !=0)
           { mul = mul*rem;
            cnt--;

        }
        result = result+ mul
        ;

        cnt = count;
        q = q/ 10;
        mul = 1 ;
    } 
        if(result == num )
printf("%d is an armstrong number ", num );
else
printf("%d is not an armstrong number ", num);
    return 0;
    
}