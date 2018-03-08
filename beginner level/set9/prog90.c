#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[50];
	int i,len;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
