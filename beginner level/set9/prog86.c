#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[100];
	int i,flag=0;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==s[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
