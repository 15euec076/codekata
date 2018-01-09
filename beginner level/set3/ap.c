#include <stdio.h>

int main(void) {
int a,n,d,sum;
scanf("%d",&a);
scanf("%d",&n);
scanf("%d",&d);
sum=(n*(2* a+(n-1)*d))/2;
printf("%d",sum);
	return 0;
}
