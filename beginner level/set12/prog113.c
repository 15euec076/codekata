#include <stdio.h>

int main(void) 
{
	int i,n,k,a[50],count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
