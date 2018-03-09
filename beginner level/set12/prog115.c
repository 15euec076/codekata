#include <stdio.h>
int main(void) 
{
	int i,n,m,a[100],t;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(i==m-1)
		{
			printf("%d",a[i]);
		}
	}
			
	return 0;
}
