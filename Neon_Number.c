#include<stdio.h>
int main()
{
    int num,r,sum=0;
    scanf("%d",&num);
    int sq=num*num;
    int n=sq;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum==num)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}