#include <stdio.h>
int main(void) 
{
	int n,i;
	scanf("%d",&n);
	int n1,rem;
	while(n!=1)
	{
	rem=n%2;
	n1=n/2;
	printf("%d\n",n1);
	n=rem;
	break;
	}
	return 0;
}
