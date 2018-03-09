#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50];
	int i;
	scanf("%[^\n]s",a);
  int len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(s[0]>='a'&&s[0]<='z')
		{
			s[0]-=32;
		}
	if(s[i]==' ' && s[i]>='a' && s[i]<='z')
	{
		s[i+1]-=32;
	}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
