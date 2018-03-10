#include <stdio.h>
#include<string.h>
int main(void) { 
	int N,rev=0,rem;
	scanf("%d",&N);
	while(N!=0)
	{
	  rem=N%10;
	  rev=rev*10+rem;
	  N=N/10;
	}
	printf("%d",rev);
	return 0;
}
