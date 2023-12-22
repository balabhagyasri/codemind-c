#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];//declaration
    scanf("%[^
]s",str);//reading
    int len=strlen(str);//passing string name through predefined function strlen
    printf("%d",len);
}