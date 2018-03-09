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
		if(a[0]>='a'&& a[0]<='z')
		{
			s[0]-=32;
		}
	if(a[i]==' ' && a[i]>='a' && a[i]<='z')
	{
		a[i+1]-=32;
	}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
