#include <stdio.h>

int main(void) {
	char s[30];
	scanf("%s",&s);
	if(s[0]=='S' || s[0]=='s')
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
