#include <stdio.h>
#include<math.h>

int main() 
{
    int n=0;
    int sum=0;
    int i=0;
    scanf("%d",&n);
    while(n)
    {
        int m=n%10;
        n=n/10;
        if(m%2==1)
        {
            sum+=1*pow(10,i);
        }
        i++;
    }
    printf("%d",sum);


    
}
