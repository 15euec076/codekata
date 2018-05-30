#include <stdio.h>

int main(void) {
	int m,i;
	char s[100],r[100],t[100];
	scanf("%d",&m);
	scanf("%s\n%s\n%s",s,r,t);
	if((s[0]=r[0]=t[0])||(s[1]=r[1]=t[1]))
	{
		printf("yes");
	}
	else if((s[1]=s[0])&&(r[1]=r[0])&&(t[1]=t[0]))
	{
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
