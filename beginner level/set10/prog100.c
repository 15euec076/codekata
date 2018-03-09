#include <stdio.h>
 int main(void) 
{
	int n,rem,p=1;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		p=p*remainder;
		n=n/10;
	}
	printf("%d",p);
	return 0;
}
