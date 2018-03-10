#include <stdio.h>
#include<string.h>
int main(void) { 
	int N;
	scanf("%d",&N);
	int fact=1;
	for(int i=1;i<=N;i++)
	{
	 fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
