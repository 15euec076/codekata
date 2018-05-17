#include<stdio.h>
int main(void)
{
	int a[10],n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]+a[j]==0)
		{
			printf("%d %d",a[i],a[j]);
		}
	}
	}
}
