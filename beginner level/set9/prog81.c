#include <stdio.h>

int main(void) 
{
	int n1,n2,i;
	for(i=1;i<=3;i++)
	{
	scanf("%d %d\n",&n1,&n2);
	if(n1>n2)
	{
		printf("%d",n1-n2);
	}
	else
	{
		printf("%d",n2-n1);
	}
	}
	return 0;
}
