#include <stdio.h>
int main(void)
{
	char s[50];
	int i,n;
	scanf("%s %d",&s,&n);
	int len;
	len=strlen(s);
	for(i=n;i<=len;i++)
	{
		printf("%c",s[i]);
	}

	return 0;
}
