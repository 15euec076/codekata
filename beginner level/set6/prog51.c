#include <stdio.h>

int main(void) 
{
	int N,rem,rev=0;
	scanf("%d",&N);
	while(N!=0)
	{
		rem=N%10;
		rev=(rev*10)+rem;
		N=N/10;
	}
	N=rev;
	while(N!=0)
	{
		rem=N%10;
		printf("%d ",rem);
		N=N/10;
	}
	return 0;

}
