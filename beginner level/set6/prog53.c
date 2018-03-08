#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int rem,temp=0;
	while(n!=0)
	{
		rem=n%10;
		temp=temp+rem;
		n=n/10;
	}
	printf("%d",temp);
	return 0;
}
