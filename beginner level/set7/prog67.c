#include <stdio.h>

int main(void) 
{
	int num;
	scanf("%d",&num);
	num+=1;
	while(num%10!=0)
	{
		num=num+1;
	}
	printf("%d",num);
	return 0;
}
