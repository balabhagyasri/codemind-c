#include<stdio.h>
int main()
{
	char str[20];
	scanf("%[^
]s",str);
	int i=0;
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>=65 && str[i]<=90)//a=97 && z=122
		{
			str[i]=str[i]+32;
		} 
	}
	printf("%s",str);
 } 