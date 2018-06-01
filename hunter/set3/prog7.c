#include <stdio.h>

int main(void) {
	char s[100],i;
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l-1;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
