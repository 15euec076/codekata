#include <stdio.h>

int main(void) 
{
	char s[20];
	int i;
	scanf("%s",s);
	 int len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(i%2==0)
		{
			printf("%c",s[i]);
		}
		
	}
	printf(" ");
	for(i=0;i<len;i++)
	{
		if(i%2==1)
		{
			printf("%c",s[i]);
		}
		
	}
	
	return 0;
}
