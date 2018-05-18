#include <stdio.h>

int main(void) {
 
	int N;
	scanf("%d",&N);
	int a[N],i;
	for(i=0;i<N;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if((i%2==0)&&(a[i]%2!=0))
	{
		printf("%d",a[i]);
	}
              	else if((i%2!=0)&&(a[i]%2==0))
	{
		printf("%d",a[i]);
	}
	}
	return 0;
}
	
