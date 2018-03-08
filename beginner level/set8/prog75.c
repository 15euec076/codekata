#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[30];
	int len,i;
	printf("enter the string:");
	scanf("%s",a);
	len=strlen(a);
	if(n%2==0)
	{
		a[n/2]='*';
		a[(n/2)-1]='*';
	}
	else
	{
		a[n/2]='*';
	}
	printf("%s",a);
	return 0;
}
