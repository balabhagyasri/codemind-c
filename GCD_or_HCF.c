#include<stdio.h>
int main()
{
    int num1,num2,i,gcd;
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}