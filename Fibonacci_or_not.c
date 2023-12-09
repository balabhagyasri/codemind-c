#include<stdio.h>
int main()
{
    int n,i,num1=0,num2=1,nxt,flag=0;
    scanf("%d",&n);
    nxt=num1+num2;
    while(nxt<=n)
    {
        if(nxt==n)
        {
            flag=1;
            break;
        }
        nxt=num1+num2;
        num1=num2;
        num2=nxt;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}