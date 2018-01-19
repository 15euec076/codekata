#include <stdio.h>
#include<string.h>
int main(void) {
	int i,count=0;
	char a[20];
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!= '\0';i++)
	{
	 count++;
	if(a[i]==' ')
	{
	 count=count-1;
	}
	}
	printf("%d",count);
	return 0;
}
