#include <stdio.h>
int main(void)
{
	int i,count=0;
	char a[200];
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!= '\0';i++)
	{
	 if(a[i]=='.')
	 {
	  count++;
	 }
	}
	printf("%d",count);
	return 0;
}
